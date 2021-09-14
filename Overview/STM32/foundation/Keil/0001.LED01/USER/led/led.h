
#ifndef __LED_H__
#define __LED_H__

#include "stm32f10x.h"
#define LED_GPIO_PIN 	GPIO_Pin_8|GPIO_Pin_2
#define LED_GPIO_PORT GPIOD
#define LED_GPIO_CLK 	RCC_APB2Periph_GPIOA|RCC_APB2Periph_GPIOD

void LED_GPIO_Config(void);
void LED_GPIO_High(void);
void LED_GPIO_Low(void);

#endif
