#include<stdio.h>
#include<stdlib.h>

void cap_phat_dong()
{
    int *ptr = (int*)malloc(sizeof(int)); // Allocate memory for an integer
    if (ptr == NULL) {
        printf("Memory allocation failed\n");
        return;
    }
    ptr[0] = 42; // Assign a value to the allocated memory
    printf("Value at allocated memory: %d\n", ptr[0]);

    free(ptr); // Free the allocated memory
}

void cap_phat_dong_2()
{
    int *ptr2 = calloc(5, sizeof(int)); // Allocate memory for an array of 5 integers
    if (ptr2 == NULL) {
        printf("Memory allocation failed\n");
        return;
    }
    for (int i = 0; i < 5; i++) {
        ptr2[i] = i * 10; // Assign values to the allocated array
    }
    printf("Values at allocated array: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", ptr2[i]);
    }
    printf("\n");
    free(ptr2); // Free the allocated memory
    // callloc gan tat ca gia tri bang 0
}

int main()
{
    cap_phat_dong();


    return 0;
}