/******************
芯片：STM32F103RCT6
实现：点亮led灯
引脚：PA8,PD2
*******************/
#include "stm32f10x.h"
#include "led.h"
#include "delay.h"
#include "timer.h"


int main(void)
{
		LED_GPIO_Config();

		delay_init();
		TIM3_Int_Init(9999,7199);//  
		NVIC_PriorityGroupConfig(NVIC_PriorityGroup_2);
	while(1)
	{
		
			LED_GPIO_Low();
			delay_ms(1000);
		
			LED_GPIO_High();
			delay_ms(1000);
	}
}
