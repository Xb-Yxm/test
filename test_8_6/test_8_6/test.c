#define  _CRT_SECURE_NO_WARNINGS 1

//练习1：
//创建一个整形数组：完成对数组的操作
//1.实现函数 init（）初始化数组全为0
//2.实现printf（）打印数组的每个元素
//3.实现reverse（）函数完成数组元素的逆置
//要求：自己设计以上函数的参数，返回值
//
//#include<stdio.h>
//void Init(int arr[],int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		arr[i] = 0;
//	}
//}
//void Printf(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//void Reverse(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz-1;
//	while (left < right)
//	{
//		int tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//
//	}
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//Init(arr,sz);//把数组初始化为0
//	Printf(arr, sz);//打印
//	Reverse(arr,sz);
//	Printf(arr, sz);
//	return 0;
//}


//练习2：将数组A中的内容和数组B中的内容进行交换（数组一样大）
//


//练习3：统计二进制（补码）中1的个数
#include<stdio.h>
//方法①
//int count_bit_one(unsigned int a)//去掉unsigned的话，求不出负数的结果
//{
//	int count = 0;
//	while(a)
//	{
//		
//		if (a % 2 == 1)
//		{
//			count++;
//			
//		}
//		
//		a = a / 2;
//	}
//	return count;
//}

//方法②
//int count_bit_one(int a)
//{
//	int count = 0;
//	int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (((a >> i) & 1) == 1)
//		{
//			count++;
//		}
//	}
//	return count;
//}

//方法③（最优算法）
//int count_bit_one(int a)
//{
//	int count = 0;
//	while (a)
//	{
//		a = a&(a - 1);
//		count++;
//	}
//}
//
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int count = count_bit_one(a);
//	printf("%d\n", count);
//	return 0;
//
//}


//乘法口诀表
#include<stdio.h>
void table(int a)
{
	int i = 0;
	for (i = 1; i <= a; i++)
	{
		int j = 0;
		for (j = 1; j <= i; j++)
		{
			printf("%d*%d=%d\t", i, j, i*j);
		}
		printf("\n");
	}
}
int main()
{
	int a = 0;
	scanf("%d", &a);
	table(a);
	return 0;
}