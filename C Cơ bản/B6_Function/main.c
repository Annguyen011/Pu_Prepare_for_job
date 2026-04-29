#include<stdio.h>

void in_thong_tin_ca_nhan(char ten[], int tuoi, float chieu_cao);
void nhap_thong_tin_ca_nhan(void);


int main()
{

    return 0;
}

void nhap_thong_tin_ca_nhan(void)
{
    char ten[50];
    int tuoi;
    float chieu_cao;

    printf("Nhap ten: ");
    fgets(ten, sizeof(ten), stdin);

    printf("Nhap tuoi: ");
    scanf("%d", &tuoi);

    printf("Nhap chieu cao: ");
    scanf("%f", &chieu_cao);
    in_thong_tin_ca_nhan(ten, tuoi, chieu_cao);
}

void in_thong_tin_ca_nhan(char ten[], int tuoi, float chieu_cao)
{
    printf("\nThong tin ca nhan:\n");
    printf("Ten: %s", ten);
    printf("Tuoi: %d\n", tuoi);
    printf("Chieu cao: %.2f\n", chieu_cao);
}