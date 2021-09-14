
#ifndef __key_H__
#define __key_H__

#include "stm32f10x.h"
#define KEY_GPIO_PIN 	GPIO_Pin_5
#define KEY_GPIO_PORT GPIOC
#define KEY_GPIO_CLK 	RCC_APB2Periph_GPIOC

void KEY_GPIO_Config(void);


#endif
