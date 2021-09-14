#ifndef __USART_H 
#define __USART_H 	
#include "stm32f10x.h"
#include "sys.h"  

#define USART_GPIO_PIN_TX 	GPIO_Pin_9
#define USART_GPIO_PIN_RX 	GPIO_Pin_10 
#define LED_GPIO_CLK 	RCC_APB2Periph_GPIOA|RCC_APB2Periph_GPIOD	 

void USART_1(void);
#endif





























