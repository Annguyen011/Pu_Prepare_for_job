#include<stdio.h>

#define PI 3.14
#define CONG(a, b) (a + b)
// macro chỉ là thay thế kh kiểm tra lỗi
// const là hằng số có kiểu dữ liệu, có thể kiểm tra lỗi
void Bai1(int a, int b, int c)
{
    int ngay, thang, nam;
    ngay = a;
    thang = b;
    nam = c;

    // printf("Nhap ngay: ");
    // scanf("%d", &ngay);
    // printf("Nhap thang: ");
    // scanf("%d", &thang);
    // printf("Nhap nam: ");
    // scanf("%d", &nam);
    printf("Ngay thang nam cua ban la: %d/%d/%d", ngay, thang, nam);
    printf("\n Ngay thang nam la: %02d/%02d/%04d", ngay, thang, nam);
}

int main() {
    // printf("Hello world!");
    // printf("\nPI = %f", PI);
    // printf("\nCong 2 va 3 = %d", CONG(2, 3));
    // printf("\n");
    // int x = 100;
    // printf("Gia tri cua x = %d", x);
    // char ten[50] = "Nguyen Van A";
    // int tuoi = 26;
    // fgets(ten, sizeof(ten), stdin);
    // printf("Ten cua ban la: %s", ten);
    // scanf("%d", &tuoi);
    // printf("Tuoi cua ban la: %d \n", tuoi);
    Bai1(1,2,2024);
    return 0;
}