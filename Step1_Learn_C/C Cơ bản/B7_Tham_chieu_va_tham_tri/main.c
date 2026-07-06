#include<stdio.h>

// su khac nhau giua tham chieu va tham tri la tham chieu se truyen dia chi
// cua bien vao ham, trong khi tham tri se truyen gia tri cua bien vao ham.
//  Do do, khi su dung tham chieu, neu thay doi gia tri trong ham thi gia tri
//  ben ngoai cung bi thay doi theo, trong khi su dung tham tri thi gia tri ben
//  ngoai khong bi thay doi khi thay doi gia tri trong ham.

void tinh_tong2(int a, int b, int *c);
int tinh_tong(int a, int b);

int	main(int argc, char **argv)
{
    int tong1 = tinh_tong(3, 4);
    printf("Tong (tham tri): %d\n", tong1);

    int tong2;
    tinh_tong2(3, 4, &tong2);
    printf("Tong 2 (tham chieu bang con tro): %d\n", tong2);

    return 0;
}

int tinh_tong(int a, int b)
{
    return a + b;
}

void tinh_tong2(int a, int b, int *c)
{
    *c = a + b;
}