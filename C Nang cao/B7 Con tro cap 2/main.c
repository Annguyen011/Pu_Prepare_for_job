#include<stdio.h>

void bai_tap_1()
{
    int x = 100;
    int *ptr1 = &x; // Assign the value of x to ptr1
    printf("Value of ptr1: %d\n", ptr1);
    int **ptr2 = &ptr1;

    printf("Value of ptr2: %d\n", ptr2);
    
}

int main()
{
    printf("Bai tap 1:\n");

    return 0;
}