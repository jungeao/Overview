/******************
芯片：STM32F103RCT6
实现：点亮led灯
引脚：PA8,PD2
*******************/
#include "stm32f10x.h"
#include "led.h"
#include "delay.h"
#include "timer.h"
#include "usart1.h"

int main(void)
{
		LED_GPIO_Config();
		USART_1();
		delay_init();
		//TIM3_Int_Init(9999,7199);//  
		//NVIC_PriorityGroupConfig(NVIC_PriorityGroup_2);
	
		USART_ClearFlag(USART1, USART_FLAG_TC);
		USART_SendData(USART1,'C');
		while( USART_GetFlagStatus(USART1, USART_FLAG_TC) == RESET);
		USART_SendData(USART1,'J');
	
//		USART_SendData(USART1,'C');
//		while( USART_GetFlagStatus(USART1, USART_FLAG_TXE) == RESET);
//		USART_SendData(USART1,'J');
		
		 
	while(1)
	{
		
			LED_GPIO_Low();
			delay_ms(1000);
		
			LED_GPIO_High();
			delay_ms(1000);
	}
}

