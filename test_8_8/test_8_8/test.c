#define  _CRT_SECURE_NO_WARNINGS 1
//C语言实用调试技巧
//F5 F9配合使用
//#include<stdio.h>
//int Add(int x, int y)
//{
//	return  x + y;
//}
//int main()
//{
//	printf("hehe\n");
//	int a = 10;
//	int b = 20;
//	int c= Add(a, b);
//	printf("%d\n", c);
//	return 0;
//}
//


//一些调试实例
//实例一：实现代码：求1！+2！+3！+···+n！；不考虑溢出(下面为错误代码，需要调试找问题）
//F10+监视
//int main()
//{
//	int i = 0;
//	int sum = 0;//保存最终结果
//	int n = 0;
//	int ret = 1;//保存n的阶乘
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		int j = 0;
//		// int ret=1;
//		for (j = 1; j <= i; j++)
//		{
//			ret *= j;
//		}
//		sum += ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}



//实列二：
//栈区的默认使用：先高地址 再低地址   数组随着下标的增长，地址由低到高
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	for (i = 0; i <= 12; i++)
//	{
//		arr[i] = 0;
//		printf("hehe\n");
//	}
//	return 0;
//}






//如何写出好（易于调试）的代码
//示例：  模拟实现库函数：strcpy

#include<stdio.h>
//void my_strcpy(char* pa, char*pc)
//{
//	while (*pa)
//	{
//		*pa = *pc;
//		pa++;
//		pc++;
//	}
//	*pa = *pc;
//}


//优化1：
//void my_strcpy(char* pa, char*pc)
//{
//	while (*pa != '\0')
//	{
//		*pa++ = *pc++;
//		
//	}
//	*pa = *pc;
//}


//优化2：

//void my_strcpy(char* pa, char*pc)
//{
//	while (*pa++ = *pc++)
//	{
//		;
//		
//	}
//	
//}


//优化3：
//void my_strcpy(char* pa, char*pc)
//{
//	if (pa != NULL && pc != NULL)
//	{
//		while (*pa++ = *pc++)
//		{
//			;
//
//		}
//	}
//	
//}




//优化4：
#include<assert.h>
//void my_strcpy(char* pa, char*pc)
//{
//	assert(pa!=NULL);//断言-表达式如果为真 什么都不发生；如果为假 会报错
//	assert(pc != NULL);
//	while(*pa++ = *pc++)
//	{
//		;
//
//	}
//
//}



//优化5：
char* my_strcpy(char* pa,const char*pc)
{
	char* ret = pa;
	assert(pa != NULL);//断言-表达式如果为真 什么都不发生；如果为假 会报错
	assert(pc != NULL);
	while (*pa++ = *pc++)
	{
		;

	}
	return ret;

}


int main()
{
	char arr1[] = { "############" };
	char arr2[] = { "bit" };
	my_strcpy(arr1, arr2);
	printf("%s\n", arr1);
	return 0;
}