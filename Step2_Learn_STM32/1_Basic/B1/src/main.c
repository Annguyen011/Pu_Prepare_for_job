#include "stm32f4xx_hal.h"

void GPIO_Init(void);

int main(void) {
    // Khởi tạo thư viện HAL
    HAL_Init();
    
    // Khởi tạo chân đèn LED
    GPIO_Init();

    while (1) {
        // Bật/tắt đèn LED ở chân PD12
        HAL_GPIO_TogglePin(GPIOD, GPIO_PIN_12); 
        
        // Chờ 1 giây
        HAL_Delay(1000); 
    }
}

// Cấu hình chân PD12 làm đầu ra
void GPIO_Init(void) {
    __HAL_RCC_GPIOD_CLK_ENABLE(); // Cấp nguồn cho cổng D

    GPIO_InitTypeDef GPIO_InitStruct = {0};
    GPIO_InitStruct.Pin = GPIO_PIN_12;
    GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP; 
    GPIO_InitStruct.Pull = GPIO_NOPULL;
    GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
    HAL_GPIO_Init(GPIOD, &GPIO_InitStruct);
}

// Giúp bộ đếm thời gian (Delay) hoạt động
void SysTick_Handler(void) {
    HAL_IncTick();
}