#include<stdio.h>

#define PI 3.14
#define CONG(a, b) (a + b)
// macro chỉ là thay thế kh kiểm tra lỗi
// const là hằng số có kiểu dữ liệu, có thể kiểm tra lỗi
int main() {
    printf("Hello world!");
    printf("\nPI = %f", PI);
    printf("\nCong 2 va 3 = %d", CONG(2, 3));
    printf("\n");
    int x = 100;
    printf("Gia tri cua x = %d", x);
    return 0;
}