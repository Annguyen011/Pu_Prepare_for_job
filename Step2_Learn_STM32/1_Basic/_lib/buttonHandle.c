#include "buttonHandle.h"

#define DEBOUNCE_TIME      20     
#define LONG_PRESS_TIME    1000   
#define DOUBLE_CLICK_TIME  250    

void Button_Init(ButtonHandle_t* btn, GPIO_TypeDef* GPIOx, uint16_t GPIO_Pin) {
    btn->GPIOx = GPIOx;
    btn->GPIO_Pin = GPIO_Pin;
    btn->State = 0;
    btn->OnClick = NULL;        // Ban đầu chưa giao việc gì cả
    btn->OnDoubleClick = NULL;
    btn->OnLongPress = NULL;
}

// Hàm gắn việc
void Button_OnClick(ButtonHandle_t* btn, ButtonCallback_t callbackFunc) {
    btn->OnClick = callbackFunc;
}
void Button_OnDoubleClick(ButtonHandle_t* btn, ButtonCallback_t callbackFunc) {
    btn->OnDoubleClick = callbackFunc;
}
void Button_OnLongPress(ButtonHandle_t* btn, ButtonCallback_t callbackFunc) {
    btn->OnLongPress = callbackFunc;
}

void Button_Process(ButtonHandle_t* btn) {
    uint8_t pinLevel = HAL_GPIO_ReadPin(btn->GPIOx, btn->GPIO_Pin);
    uint32_t currentTick = HAL_GetTick();

    switch (btn->State) {
        case 0:
            if (pinLevel == GPIO_PIN_RESET) {
                btn->State = 1;
                btn->LastTick = currentTick;
            }
            break;

        case 1:
            if (currentTick - btn->LastTick >= DEBOUNCE_TIME) {
                if (pinLevel == GPIO_PIN_RESET) {
                    btn->State = 2; 
                } else {
                    btn->State = 0; 
                }
            }
            break;

        case 2:
            if (pinLevel == GPIO_PIN_SET) { 
                btn->State = 3;             
                btn->LastTick = currentTick;
            } 
            else if (currentTick - btn->LastTick >= LONG_PRESS_TIME) {
                // Đã nhấn giữ đủ lâu -> Kích hoạt hàm OnLongPress (nếu có)
                if (btn->OnLongPress != NULL) {
                    btn->OnLongPress();
                }
                btn->State = 5;             
            }
            break;

        case 3:
            if (pinLevel == GPIO_PIN_RESET) { 
                btn->State = 4;
                btn->LastTick = currentTick;
            } 
            else if (currentTick - btn->LastTick >= DOUBLE_CLICK_TIME) { 
                // Không nhấn lần 2 -> Kích hoạt hàm OnClick (nhấn đơn)
                if (btn->OnClick != NULL) {
                    btn->OnClick();
                }
                btn->State = 0;             
            }
            break;

        case 4:
            if (currentTick - btn->LastTick >= DEBOUNCE_TIME) {
                if (pinLevel == GPIO_PIN_RESET) {
                    // Kích hoạt hàm OnDoubleClick
                    if (btn->OnDoubleClick != NULL) {
                        btn->OnDoubleClick();
                    }
                    btn->State = 5;         
                } else {
                    btn->State = 0;
                }
            }
            break;

        case 5:
            if (pinLevel == GPIO_PIN_SET) {
                btn->State = 0;
            }
            break;
    }
}