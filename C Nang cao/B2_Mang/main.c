#include<stdio.h>

void in_mang(int *pta, int n)
{
    printf("Cac phan tu trong mang la: ");
    for(int i = 0; i < n; i++)
    {
        printf("%d ", *(pta + i));
    }
}

int main() {
    // khai bao mang
    int a[5] = {1, 2, 3, 4, 5};
    in_mang(a, 5);

    int mang[100];
    int so_phan_tu;
    // tham tri la khong thay doi gia tri khi dua vao ham
    // thao chieu la thay doi gia tri khi dua vao ham
    return 0;
}