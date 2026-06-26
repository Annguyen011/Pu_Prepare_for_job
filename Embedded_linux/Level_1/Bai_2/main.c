#include <stdio.h>

// Định nghĩa một hằng số để xem nó thay đổi thế nào sau bước Tiền xử lý
#define NAM_HOC 2026

int main() {
    // Đây là dòng comment, nó sẽ bị xóa bỏ ở giai đoạn Tiền xử lý (Preprocessing)
    printf("Chào bạn! Chúc bạn học lập trình nhúng thật tốt trong năm %d!\n", NAM_HOC);
    return 0;
}

/*
Hướng dẫn sử dụng file Makefile đính kèm để xem tận mắt

Sau khi tải về và giải nén, bạn hãy mở Terminal lên, di chuyển vào thư mục vừa giải nén và làm các bước sau để "ép" quá trình biên dịch dừng lại ở từng bước cho bạn xem:

Bước 1: Gõ lệnh make preprocess

Bạn sẽ thấy một file mới tên là main.i xuất hiện. Mở nó ra, kéo xuống cuối cùng, bạn sẽ thấy mã C của bạn, nhưng comment đã biến mất và hằng số đã được thay thế.

Bước 2: Gõ lệnh make compile

File main.s sẽ xuất hiện. Hãy mở nó ra để xem ngôn ngữ Assembly trông như thế nào.

Bước 3: Gõ lệnh make assemble

File main.o sẽ xuất hiện. Đây là mã máy (nhị phân).

Bước 4: Gõ lệnh make link

File chạy mang tên chuong_trinh được sinh ra. Bạn gõ lệnh ./chuong_trinh để xem kết quả hoạt động nhé.

Sau khi thực hành xong, bạn chỉ cần gõ lệnh make clean để dọn dẹp sạch sẽ toàn bộ các file rác trung gian này.

*/