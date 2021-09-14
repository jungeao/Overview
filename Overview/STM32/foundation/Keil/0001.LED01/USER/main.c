/******************
芯片：STM32F103RCT6
实现：点亮led灯
引脚：PA8,PD2
*******************/
#include "stm32f10x.h"
#include "led.h"

void Delay(__IO u32 nCount)
{
	for(; nCount != 0;nCount--);
}
int main(void)
{
	
		LED_GPIO_Config();
	
	while(1)
	{
		
			LED_GPIO_Low();
			Delay(0x5fffff);
			LED_GPIO_High();
			Delay(0x5fffff);
	}
}
