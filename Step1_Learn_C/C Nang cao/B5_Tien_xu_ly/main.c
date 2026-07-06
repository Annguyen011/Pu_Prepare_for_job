#include<stdio.h>

void bit_field()
{
    typedef struct {
        unsigned int a : 3; // 3 bits
        unsigned int b : 5; // 5 bits
        unsigned int c : 10; // 10 bits
    } BitField_t;

    printf("Size of BitField_t: %zu bytes\n", sizeof(BitField_t));
}

int main()
{


    return 0;
}