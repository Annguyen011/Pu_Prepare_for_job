#include <stdio.h>
#include "sensor.h" // Nhúng "mục lục" của thư viện vào đây

int main() {
    int thoi_gian = 5000; // Giả sử cảm biến đo được 5000 micro-giây
    int khoang_cach = tinh_khoang_cach(thoi_gian);
    
    printf("Khoang cach den xe la: %d cm\n", khoang_cach);
    return 0;
}
