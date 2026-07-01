#include <stdio.h>

/* Đây là các hàm chức năng thực tế của mạch điện */
void BatQuat() {
    printf("-> ROLE 1 DONG: Quat da duoc BAT.\n");
}

void BatDen() {
    printf("-> ROLE 2 DONG: Den da duoc BAT.\n");
}

/* TODO 1: Khai báo một con trỏ hàm tên là 'HanhDongCuaNutNhan'
   Con trỏ này dùng để trỏ tới các hàm KHÔNG có kiểu trả về (void) 
   và KHÔNG có tham số truyền vào ().
*/
// Viết code của bạn ở đây:
void (*HanhDongCuaNutNhan)();

int main() {
    /* LƯU Ý QUAN TRỌNG: 
       Trong ngôn ngữ C, tên của một hàm (không có dấu ngoặc đơn) 
       CHÍNH LÀ ĐỊA CHỈ của hàm đó!
       Ví dụ: BatDen là địa chỉ, còn BatDen() là lệnh gọi hàm chạy.
    */

    printf("--- CHE DO 1: NUT NHAN DUNG DE BAT DEN ---\n");
    
    /* TODO 2: Gán địa chỉ của hàm BatDen cho con trỏ HanhDongCuaNutNhan */
    // Viết code của bạn ở đây:
    HanhDongCuaNutNhan = BatDen;

    printf("Nguoi dung nhan nut lan 1...\n");
    /* TODO 3: Gọi hàm chạy thông qua con trỏ (Giống như cách bạn gọi hàm bình thường) */
    /* Gợi ý: TenConTro(); */
    // Viết code của bạn ở đây:
    HanhDongCuaNutNhan();

    /* --- ĐỔI CHẾ ĐỘ --- */
    printf("\n--- CHE DO 2: NUT NHAN DUNG DE BAT QUAT ---\n");

    /* TODO 4: Gán địa chỉ của hàm BatQuat cho con trỏ HanhDongCuaNutNhan */
    // Viết code của bạn ở đây:
    HanhDongCuaNutNhan = BatQuat;

    printf("Nguoi dung nhan nut lan 2...\n");
    /* TODO 5: Gọi hàm chạy thông qua con trỏ một lần nữa */
    // Viết code của bạn ở đây:
    HanhDongCuaNutNhan();

    return 0;
}