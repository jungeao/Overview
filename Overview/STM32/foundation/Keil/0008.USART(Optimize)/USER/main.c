/******************
оƬ��STM32F103RCT6
ʵ�֣�����led��
���ţ�PA8,PD2
*******************/
#include "stm32f10x.h"
#include "led.h"
#include "delay.h"
#include "timer.h"
#include "usart1.h"


int main(void)
{
		u16 temp;
		LED_GPIO_Config();
		USART_1();
		delay_init();
		//TIM3_Int_Init(9999,7199);//  
		//NVIC_PriorityGroupConfig(NVIC_PriorityGroup_2);

		USART_SendString(USART1,"С����Ŷ��"); //����		
		while(1)
		{
			temp = USART_ReceiveByte(USART1);
			USART_SendByte(USART1,temp);
		}
			
}

