    #include <stdio.h>
    #include <stdlib.h> /* Thư viện bắt buộc để dùng malloc và free */

    typedef struct {
        int id_cho_do;
        int trang_thai_IR; /* 0: Trống, 1: Có xe */
        int goc_servo;
    } ChoDoVIP;

    /* TODO 1: Hàm cấp phát động cho bãi xe */
    /* Hàm nhận vào số lượng chỗ đỗ, xin cấp phát RAM và trả về con trỏ quản lý vùng nhớ đó */
    ChoDoVIP* KhoiTaoBaiXeDong(int so_luong) {
        ChoDoVIP *danh_sach = NULL;

        /* 1. Dùng lệnh malloc để cấp phát vùng nhớ chứa đủ 'so_luong' cấu trúc ChoDoVIP */
        /* Gợi ý: danh_sach = (ChoDoVIP*) malloc(so_luong * sizeof(ChoDoVIP)); */
        danh_sach = (ChoDoVIP*) malloc(so_luong * sizeof(ChoDoVIP));

        /* Kiểm tra nếu RAM bị đầy, không cấp phát được */
        if (danh_sach == NULL) {
            printf("Loi: Khong du bo nho RAM!\n");
            return NULL;
        }

        /* 2. Dùng vòng lặp để khởi tạo giá trị ban đầu cho từng chỗ đỗ */
        for (int i = 0; i < so_luong; i++) {
            /* Bạn có thể dùng danh_sach[i] hoặc con trỏ để truy cập */
            danh_sach[i].id_cho_do = i + 1;
            danh_sach[i].trang_thai_IR = 0; /* Ban đầu đều trống */
            danh_sach[i].goc_servo = 0;
        }

        return danh_sach;
    }

    /* TODO 2: Hàm tìm chỗ đỗ còn trống đầu tiên */
    /* Hàm nhận vào con trỏ danh sách và số lượng, trả về ĐỊA CHỈ của chỗ đỗ còn trống */
    ChoDoVIP* TimChoTrong(ChoDoVIP *danh_sach, int so_luong) {
        for (int i = 0; i < so_luong; i++) {
            /* Nếu tìm thấy vị trí có trang_thai_IR bằng 0 */
            /* TODO 2: Trả về địa chỉ của vị trí trống đó (Dùng toán tử &) */
            if (danh_sach[i].trang_thai_IR == 0) {
                return &danh_sach[i]; /* Trả về địa chỉ của vị trí trống */
            }
        }
        return NULL; /* Nếu hết chỗ trống hoàn toàn */
    }

    /* TODO 3: Hàm giải phóng bộ nhớ để trả lại RAM cho chip */
    void GiaiPhongBaiXe(ChoDoVIP *danh_sach) {
        /* TODO 3: Dùng lệnh free() để giải phóng vùng nhớ của danh_sach */
        free(danh_sach);
    }

    int main() {
        int so_luong_cho;
        printf("Nhap so luong cho do cua bai xe hom nay: ");
        scanf("%d", &so_luong_cho);

        /* Gọi hàm cấp phát động */
        ChoDoVIP *bai_xe = KhoiTaoBaiXeDong(so_luong_cho);
        if (bai_xe == NULL) return 1;

        /* Giả lập: Xe 1 và Xe 2 đã vào đỗ, chiếm vị trí id 1 và id 2 */
        if (so_luong_cho >= 2) {
            bai_xe[0].trang_thai_IR = 1;
            bai_xe[1].trang_thai_IR = 1;
        }

        /* Điều xe mới vào vị trí còn trống */
        printf("\n--- DO XE TU DONG ---\n");
        ChoDoVIP *cho_trong = TimChoTrong(bai_xe, so_luong_cho);

        if (cho_trong != NULL) {
            /* TODO 4: Dùng con trỏ 'cho_trong' để chuyển trang_thai_IR của vị trí đó thành 1 
            và goc_servo thành 90 để mở cổng cho xe vào. */
            // Viết code của bạn ở đây (Gợi ý: Dùng toán tử ->)
            cho_trong->trang_thai_IR = 1;

            printf("Da xep xe vao Cho so: %d (Servo quay: %d)\n", cho_trong->id_cho_do, cho_trong->goc_servo);
        } else {
            printf("Xin loi, bai xe da het cho trong!\n");
        }

        /* Giải phóng bộ nhớ trước khi tắt chương trình */
        GiaiPhongBaiXe(bai_xe);

        return 0;
    }