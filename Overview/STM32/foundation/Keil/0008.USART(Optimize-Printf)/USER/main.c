
#include "stm32f10x.h"
#include "led.h"
#include "delay.h"
#include "timer.h"
#include "usart1.h"
#include "stdio.h"

int main(void)
{
		//u16 temp;
		LED_GPIO_Config();
		USART_1();
		delay_init();

		//TIM3_Int_Init(9999,7199);//  
		//NVIC_PriorityGroupConfig(NVIC_PriorityGroup_2);

		USART_SendString(USART1,"Ð¡À¬»øÅ¶"); //·¢ËÍ		
		
	//	printf("Ð¡À¬»øÅ¶\r\n");
		while(1)
		{
			//printf("Ð¡À¬»øÅ¶\r\n");
			
			
		}
			
}

