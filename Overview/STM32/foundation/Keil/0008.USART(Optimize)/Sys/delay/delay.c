#include "stm32f10x.h"


void delay_init(void)
{
	((SysTick_Type*)(0xE000E010))->CTRL &= ~(1<<2);//1.系统时钟的8分频
}
void delay_ms(u16 nms)
{
	u32 temp;
	((SysTick_Type*)(0xE000E010))->LOAD = (u32)nms*9000;//2.重装初值
	((SysTick_Type*)(0xE000E010))->VAL	=	0x00;// 3.清空寄存器
	((SysTick_Type*)(0xE000E010))->CTRL|= 0x01;//4.启动定时器
	
	do
	{
		temp = ((SysTick_Type*)(0xE000E010))->CTRL;//5.查询
	}while(!(temp&(1<<16)));
	
	((SysTick_Type*)(0xE000E010))->CTRL &= ~(1<<0);//关闭计数器
	
	((SysTick_Type*)(0xE000E010))->VAL	=	0x00;// 7.清空寄存器
	
}
