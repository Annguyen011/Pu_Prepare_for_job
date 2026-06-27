#include<stdio.h>

typedef struct {
    char ten[50];
    int tuoi;
    char que_quan[50];
    float diem_trung_binh;
} SinhVien_t;

void con_tro_hang_va_hang_con_tro();
void co_ban_struct();
void nhap_thong_tin_sinh_vien(SinhVien_t *sv);
void in_thong_tin_sinh_vien(SinhVien_t *sv);

int main() {
    SinhVien_t sv;

    return 0;
}

void nhap_thong_tin_sinh_vien(SinhVien_t *sv) {
    // 1. Nhập Tên
    printf("Nhập tên sinh viên: ");
    fflush(stdout); // Ép máy tính in câu nhắc ra màn hình ngay lập tức
    fgets(sv->ten, sizeof(sv->ten), stdin);

    // 2. Nhập Tuổi
    printf("Nhap tuổi sinh viên: ");
    fflush(stdout);
    scanf("%d", &sv->tuoi);

    // BƯỚC QUAN TRỌNG: Dọn rác (dấu Enter) kẹt lại sau lệnh scanf
    // (Dùng cái này thay cho fflush(stdin) để chạy tốt trên mọi hệ điều hành)
    while(getchar() != '\n'); 

    // 3. Nhập Quê quán
    printf("Nhap quê quán sinh viên: ");
    fflush(stdout);
    fgets(sv->que_quan, sizeof(sv->que_quan), stdin);

    // 4. Nhập Điểm
    printf("Nhap điểm trung bình sinh viên: ");
    fflush(stdout);
    scanf("%f", &sv->diem_trung_binh);
}

void in_thong_tin_sinh_vien(SinhVien_t *sv) {
    printf("Tên: %s\n", sv->ten);
    printf("Tuổi: %d\n", sv->tuoi);
    printf("Quê quán: %s\n", sv->que_quan);
    printf("Điểm trung bình: %.2f\n", sv->diem_trung_binh);
}

void co_ban_struct() {
    // Khai báo một struct
    struct SinhVien {
        char ten[50];
        int tuoi;
        float diem_trung_binh;
    };

    typedef struct {
        char ten[50];
        int tuoi;
        char que_quan[50];
        float diem_trung_binh;
    } SinhVien_t;

    SinhVien_t sv2;
    printf("Nhập tên sinh viên: ");
    fgets(sv2.ten, sizeof(sv2.ten), stdin);
    printf("Nhap tuổi sinh viên: ");
    scanf("%d", &sv2.tuoi);
    printf("Nhap quê quán sinh viên: ");
    fflush(stdin); // Xóa bộ đệm đầu vào trước khi đọc chuỗi
    fgets(sv2.que_quan, sizeof(sv2.que_quan), stdin);
    printf("Nhap điểm trung bình sinh viên: ");
    scanf("%f", &sv2.diem_trung_binh);

    // Khởi tạo một biến struct
    struct SinhVien sv1 = {"Nguyen Van A", 20, 8.5};

    // Truy cập các thành viên của struct
    printf("Tên: %s\n", sv1.ten);
    printf("Tuổi: %d\n", sv1.tuoi);
    printf("Điểm trung bình: %.2f\n", sv1.diem_trung_binh);
}

void con_tro_hang_va_hang_con_tro() {
    // // Khai báo một hằng số
    // const int NAM_HOC = 2026;

    // // Khai báo một con trỏ hằng
    // const int *ptr_hang = &NAM_HOC;

    // // Khai báo một hằng con trỏ
    // int *const ptr_con_tro = &NAM_HOC;

    // // Khai báo một hằng con trỏ hằng
    // const int *const ptr_hang_con_tro = &NAM_HOC;

    // printf("Giá trị của NAM_HOC: %d\n", NAM_HOC);
    // printf("Giá trị thông qua con trỏ hằng: %d\n", *ptr_hang);
    // printf("Giá trị thông qua hằng con trỏ: %d\n", *ptr_con_tro);
    // printf("Giá trị thông qua hằng con trỏ hằng: %d\n", *ptr_hang_con_tro);
}