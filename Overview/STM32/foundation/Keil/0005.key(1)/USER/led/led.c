#include "led.h"
#include "sys.h"
void LED_GPIO_Config(void)
{
	GPIO_InitTypeDef GPIO_InitStruct;;
	//配置时钟
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOA|RCC_APB2Periph_GPIOD,ENABLE);

	//配置引脚
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
	//输出高电平
	GPIO_SetBits(GPIOA,LED_GPIO_PIN); 
	GPIO_SetBits(GPIOD,LED_GPIO_PIN); 
	
}

void LED_GPIO_Low(void)
{
	//输出低电平
	GPIO_ResetBits(GPIOA,LED_GPIO_PIN); 
	GPIO_ResetBits(GPIOD,LED_GPIO_PIN); 
}


void LED_Change(void)
{
	static u8 i = 0; 
	switch(i)
	{
		case 0:PDout(2) = 1;PAout(8) = 1;i++;break;
		case 1:PDout(2)	=	0;PAout(8) = 0;i=0;break;
		
	}
}
