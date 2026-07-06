#include <stdio.h>

// Định nghĩa enum bình thường
enum vi_tri {
    Giam_doc,
    Pho_giam_doc,
    Truong_phong,
    Nhan_vien
};

// Định nghĩa struct
typedef struct {    // Sửa thành ngoặc nhọn '{'
    int id;
    char name[50];
    float salary;
    enum vi_tri chuc_vu; // Thêm 'enum' và đặt tên biến là 'chuc_vu'
} Employee;         // Sửa thành ngoặc nhọn '}'

int main() {
    // Bây giờ bạn có thể tạo biến mới từ bản thiết kế Employee
    Employee nhan_vien_1; 
    
    return 0;
}