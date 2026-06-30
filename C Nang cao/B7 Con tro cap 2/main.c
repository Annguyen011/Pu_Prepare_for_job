#include<stdio.h>

void bai_tap_1()
{
    int x = 100;
    int *ptr1 = &x; // Assign the value of x to ptr1
    printf("Value of ptr1: %d\n", ptr1);
    int **ptr2 = &ptr1;

    printf("Value of ptr2: %d\n", ptr2);
    
}

void bai_tap_2()
{
    int *ptr[3];
    
    for (int i = 0; i < 3; i++)
    {
        ptr[i] = (int *)malloc(sizeof(int));
        scanf("%d", ptr[i]);
    }

    for
}

int main()
{
    printf("Bai tap 1:\n");

    return 0;
}