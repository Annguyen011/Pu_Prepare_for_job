# Makefile mô phỏng từng giai đoạn biên dịch chương trình C
# Gõ 'make' hoặc 'make all' để chạy toàn bộ các bước từ đầu đến cuối

TARGET = chuong_trinh
SRC = main.c

all: link

# Giai đoạn 1: Tiền xử lý (Preprocessing)
# Nhận file .c, xử lý các lệnh #include, #define và tạo ra file .i
preprocess: $(SRC)
	gcc -E $(SRC) -o main.i
	@echo "[Bước 1] Tiền xử lý xong -> Đã tạo file 'main.i' (Hãy mở file này ra xem thử)"

# Giai đoạn 2: Biên dịch (Compilation)
# Nhận file .i, dịch thành ngôn ngữ Hợp ngữ (Assembly) và tạo ra file .s
compile: preprocess
	gcc -S main.i -o main.s
	@echo "[Bước 2] Biên dịch xong -> Đã tạo file hợp ngữ 'main.s'"

# Giai đoạn 3: Hội dịch (Assembly)
# Nhận file .s, dịch thành mã máy (Object file) dạng nhị phân và tạo ra file .o
assemble: compile
	gcc -c main.s -o main.o
	@echo "[Bước 3] Hội dịch xong -> Đã tạo file mã máy 'main.o'"

# Giai đoạn 4: Liên kết (Linking)
# Nhận file .o, kết nối với các thư viện hệ thống để tạo ra file chạy cuối cùng
link: assemble
	gcc main.o -o $(TARGET)
	@echo "[Bước 4] Liên kết xong -> Đã tạo file thực thi: '$(TARGET)'"
	@echo "==> Hoàn thành! Gõ './$(TARGET)' để chạy chương trình."

# Lệnh dọn dẹp các file trung gian
clean:
	rm -f main.i main.s main.o $(TARGET)
	@echo "Đã xóa toàn bộ các file được sinh ra."
