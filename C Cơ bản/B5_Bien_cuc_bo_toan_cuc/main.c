#include<stdio.h>

// static khi thoat khoi ham thi bien cuc bo khong bi thu hoi vung nho, gia tri van duoc luu lai
void tangbien()
{
    static int x = 0; // bien cuc bo, chi duoc khoi tao 1 lan duy nhat
    x++;
    printf("Gia tri cua x = %d\n", x);
}

// static khi su dung bien va ham toan cuc chi duoc su dung trong file do, khong the su dung o file khac
static int y = 0; // bien toan cuc, chi su dung trong file nay

int	main(int argc, char **argv)
{


    return 0;
}
