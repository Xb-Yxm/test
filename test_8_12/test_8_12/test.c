#define  _CRT_SECURE_NO_WARNINGS 1

//函数指针
//#include<stdio.h>
//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int a = 20;
//	int b = 30;
//	
//	int(*p)(int, int) = &Add;//&函数名 和 函数名 都是函数的地址
//	printf("%d\n", (*p)(2, 3));
//
//	return;
//}




//#include<stdio.h>
//void Print(char* str)
//{
//	printf("%s\n", str);
//}
//int main()
//{
//	void(*p) (char*) = Print;
//	(*p)("hello world");
//	return 0;
//}
//



//char* my_strcpy(char* dest, const char* arc);
////1.写一个函数指针pf，能够指向my_strcpy
//char*(*pf)(char*, const char*);
////2.写一个函数指针数组pfArr，能够存放4个my_strcpy函数的地址
//char* (*pfArr[])(char*, const char*);





//函数指针数组用途：
//计算器
//1.普通代码
//#include<stdio.h>
//menu()
//{
//	printf("************************\n");
//	printf("** 1.add        2.sub **\n");
//	printf("** 3.mul         4.div**\n");
//	printf("**        0.exit      **\n");
//	printf("************************\n");
//}
//add(int x,int y)
//{
//	return x + y;
//}
//sub(int x,int y)
//{
//	return x - y;
//}
//mul(int x, int y)
//{
//	return x * y;
//}
//div(int x, int y)
//{
//	return x / y;
//}
//int main()
//{
//	int x = 0;
//	int y = 0;
//	int input = 0;
//	do
//	{
//		menu();
//		printf("请选择：");
//		scanf("%d", &input);
//		
//
//		switch (input)
//		{
//		case 1:
//			printf("请输入两个操作数：");
//			scanf("%d%d", &x, &y);
//			printf("%d\n", add(x, y));
//			break;
//		case 2:
//			printf("请输入两个操作数：");
//			scanf("%d%d", &x, &y);
//			printf("%d\n", sub(x, y));
//			break;
//		case 3:
//			printf("请输入两个操作数：");
//			scanf("%d%d", &x, &y);
//			printf("%d\n", mul(x, y));
//			break;
//		case 4:
//			printf("请输入两个操作数：");
//			scanf("%d%d", &x, &y);
//			printf("%d\n", div(x, y));
//			break;
//		case 0:
//			printf("退出\n");
//				break;
//		default :
//			printf("选择错误\n");
//		}
//	} while (input); 
//	return 0;
//}
//2.函数指针数组
#include<stdio.h>
menu()
{
	printf("************************\n");
	printf("** 1.add        2.sub **\n");
	printf("** 3.mul         4.div**\n");
	printf("**        0.exit      **\n");
	printf("************************\n");
}
add(int x, int y)
{
	return x + y;
}
sub(int x, int y)
{
	return x - y;
}
mul(int x, int y)
{
	return x * y;
}
div(int x, int y)
{
	return x / y;
}
int main()
{
	int x = 0;
	int y = 0;
	int input = 0;
	int(*pfArr[5])(int, int) = { 0, add, sub, mul, div };
	do
	{
		menu();
		printf("请选择：");
		scanf("%d", &input);
		if (input >= 1 && input <= 4)
		{
			printf("请输入两个操作数：");
			scanf("%d%d", &x, &y);
			int ret = pfArr[input](x, y);
			printf("%d\n", ret);
		}
		else if (input == 0)
		{
			printf("退出\n");
		}
		else
		{
			printf("选择错误\n");
		}

		
	} while (input);
	return 0;
}