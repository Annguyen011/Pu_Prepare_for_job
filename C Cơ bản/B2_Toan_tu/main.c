#include<stdio.h>
#include<stdlib.h>

#define x = 0b11101110;

void bai1()
{
     // Set 1 bit o vi tri bat ki len 1
    int bit_position;
    scanf("%d", &bit_position);
    x |= (1 << bit_position);
    printf("Gia tri cua x sau khi set bit %d len 1: %hhu\n", bit_position, x);
}

void bai2()
{
    // clear 1 bit o vi tri ve 0
    int bit_position;
    scanf("%d", &bit_position);
    x &= ~(1 << bit_position);
    printf("Gia tri cua x sau khi clear bit %d ve 0: %hhu\n", bit_position, x);
}

void bai3()
{
    // toggle 1 bit o vi tri bat ki
    int bit_position;
    scanf("%d", &bit_position);
    x ^= (1 << bit_position);
}

int	main(int argc, char **argv)
{
    bai1();

    // int a = 10, b = 20;
    // printf("a = %d, b = %d\n", a, b);
    // printf("a + b = %d\n", a + b);
    // printf("a - b = %d\n", a - b);
    // printf("a * b = %d\n", a * b);
    // printf("a / b = %d\n", a / b);
    // printf("a %% b = %d\n", a % b);

    // // toan tu gan
    // a += 5; // a = a + 5
    // printf("a sau khi cong 5 = %d\n", a);
    // a -= 5; // a = a - 5
    // printf("a sau khi tru 5 = %d\n", a);
    // a *= 5; // a = a * 5
    // printf("a sau khi nhan 5 = %d\n", a);
    // a /= 5; // a = a / 5
    // printf("a sau khi chia 5 = %d\n", a);
    // a %= 5; // a = a % 5

    printf("\nPress Enter to exit...");
    while (getchar() != '\n'); // Clear the leftover newline from previous scanf
    getchar(); // Wait for user to press Enter

    return 0;
}
