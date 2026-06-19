#include <stdio.h>
#include <string.h>


int main(int argc, char const *argv[])
{
    char *ten1 = "An";
    char ten3[] = "An2";
    char ten2[10] = "An";
    printf("ten1: %s\n", ten1);
    printf("ten2: %s\n", ten2);

    // Ham so sanh do lon cua hai chuoi
    int str_cmp = strcmp(ten1, ten2);
    printf("Ket qua so sanh do dai: %d\n", strcmp);

    // Copy chuoi
    // strcpy(ten2, ten3);
    strcpy(&ten2[0], ten3);
    printf("ten2 sau khi copy: %s\n", ten2);

    // Noi chuoi
    strcat(ten2, ten3);
    printf("ten2 sau khi noi: %s\n", ten2);

    // tim chuoi con
    char *result = strstr(ten2, ten3);
    if (result != NULL) {
        printf("Tim thay chuoi con tai vi tri: %ld\n", result - ten2);
    } else {
        printf("Khong tim thay chuoi con\n");
    }
}
