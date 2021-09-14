
#include "stdio.h"
#include "limits.h"
#include "stdlib.h"  //system
#include<string.h> 
#define INT_MAX

int main()
{
	//交换两个整型变量，不用第三个变量
	int a = 3;
	int b = 5;
	INT_MAX;   
	printf("交换前：a= %d b= %d \n", a, b);
	a = a + b;  //8
	b = a - b;  // 8 - 5
	a = a - b;  // 8 - 3
	printf("交换后：a= %d b= %d \n", a, b);
	return 0;
}


//struct Book
//{
//	char name[20];
//	short price;
//};
//int main()
//{
//	struct Book b1;//  = { "C语言程序设计", 29 };
//	strcpy(b1.name,"C++");   //strcpy -string copy -字符串拷贝- 库函数- string.h
//	printf(" %s\n", b1.name);
//	return 0;
//}



//struct Book  
//{
//	char name[20];
//	short price;
//};
//int main()
//{
//	//利用结构体类型--创建一个类型的结构体变量
//	struct Book b1 = {"C语言程序设计",29};
//	struct Book* pb = &b1;
//
//	printf("书名：%s \n", pb->name);
//	printf("价格：%d元 \n", pb->price);
//	
//	printf("书名：%s \n", (*pb).name);
//	printf("价格：%d元 \n", (*pb).price);
//	
//	printf("书名：%s \n", b1.name);
//	printf("价格：%d元\n", b1.price);   
//	//b1.price = 25;
//	//printf("修改后的价格：%d元\n", b1.price); 
//	return 0;
//}

//int main()
//{
//	printf("%d\n",sizeof(char *)); 
//	printf("%d\n", sizeof(short *));
//	printf("%d\n", sizeof(int *));
//	printf("%d\n", sizeof(double *));
//	return 0;
//}
//int main()
//{
//	char ch = 'w';
//	char* pc = &ch;
//	*pc = 'a'; 
//	printf("a = %c\n",ch);  //a
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int *p = &a;	//取地址,p用来存放地址的  指针变量
//	//printf("%p\n",&a);
//	//printf("%p\n", p);  //地址一样
//	*p = 20;  //*-解引用操作符
//	printf("a = %d\n", a);  //20
//	return 0;
//}

//#define MAX(X,Y) (X>Y?X:Y)
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = MAX(a, b);
//	printf("max =  %d \n ",max);
//	return 0;
//}

//extern int Add(int x, int y);
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);
//	printf("sum =  %d \n ",sum);
//	return 0;
//}
//int main()
//{
////static 修饰全局变量  
////--改变了变量的作用域，让静态的全局变量只能在自己所在的源文件内部使用
////出了源文件就无法再使用
//
//	extern int g_val;   //extern 声明外部
//	printf(" %d \n ", g_val);
//	return 0;
//}
//void test()
//{
//	//static 修饰局部变量 的 生命周期变长
//	static int a = 1;  //加上static 则a是一个静态的局部变量
//	a++; 
//	printf("a = %d\n",a); //2  3  4  5  6
//} 
//int main()
//{
//	int i = 0;
//	while (i < 5)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}
//int main()
//{
//	//typedef -类型重定义
//	typedef unsigned int u_int; 
//	u_int a = 10;
//	printf("%d\n",a);
//	return 0;
//}
//int main()
//{
//	register int a = 10; //建议把a定义成寄存器变量
//	printf("%d\n");
//	return 0;
//}
//int main()
//{
//	auto int a = 10;  //局部变量 auto 通常省略  auto定义的也叫自动变量
//	int b = 20;
//	
//	printf("%d\n");  
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = 0;
//	max = (a>b ? a : b);
//	printf("%d\n", max);  //20
//	return 0;
//}
//int main()
//{
//	int a = 0; 
//	int b = 5;
//	int c = a && b;
//	printf("%d\n", c);  //0
//	return 0;
//}
//int main()
//{
//	int a = (int)3.14;  //强制类型转换 double -- int
//	int b = a;
//	printf("%d\n", b); 
//	return 0;
//}
//int main()
//{
//	int a = 0;  //4字节  32bit 位
//	int b = ~a;
//	printf("%d\n",b); //-1
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int arr[] = {1,2,3,4,5,6};
//	printf("%d\n",sizeof(a));  //4
//	printf("%d\n", sizeof(int)); //4
//	printf("%d\n", sizeof a); //4  如果是函数，括号不能省略掉
//
//	printf("%d\n", sizeof(arr));  //4*6=24字节
//	return 0;
//}

//int MAX(int x,int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//int main()
//{
//	int x = 10;
//	int y = 20;
//	int max = 0;
//
//	max = MAX(x,y);
//	printf("max: %d \n", max);
//	return 0;
//}


//int main()
//{	
//	char arr[] = {'b','a','t'};
//	printf("%d \n",strlen(arr)); 
//	return 0;
//}

//int main()
//{
//	//system() -专门执行系统命令的 
//	char input[20] = {0};
//	system("shutdown -s -t 60 ");//关机
//
//again:
//	printf("请注意，电脑在1分钟内关机，如果输入：我是猪，就取消关机\n");
//	scanf("%s",input);
//
//	if (strcmp(input, "我是猪") == 0)
//	{
//		system("shutdown -a");//关机
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//}




//int main()
//{
//	//优化求解
//	int arr[] = {1,2,3,4,5,1,2,3,4};
//	int i = 0;
//	int ret = 0;
//	int sz =  sizeof(arr) / sizeof(arr[0]);  //计算数组元素个数
//	for (i = 0; i < sz; i++)
//	{
//		ret = ret ^ arr[i];
//	}
//	printf("该数组中只出现一次的数: %d\n",ret);
//	return 0;
//}

//int main()
//{	
//	//找出单生狗
//	//暴力求解
//	int arr[] = {1,2,3,4,5,1,2,3,4};  
//	int i = 0;
//	int sz = sizeof(arr)/ sizeof(arr[0]);  //计算数组元素个数
//
//	for (i = 0; i < sz; i++)
//	{
//		//统计arr[i]在arr数组中出现了几次
//		int count = 0; //计数器
//		int j = 0;
//		for (j = 0; j < sz; j++)
//		{
//			if (arr[i] == arr[j])
//			{
//				count++;
//			}
//		}
//		if (count == 1)
//		{
//			printf("单生狗： %d \n", arr[i]);
//			break;
//		}
//	}
//	return 0;
//}


//int main()
//{
//	//交换两个整型变量，不用第三个变量
//	int a = 3;
//	int b = 5;
//	INT_MAX;  //右击，转到定义，是一个很大的数 
//	printf("交换前：a= %d b= %d \n", a, b);
//	//这样写， 整型溢出的问题   //解决办法，看下面
//	a = a + b;  //8
//	b = a - b;  // 8 - 5
//	a = a - b;  // 8 - 3
//	printf("交换后：a= %d b= %d \n", a, b);
//	return 0;
//}

//int main()
//{
//	//交换两个整型变量，不用第三个变量
//	int a = 3;
//	int b = 5;
//	INT_MAX;  
//	printf("交换前：a= %d b= %d \n", a, b);
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("交换后：a= %d b= %d \n", a, b);
//	return 0;
//}

/*
int main()
{
	//计算元素的个数
	//个数 = 数组总大小 / 每个元素的大小
	int arr[10] = {0};
	int sz = 0;
	printf("%d\n", sizeof(arr)); //40
	printf("%d\n", sizeof(arr[0]));  //4

	sz = sizeof(arr) / sizeof(arr[0]);    //   40/4
	printf("sz = %d\n", sz);  //10

	return 0;
}

*/


/*
int main()
{
	int a = 3;
	int b = 5;
	int c = a ^ b;
	printf("%d\n",c);
	printf("%d\n", !c); 
	return 0;
}
*/


/*
int main()
{
	int a = 1;
	int b = a << 3;
	printf("%d\n",b);
	printf("%d\n", a);
	return 0;
}
*/

/*
int main()
{
	//char ch[20];
	//float arr2[5];
	int arr[10] = {1,2,3,4,5,6,7,8,9,10}; //定义存放10个整数数字的数组  下标默认开始为0
	//printf("%d\n", arr[0]); //1  arr[下标]; 下标的方式访问元数

	int i = 0;
	while (i < 10)
	{

		printf("%d\n",arr[i]);
		i++;
	}

	return 0;
}

*/





/*
int Add(int x, int y)  //函数体
{
	int z = x + y;
	return z;
}
int main()
{
	int n1 = 10;
	int n2 = 20;
	int sum = 0;

	int a = 100;
	int b = 200;
	sum = Add(n1,n2);
	printf("sum= %d\n", sum);  //30
	sum = Add(a, b);
	printf("sum= %d\n",sum);  //300
	return 0;
}



*/
