#include <stdio.h>

/* =========================================================================
   1. EXTERN (Người kết nối)
   - Trong thực tế, biến 'tong_so_xe' có thể được viết ở một file sensor.c khác.
   - Ở đây, mình dùng 'extern' để báo cho máy tính biết: "Hãy tìm một biến 
     tên là tong_so_xe ở đâu đó trong toàn bộ dự án để dùng chung nhé".
   ========================================================================= */
extern int tong_so_xe; 
int tong_so_xe = 0; /* Đây là nơi biến thực sự được tạo ra trên RAM */

/* Hàm xử lý khi có xe quẹt thẻ */
void XuLyQuetThe() {
    
    /* =========================================================================
       2. STATIC (Người giữ kỷ niệm)
       - Biến này KHÔNG BỊ XÓA sau khi hàm XuLyQuetThe kết thúc.
       - Nó sẽ "nhớ" giá trị từ lần quẹt thẻ trước đó.
       ========================================================================= */
    static int so_lan_quet_the = 0;
    
    /* =========================================================================
       3. AUTO (Biến cục bộ thông thường)
       - Chữ 'auto' là mặc định của C, bạn viết hay không viết cũng giống nhau.
       - Nó chỉ sống trong lúc hàm này chạy, chạy xong là bị xóa khỏi RAM ngay.
       ========================================================================= */
    auto int id_tam_thoi = 999; 

    /* Cập nhật dữ liệu */
    so_lan_quet_the = so_lan_quet_the + 1;
    tong_so_xe = tong_so_xe + 1;

    printf("- Quet the lan thu %d. ID: %d. Tong xe trong bai: %d\n", 
           so_lan_quet_the, id_tam_thoi, tong_so_xe);
}

int main() {
    printf("--- HE THONG BAI XE BAT DAU TIEP NHAN ---\n");

    /* =========================================================================
       4. REGISTER (Tốc độ ánh sáng)
       - Yêu cầu chip nhét biến 'i' này thẳng vào Thanh ghi CPU (Register).
       - Chuyên dùng cho vòng lặp để chip đếm cực kỳ nhanh.
       ========================================================================= */
    register int i;

    /* Giả lập có 3 chiếc xe chạy vào bãi liên tục */
    for(i = 1; i <= 3; i++) {
        printf("\nXe thu %d tien vao cong...\n", i);
        
        /* Gọi hàm xử lý */
        XuLyQuetThe(); 
    }

    return 0;
}