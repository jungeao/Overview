#include "stm32f10x.h"
#include "usart1.h"

void USART_1(void)
{
	GPIO_InitTypeDef GPIO_InitStruct;
	USART_InitTypeDef USART1_InitStruct;
	
	//1.串口时钟、GPIOA时钟使能
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOA|RCC_APB2Periph_USART1,ENABLE);

	//2.GPIOA端口模式设置
	GPIO_InitStruct.GPIO_Pin = USART_GPIO_PIN_TX; //PA.9
  GPIO_InitStruct.GPIO_Speed = GPIO_Speed_50MHz;
  GPIO_InitStruct.GPIO_Mode = GPIO_Mode_AF_PP;	//复用推挽输出
	GPIO_Init(GPIOA, &GPIO_InitStruct);//初始化GPIOA.9
   
						//USART1_RX	  GPIOA.10初始化
  GPIO_InitStruct.GPIO_Pin = USART_GPIO_PIN_RX;//PA10
  GPIO_InitStruct.GPIO_Mode = GPIO_Mode_IN_FLOATING;//浮空输入
  GPIO_Init(GPIOA, &GPIO_InitStruct);//初始化GPIOA.10  
	
	//3.串口参数初始化
	USART1_InitStruct.USART_BaudRate = 9600;
	USART1_InitStruct.USART_HardwareFlowControl = USART_HardwareFlowControl_None;
	USART1_InitStruct.USART_Mode = USART_Mode_Rx|USART_Mode_Tx;
	USART1_InitStruct.USART_Parity = USART_Parity_No;
	USART1_InitStruct.USART_StopBits = USART_StopBits_1;
	USART1_InitStruct.USART_WordLength = USART_WordLength_8b;
	
	USART_Init(USART1,&USART1_InitStruct);
	//4.开启中断并且初始化NVIC
	
	//5.串口使能
  USART_Cmd(USART1, ENABLE);

	//6.编写中断处理函数
	
}

void USART_SendByte(USART_TypeDef* USARTx, uint16_t Data)
{
  /* Check the parameters */
  assert_param(IS_USART_ALL_PERIPH(USARTx));
  assert_param(IS_USART_DATA(Data)); 
    
  /* Transmit Data */
  USARTx->DR = (Data & (uint16_t)0x01FF);
	while( USART_GetFlagStatus(USARTx, USART_FLAG_TXE) == RESET);
}

void USART_SendString(USART_TypeDef	* USARTx, char *str)
{
	while(*str!='\0')
	{
		USART_SendByte( USARTx,*str++);
	}
	while( USART_GetFlagStatus(USARTx, USART_FLAG_TC) == RESET);
}

uint8_t USART_ReceiveByte(USART_TypeDef *USARTx)
{
	while(USART_GetFlagStatus(USARTx, USART_FLAG_RXNE) == RESET);
	
	return (uint8_t)USART_ReceiveData(USART1);
}
