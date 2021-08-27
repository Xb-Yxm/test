#define  _CRT_SECURE_NO_WARNINGS 1
//课本第二章

//例2.1
//求5！


//#include<stdio.h>
//int main()
//{
//	int a = 1;
//	int i = 1;
//	for (i = 1; i <= 5; i++)
//	{
//		a = a*i;
//		
//	}
//	printf("%d\n", a);
//
//	return 0;
//}

//例2.3 判断2000-2500年中的每一年是否为闰年
#include<stdio.h>
//int main()
//{
//	int year = 0;
//	for (year = 2000; year <= 2500; year++)
//	{
//		if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
//		{
//			printf("%d ", year);
//		}
//	}
//	return 0;
//}


//例2.5 给出一个大于或等于3的数 判断是不是素数
int main()
{
	int a = 0;
	scanf("%d", &a);
	int i = 2;
	while (i < a)
	{
		if (a%i == 0)
		{
			printf("不是素数\n");
			break;
		}
		else
		{
			printf("是素数\n");
			break;
		}
		i++;
	}
	
	return 0;
}