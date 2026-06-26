#include<stdio.h>

int main() {
    // Khai báo một biến kiểu struct
    struct SinhVien {
        char ten[50];
        int tuoi;
        float diemTB;
    };

    // Khởi tạo một biến kiểu struct SinhVien
    struct SinhVien sv1 = {"Nguyen Van A", 20, 8.5};

    // In thông tin của sinh viên
    printf("Ten: %s\n", sv1.ten);
    printf("Tuoi: %d\n", sv1.tuoi);
    printf("Diem TB: %.2f\n", sv1.diemTB);

    return 0;
}
