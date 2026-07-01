#include <stdio.h>
#include <stdlib.h>

/* Định nghĩa một Node cảm biến IoT */
typedef struct {
    int id_node;
    float nhiet_do;
    int canh_bao; /* 0: Bình thường, 1: Nguy hiểm (Bật còi) */
} NodeCamBien;

/* Hàm cấp phát động danh sách các Node cảm biến */
NodeCamBien* TaoHeThong(int so_luong) {
    NodeCamBien *mang_node = NULL;
    
    /* TODO 1: Cấp phát bộ nhớ cho 'so_luong' NodeCamBien và gán vào mang_node */
    // Viết code của bạn ở đây:
    mang_node = (NodeCamBien*) malloc(so_luong * sizeof(NodeCamBien));

    if (mang_node == NULL) {
        printf("Loi: Khong du RAM!\n");
        return NULL;
    }
    
    /* Khởi tạo giá trị mặc định */
    for (int i = 0; i < so_luong; i++) {
        mang_node[i].id_node = i + 1;
        mang_node[i].nhiet_do = 25.0; /* Nhiệt độ phòng bình thường */
        mang_node[i].canh_bao = 0;
    }
    return mang_node;
}

/* Hàm tìm Node có nhiệt độ cao nhất để báo động */
/* Lưu ý: Hàm này phải trả về ĐỊA CHỈ của Node đó */
NodeCamBien* TimNodeNongNhat(NodeCamBien *mang_node, int so_luong) {
    /* Ban đầu, ta tạo một con trỏ tạm, trỏ thẳng vào địa chỉ của Node đầu tiên */
    NodeCamBien *node_max = &mang_node[0]; 
    
    /* Duyệt từ Node thứ 2 trở đi để so sánh */
    for (int i = 1; i < so_luong; i++) {
        /* TODO 2: Kiểm tra nếu nhiệt độ của mang_node[i] lớn hơn nhiệt độ của node_max */
        /* Gợi ý: Truy cập nhiệt độ của mảng thì dùng dấu chấm (.), 
           nhưng truy cập nhiệt độ qua con trỏ node_max thì phải dùng dấu -> */
        if (mang_node[i].nhiet_do > node_max->nhiet_do) {
            
            /* TODO 3: Nếu tìm thấy Node nóng hơn, hãy cập nhật lại con trỏ node_max 
               để nó CHỈ VÀO ĐỊA CHỈ của Node mang_node[i] này. */
            // Viết code của bạn ở đây:
            node_max = &mang_node[i];
         }
        }
    
    
    /* Trả về con trỏ (địa chỉ) của Node nóng nhất vừa tìm được */
    return node_max;
}

int main() {
    int so_luong_node = 3;
    
    /* Khởi tạo hệ thống động */
    NodeCamBien *he_thong = TaoHeThong(so_luong_node);
    if (he_thong == NULL) return 1;

    /* Giả lập phần cứng: Các Node bắt đầu gửi dữ liệu nhiệt độ về */
    he_thong[0].nhiet_do = 28.5;
    he_thong[1].nhiet_do = 45.2; /* Có cháy ở phòng số 2! */
    he_thong[2].nhiet_do = 30.1;

    /* Gọi hàm tìm kiếm, hứng lấy ĐỊA CHỈ của Node nguy hiểm */
    NodeCamBien *node_nguy_hiem = TimNodeNongNhat(he_thong, so_luong_node);

    /* TODO 4: Dùng con trỏ node_nguy_hiem để bật trạng thái canh_bao lên mức 1 */
    // Viết code của bạn ở đây:
    node_nguy_hiem->canh_bao = 1;
    
    printf("Phat hien nhiet do cao tai Node %d: %.1f do C. Trang thai coi: %d\n", 
           node_nguy_hiem->id_node, node_nguy_hiem->nhiet_do, node_nguy_hiem->canh_bao);
           
    /* Kết quả mong đợi in ra: Phat hien nhiet do cao tai Node 2: 45.2 do C. Trang thai coi: 1 */

    /* TODO 5: Giải phóng vùng nhớ của he_thong để trả RAM cho chip */
    // Viết code của bạn ở đây:
    free(he_thong);

    return 0;
}