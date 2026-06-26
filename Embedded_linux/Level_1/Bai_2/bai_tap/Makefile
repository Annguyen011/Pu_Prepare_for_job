# 1. Lệnh tạo phần mềm dùng Thư viện TĨNH
tinh:
	gcc -c sensor.c -o sensor.o
	ar rcs libsensor.a sensor.o
	gcc main.c -L. -lsensor -o app_tinh

# 2. Lệnh tạo phần mềm dùng Thư viện ĐỘNG
# Chú ý: Trên Linux bắt buộc phải có -fPIC cho thư viện động
dong:
	gcc -c -fPIC sensor.c -o sensor.o
	gcc -shared -o libsensor.so sensor.o
	gcc main.c -L. -lsensor -o app_dong
