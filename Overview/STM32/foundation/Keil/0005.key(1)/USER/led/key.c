#include "key.h"

void KEY_GPIO_Config(void)
{
	GPIO_InitTypeDef GPIO_InitStruct;;
	//≈‰÷√ ±÷”
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOA|RCC_APB2Periph_GPIOC,ENABLE);

	//≈‰÷√“˝Ω≈
	GPIO_InitStruct.GPIO_Mode = GPIO_Mode_IPU;
	GPIO_InitStruct.GPIO_Pin = KEY_GPIO_PIN;
	//GPIO_InitStruct.GPIO_Speed = GPIO_Speed_50MHz;
  GPIO_Init(KEY_GPIO_PORT,&GPIO_InitStruct);

}

