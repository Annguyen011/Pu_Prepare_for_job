#include <stdio.h>
#include <string.h>


int main(int argc, char const *argv[])
{
    char *ten1 = "An";
    char ten2[10] = "An";
    printf("ten1: %s\n", ten1);
    printf("ten2: %s\n", ten2);

    // Ham so sanh do lon cua hai chuoi
    int str_cmp = strcmp(ten1, ten2);
    printf("Ket qua so sanh do dai: %d\n", strcmp);



}
