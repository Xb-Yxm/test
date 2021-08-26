#define  _CRT_SECURE_NO_WARNINGS 1

//课本第一章

//输出三个数的最大者

//方法一
#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d%d%d", &a, &b, &c);
//	int max = a;
//	if (max < b)
//	{
//		max = b;
//	}
//	if (max < c)
//	{
//		max = c;
//	}
//	printf("最大值为：%d\n", max);
//	return 0;
//}

//方法二
//int Max(int x, int y, int z)
//{
//	int max = x;
//		if (max < y)
//		{
//			max = y;
//		}
//		if (max < z)
//		{
//			max = z;
//		}
//		return max;
//}
//int main()
//{
//	    int a = 0;
//		int b = 0;
//		int c = 0;
//		scanf("%d%d%d", &a, &b, &c);
//		int max = Max(a, b, c);
//		printf("最大值为：%d\n", max);
//	return 0;
//}


//习题5
//循环
int main()
{
	int i = 0;
	for (i = 0; i < 4; i++)
	{
		int j = 0;
		for (j = 0; j < i; j++)
		{
			printf(" ");
			
		}
		printf("*****");

		printf("\n");
	}
	return 0;
}