#include <stdio.h>

/* Khai báo con trỏ hàm: Trả về int và nhận vào 2 tham số int */
int (*PhepTinh)(int, int);

/* Hàm trả về kết quả int */
int Cong(int a, int b) {
    return a + b; 
}

int Tru(int a, int b) {
    return a - b;
}

/* Hàm trung gian cũng phải trả về int */
int Xu_ly_phep_tinh(int a, int b, int (*ptr)(int, int)) {
    return ptr(a, b); /* Gọi hàm và trả kết quả về cho nơi gọi */
}

int main() {
    int a = 10, b = 5;
    int ket_qua; /* Biến để hứng kết quả */

    printf("Chon phep tinh (1: Cong, 2: Tru): ");
    int choice;
    scanf("%d", &choice);

    if (choice == 1) {
        PhepTinh = Cong;
    } else if (choice == 2) {
        PhepTinh = Tru;
    } else {
        printf("Lua chon khong hop le.\n");
        return 1;
    }

    /* Gọi hàm và lưu kết quả vào biến ket_qua */
    ket_qua = Xu_ly_phep_tinh(a, b, PhepTinh);

    printf("Ket qua sau khi tinh toan la: %d\n", ket_qua);

    return 0;
}