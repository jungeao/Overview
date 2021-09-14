#include "stm32f10x.h"
#include "usart1.h"
#include "stdio.h"

void USART_1(void)
{
	GPIO_InitTypeDef GPIO_InitStruct;
	USART_InitTypeDef USART1_InitStruct;
	NVIC_InitTypeDef NVIC_InitStruct;
	//1.����ʱ�ӡ�GPIOAʱ��ʹ��
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOA|RCC_APB2Periph_USART1,ENABLE);

	//2.GPIOA�˿�ģʽ����
	GPIO_InitStruct.GPIO_Pin = USART_GPIO_PIN_TX; //PA.9
  GPIO_InitStruct.GPIO_Speed = GPIO_Speed_50MHz;
  GPIO_InitStruct.GPIO_Mode = GPIO_Mode_AF_PP;	//�����������
	GPIO_Init(GPIOA, &GPIO_InitStruct);//��ʼ��GPIOA.9
   
						//USART1_RX	  GPIOA.10��ʼ��
  GPIO_InitStruct.GPIO_Pin = USART_GPIO_PIN_RX;//PA10
  GPIO_InitStruct.GPIO_Mode = GPIO_Mode_IN_FLOATING;//��������
  GPIO_Init(GPIOA, &GPIO_InitStruct);//��ʼ��GPIOA.10  
	
	//3.���ڲ�����ʼ��
	USART1_InitStruct.USART_BaudRate = 9600;
	USART1_InitStruct.USART_HardwareFlowControl = USART_HardwareFlowControl_None;
	USART1_InitStruct.USART_Mode = USART_Mode_Rx|USART_Mode_Tx;
	USART1_InitStruct.USART_Parity = USART_Parity_No;
	USART1_InitStruct.USART_StopBits = USART_StopBits_1;
	USART1_InitStruct.USART_WordLength = USART_WordLength_8b;
	
	USART_Init(USART1,&USART1_InitStruct);
	
	//4.�����жϲ��ҳ�ʼ��NVIC
	
	USART_ITConfig(USART1, USART_IT_RXNE,ENABLE);
	NVIC_InitStruct.NVIC_IRQChannel	= USART1_IRQn;
	NVIC_InitStruct.NVIC_IRQChannelCmd	= ENABLE;//1
	NVIC_InitStruct.NVIC_IRQChannelPreemptionPriority = 1;
	NVIC_InitStruct.NVIC_IRQChannelSubPriority = ENABLE;
  NVIC_Init(&NVIC_InitStruct);

	//5.����ʹ��
  USART_Cmd(USART1, ENABLE);

	//6.��д�жϴ�����
	
	
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

int USART1_IRQHandler(void)
{
	u16 temp;
	//while(USART_GetITStatus(USART1,USART_IT_RXNE) == RESET);
	if(USART_GetITStatus(USART1,USART_IT_RXNE) != RESET)
	{
		temp = USART_ReceiveData(USART1);
	}
	
	USART_SendByte(USART1,temp);
	return 0;
}



#pragma import(__use_no_semihosting)
struct __FILE
{
	int handle;
};

FILE __stdout;
int _sys_exit(int  x) //���� _sys_exit() �Ա���ʹ�ð�����ģʽ
{
	x = x;
	return 0;
}

int fputc(int ch,FILE *f)
{
		USART_SendData(USART1,(uint8_t) ch);
		while( USART_GetFlagStatus(USART1, USART_FLAG_TXE) == RESET);
		return (ch);
}

int fgetc(FILE *f)
{
		while( USART_GetFlagStatus(USART1, USART_FLAG_TXE) == RESET);
		return (int)USART_ReceiveData(USART1);
}

