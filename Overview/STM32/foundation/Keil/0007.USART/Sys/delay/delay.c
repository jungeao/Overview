#include "stm32f10x.h"


void delay_init(void)
{
	((SysTick_Type*)(0xE000E010))->CTRL &= ~(1<<2);//1.ϵͳʱ�ӵ�8��Ƶ
}
void delay_ms(u16 nms)
{
	u32 temp;
	((SysTick_Type*)(0xE000E010))->LOAD = (u32)nms*9000;//2.��װ��ֵ
	((SysTick_Type*)(0xE000E010))->VAL	=	0x00;// 3.��ռĴ���
	((SysTick_Type*)(0xE000E010))->CTRL|= 0x01;//4.������ʱ��
	
	do
	{
		temp = ((SysTick_Type*)(0xE000E010))->CTRL;//5.��ѯ
	}while(!(temp&(1<<16)));
	
	((SysTick_Type*)(0xE000E010))->CTRL &= ~(1<<0);//�رռ�����
	
	((SysTick_Type*)(0xE000E010))->VAL	=	0x00;// 7.��ռĴ���
	
}
