/******************
芯片：STM32F103RCT6
实现：点亮led灯
引脚：PA8,PD2
*******************/
#include "stm32f10x.h"
#include "led.h"
#include "key.h"
#include "delay.h"
#include "timer.h"


int main(void)
{
	LED_GPIO_Config();
	delay_init();
	KEY_GPIO_Config();
	PAout(8) = 0;
	PDout(2) = 0;
	 //NVIC_PriorityGroupConfig(NVIC_PriorityGroup_2);
	while(1)
	{
			if(PCin(5) == 0)
			{
					delay_ms(5);
					if(PCin(5) == 0)
					{
							LED_Change();
					}
					while(!PCin(5));
			}
			
	}
}
