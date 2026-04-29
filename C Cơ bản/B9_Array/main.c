#include<stdio.h>

void nhap_mang(int a[], int n);
void in_mang(int a[], int n);

int	main(int argc, char **argv)
{
    int arr[5] = {1, 2, 3, 4, 5};
    printf("Mang arr: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");


    return 0;
}

void nhap_mang(int a[], int n) 
{
    for (int i = 0; i < n; i++) {
        printf("Nhap phan tu thu %d: ", i);
        scanf("%d", &a[i]);
    }
    in_mang(a, n);
}

void in_mang(int a[], int n) 
{
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
}