#include <stdio.h>

/* 1. Định nghĩa cấu trúc cho một vị trí đỗ xe */
typedef struct {
    int id_cho_do;
    int trang_thai_IR; /* 0: Không có xe, 1: Có xe */
    int goc_servo;     /* 0: Cổng đóng, 90: Cổng mở */
} ChoDoVIP;

/* 2. Hàm cập nhật trạng thái cảm biến (Sử dụng con trỏ cơ bản) */
/* Hàm này nhận vào "địa chỉ" của biến cảm biến và một giá trị mới */
void CapNhatCamBien(int *cam_bien, int gia_tri_moi) {
    /* TODO 1: Dùng toán tử * để gán gia_tri_moi vào vùng nhớ 
       mà con trỏ cam_bien đang trỏ tới.
    */
    *cam_bien = gia_tri_moi;
}

/* 3. Hàm xử lý mở/đóng cổng (Sử dụng con trỏ Struct) */
/* Hàm này nhận vào "địa chỉ" của cả một Struct ChoDoVIP */
void XuLyCong(ChoDoVIP *vi_tri_do) {
    /* TODO 2: Kiểm tra trang_thai_IR của vi_tri_do. 
       - Nếu bằng 1 (có xe), cho goc_servo của nó = 90.
       - Nếu bằng 0 (không xe), cho goc_servo của nó = 0.
       Gợi ý: Dùng toán tử -> để truy cập vào thành phần bên trong Struct.
    */
    if (vi_tri_do->trang_thai_IR == 1) {
        vi_tri_do->goc_servo = 90;
    } else {
        vi_tri_do->goc_servo = 0;
    }
}

int main() {
    /* Tạo một mảng gồm 2 chỗ đỗ xe, ban đầu chưa có xe, cổng đóng */
    ChoDoVIP danh_sach_VIP[2] = {
        {1, 0, 0}, /* Vị trí số 1 */
        {2, 0, 0}  /* Vị trí số 2 */
    };

    printf("--- TRANG THAI BAN DAU ---\n");
    printf("Vi tri 1: IR = %d, Servo = %d\n", danh_sach_VIP[0].trang_thai_IR, danh_sach_VIP[0].goc_servo);

    /* Giả lập phần cứng: Có một chiếc xe VIP vừa chạy vào vị trí số 1 */
    int tin_hieu_tu_mach = 1;

    /* TODO 3: Gọi hàm CapNhatCamBien để thay đổi trạng thái IR của vị trí số 1.
       Gợi ý: Bạn cần truyền "địa chỉ" (&) của danh_sach_VIP[0].trang_thai_IR
    */
    CapNhatCamBien(&danh_sach_VIP[0].trang_thai_IR, tin_hieu_tu_mach);

    /* TODO 4: Gọi hàm XuLyCong để hệ thống tự tính toán góc Servo cho vị trí số 1.
       Gợi ý: Bạn cần truyền "địa chỉ" (&) của toàn bộ danh_sach_VIP[0]
    */
    XuLyCong(&danh_sach_VIP[0]);

    printf("\n--- SAU KHI XE CHAY VAO ---\n");
    printf("Vi tri 1: IR = %d, Servo = %d\n", danh_sach_VIP[0].trang_thai_IR, danh_sach_VIP[0].goc_servo);

    /* Kết quả mong đợi in ra màn hình: Vi tri 1: IR = 1, Servo = 90 */

    return 0;
}