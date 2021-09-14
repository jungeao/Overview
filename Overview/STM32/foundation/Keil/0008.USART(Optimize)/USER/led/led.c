#include "led.h"

void LED_GPIO_Config(void)
{
	GPIO_InitTypeDef GPIO_InitStruct;
	//����ʱ��
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOA|RCC_APB2Periph_GPIOD,ENABLE);

	//��������
	GPIO_InitStruct.GPIO_Mode = GPIO_Mode_Out_PP;
	GPIO_InitStruct.GPIO_Pin = LED_GPIO_PIN;
	GPIO_InitStruct.GPIO_Speed = GPIO_Speed_50MHz;
  GPIO_Init(GPIOA,&GPIO_InitStruct);

	GPIO_InitStruct.GPIO_Mode = GPIO_Mode_Out_PP;
	GPIO_InitStruct.GPIO_Pin = LED_GPIO_PIN;
	GPIO_InitStruct.GPIO_Speed = GPIO_Speed_50MHz;
  GPIO_Init(GPIOD,&GPIO_InitStruct);

}
void LED_GPIO_High(void)
{
	//����ߵ�ƽ
	GPIO_SetBits(GPIOA,LED_GPIO_PIN); 
	GPIO_SetBits(GPIOD,LED_GPIO_PIN); 
	
}

void LED_GPIO_Low(void)
{
	//����͵�ƽ
	GPIO_ResetBits(GPIOA,LED_GPIO_PIN); 
	GPIO_ResetBits(GPIOD,LED_GPIO_PIN); 
}

