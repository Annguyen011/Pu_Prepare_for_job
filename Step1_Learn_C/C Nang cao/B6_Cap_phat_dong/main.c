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

void bai_tap_1()
{
    typedef struct
    {
        char name[50];
        int tuoi;
        int nam_sinh;
    } sinh_vien_t;

    sinh_vien_t *sv = (sinh_vien_t*)malloc(sizeof(sinh_vien_t)); // Allocate memory for a student
    if (sv == NULL) {
        printf("Memory allocation failed\n");
        return;
    }
    sv->tuoi = 20;
    sv->nam_sinh = 2004;
    snprintf(sv->name, sizeof(sv->name), "Nguyen Van A");
    printf("Student Name: %s, Age: %d, Year of Birth: %d\n", sv->name, sv->tuoi, sv->nam_sinh);
    free(sv); // Free the allocated memory
}

void xoa_mang(int *arr)
{
    free(arr); // Free the allocated memory for the array
    printf("Array memory freed\n");
}

void xoa_phan_tu_trong_mang(int *arr, int index, int size)
{
    if (index < 0 || index >= size) {
        printf("Index out of bounds\n");
        return;
    }
    for (int i = index; i < size - 1; i++) {
        arr[i] = arr[i + 1]; // Shift elements to the left
    }
    printf("Element at index %d removed\n", index);
}

void cap_phat_dong_mang()
{
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int *arr = (int*)malloc(n * sizeof(int)); // Allocate memory for an array of n integers
    if (arr == NULL) {
        printf("Memory allocation failed\n");
        return;
    }
    for (int i = 0; i < n; i++) {
        arr[i] = i + 1; // Assign values to the allocated array
    }
    printf("Values at allocated array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    xoa_mang(arr); // Call the function to free the array
}

int main()
{

    return 0;
}