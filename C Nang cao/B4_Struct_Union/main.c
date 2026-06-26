#include<stdio.h>

void con_tro_hang_va_hang_con_tro() {
    // Khai báo một hằng số
    const int NAM_HOC = 2026;

    // Khai báo một con trỏ hằng
    const int *ptr_hang = &NAM_HOC;

    // Khai báo một hằng con trỏ
    int *const ptr_con_tro = &NAM_HOC;

    // Khai báo một hằng con trỏ hằng
    const int *const ptr_hang_con_tro = &NAM_HOC;

    printf("Giá trị của NAM_HOC: %d\n", NAM_HOC);
    printf("Giá trị thông qua con trỏ hằng: %d\n", *ptr_hang);
    printf("Giá trị thông qua hằng con trỏ: %d\n", *ptr_con_tro);
    printf("Giá trị thông qua hằng con trỏ hằng: %d\n", *ptr_hang_con_tro);
}

int main() {

    return 0;
}
