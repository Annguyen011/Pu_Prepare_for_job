#include <stdio.h>

int main() {
    /* Tạo một con trỏ File và mở file tên là "nhiet_do.txt" để Ghi (chế độ "w" - write) */
    FILE *file_cua_toi = fopen("nhiet_do.txt", "w");
    
    if (file_cua_toi != NULL) {
        /* Ghi dữ liệu vào file thay vì in ra màn hình */
        fprintf(file_cua_toi, "Nhiet do hom nay la: 30 do C\n");
        
        /* Làm xong thì phải đóng lại */
        fclose(file_cua_toi);
        printf("Da luu file thanh cong!\n");
    }
    return 0;
}