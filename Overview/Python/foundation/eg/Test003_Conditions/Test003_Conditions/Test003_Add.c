
#include "stdio.h"
#include "limits.h"
#include "stdlib.h"  //system
#include<string.h> 
#define INT_MAX

int main()
{
	//�����������ͱ��������õ���������
	int a = 3;
	int b = 5;
	INT_MAX;   
	printf("����ǰ��a= %d b= %d \n", a, b);
	a = a + b;  //8
	b = a - b;  // 8 - 5
	a = a - b;  // 8 - 3
	printf("������a= %d b= %d \n", a, b);
	return 0;
}


//struct Book
//{
//	char name[20];
//	short price;
//};
//int main()
//{
//	struct Book b1;//  = { "C���Գ������", 29 };
//	strcpy(b1.name,"C++");   //strcpy -string copy -�ַ�������- �⺯��- string.h
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
//	//���ýṹ������--����һ�����͵Ľṹ�����
//	struct Book b1 = {"C���Գ������",29};
//	struct Book* pb = &b1;
//
//	printf("������%s \n", pb->name);
//	printf("�۸�%dԪ \n", pb->price);
//	
//	printf("������%s \n", (*pb).name);
//	printf("�۸�%dԪ \n", (*pb).price);
//	
//	printf("������%s \n", b1.name);
//	printf("�۸�%dԪ\n", b1.price);   
//	//b1.price = 25;
//	//printf("�޸ĺ�ļ۸�%dԪ\n", b1.price); 
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
//	int *p = &a;	//ȡ��ַ,p������ŵ�ַ��  ָ�����
//	//printf("%p\n",&a);
//	//printf("%p\n", p);  //��ַһ��
//	*p = 20;  //*-�����ò�����
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
////static ����ȫ�ֱ���  
////--�ı��˱������������þ�̬��ȫ�ֱ���ֻ�����Լ����ڵ�Դ�ļ��ڲ�ʹ��
////����Դ�ļ����޷���ʹ��
//
//	extern int g_val;   //extern �����ⲿ
//	printf(" %d \n ", g_val);
//	return 0;
//}
//void test()
//{
//	//static ���ξֲ����� �� �������ڱ䳤
//	static int a = 1;  //����static ��a��һ����̬�ľֲ�����
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
//	//typedef -�����ض���
//	typedef unsigned int u_int; 
//	u_int a = 10;
//	printf("%d\n",a);
//	return 0;
//}
//int main()
//{
//	register int a = 10; //�����a����ɼĴ�������
//	printf("%d\n");
//	return 0;
//}
//int main()
//{
//	auto int a = 10;  //�ֲ����� auto ͨ��ʡ��  auto�����Ҳ���Զ�����
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
//	int a = (int)3.14;  //ǿ������ת�� double -- int
//	int b = a;
//	printf("%d\n", b); 
//	return 0;
//}
//int main()
//{
//	int a = 0;  //4�ֽ�  32bit λ
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
//	printf("%d\n", sizeof a); //4  ����Ǻ��������Ų���ʡ�Ե�
//
//	printf("%d\n", sizeof(arr));  //4*6=24�ֽ�
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
//	//system() -ר��ִ��ϵͳ����� 
//	char input[20] = {0};
//	system("shutdown -s -t 60 ");//�ػ�
//
//again:
//	printf("��ע�⣬������1�����ڹػ���������룺��������ȡ���ػ�\n");
//	scanf("%s",input);
//
//	if (strcmp(input, "������") == 0)
//	{
//		system("shutdown -a");//�ػ�
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//}




//int main()
//{
//	//�Ż����
//	int arr[] = {1,2,3,4,5,1,2,3,4};
//	int i = 0;
//	int ret = 0;
//	int sz =  sizeof(arr) / sizeof(arr[0]);  //��������Ԫ�ظ���
//	for (i = 0; i < sz; i++)
//	{
//		ret = ret ^ arr[i];
//	}
//	printf("��������ֻ����һ�ε���: %d\n",ret);
//	return 0;
//}

//int main()
//{	
//	//�ҳ�������
//	//�������
//	int arr[] = {1,2,3,4,5,1,2,3,4};  
//	int i = 0;
//	int sz = sizeof(arr)/ sizeof(arr[0]);  //��������Ԫ�ظ���
//
//	for (i = 0; i < sz; i++)
//	{
//		//ͳ��arr[i]��arr�����г����˼���
//		int count = 0; //������
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
//			printf("�������� %d \n", arr[i]);
//			break;
//		}
//	}
//	return 0;
//}


//int main()
//{
//	//�����������ͱ��������õ���������
//	int a = 3;
//	int b = 5;
//	INT_MAX;  //�һ���ת�����壬��һ���ܴ���� 
//	printf("����ǰ��a= %d b= %d \n", a, b);
//	//����д�� �������������   //����취��������
//	a = a + b;  //8
//	b = a - b;  // 8 - 5
//	a = a - b;  // 8 - 3
//	printf("������a= %d b= %d \n", a, b);
//	return 0;
//}

//int main()
//{
//	//�����������ͱ��������õ���������
//	int a = 3;
//	int b = 5;
//	INT_MAX;  
//	printf("����ǰ��a= %d b= %d \n", a, b);
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("������a= %d b= %d \n", a, b);
//	return 0;
//}

/*
int main()
{
	//����Ԫ�صĸ���
	//���� = �����ܴ�С / ÿ��Ԫ�صĴ�С
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
	int arr[10] = {1,2,3,4,5,6,7,8,9,10}; //������10���������ֵ�����  �±�Ĭ�Ͽ�ʼΪ0
	//printf("%d\n", arr[0]); //1  arr[�±�]; �±�ķ�ʽ����Ԫ��

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
int Add(int x, int y)  //������
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
