#ifndef BUTTONHANDLE_H
#define BUTTONHANDLE_H

#include "stm32f1xx_hal.h"

// Định nghĩa kiểu dữ liệu cho một hàm trống (không nhận, không trả về)
typedef void (*ButtonCallback_t)(void);

typedef struct {
    GPIO_TypeDef* GPIOx;
    uint16_t GPIO_Pin;
    uint8_t State;         
    uint32_t LastTick;     
    
    // Nơi lưu trữ các hàm sẽ được gọi tự động
    ButtonCallback_t OnClick;
    ButtonCallback_t OnDoubleClick;
    ButtonCallback_t OnLongPress;
} ButtonHandle_t;

// Các hàm để giao tiếp với thư viện
void Button_Init(ButtonHandle_t* btn, GPIO_TypeDef* GPIOx, uint16_t GPIO_Pin);
void Button_Process(ButtonHandle_t* btn);

// Các hàm để bạn "gắn" công việc vào nút nhấn
void Button_OnClick(ButtonHandle_t* btn, ButtonCallback_t callbackFunc);
void Button_OnDoubleClick(ButtonHandle_t* btn, ButtonCallback_t callbackFunc);
void Button_OnLongPress(ButtonHandle_t* btn, ButtonCallback_t callbackFunc);

#endif