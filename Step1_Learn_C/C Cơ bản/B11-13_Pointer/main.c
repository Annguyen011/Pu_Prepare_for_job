#include <stdio.h>

int main() {
    int mon_do = 100;       // Đây là biến bình thường (chứa giá trị 100)

    // 1. CON TRỎ CẤP 1
    int *p1;                // Khai báo con trỏ cấp 1
    p1 = &mon_do;           // p1 lưu địa chỉ của biến 'mon_do'

    // 2. CON TRỎ CẤP 2
    int **p2;               // Khai báo con trỏ cấp 2
    p2 = &p1;               // p2 lưu địa chỉ của con trỏ 'p1'

    // 3. CON TRỎ CẤP 3
    int ***p3;              // Khai báo con trỏ cấp 3
    p3 = &p2;               // p3 lưu địa chỉ của con trỏ 'p2'


    // IN KẾT QUẢ RA MÀN HÌNH ĐỂ KIỂM TRA
    printf("Gia tri ban dau cua mon_do: %d\n", mon_do);

    // Dùng 1 dấu * để vào nhà p1 lấy đồ
    printf("Lay gia tri qua con tro p1: %d\n", *p1);

    // Dùng 2 dấu * để từ p2 -> p1 -> mon_do
    printf("Lay gia tri qua con tro p2: %d\n", **p2);

    // Dùng 3 dấu * để từ p3 -> p2 -> p1 -> mon_do
    printf("Lay gia tri qua con tro p3: %d\n", ***p3);

    return 0;
}