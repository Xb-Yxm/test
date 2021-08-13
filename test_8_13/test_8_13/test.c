#define  _CRT_SECURE_NO_WARNINGS 1
//指针进阶3



//冒泡排序
//1.普通代码(只能排序整型数组，不能排别的类型）
//void bubble_sort(int arr[], int sz)
//{
//	int i = 0;
// 趟数
//	for (i = 0; i < sz - 1; i++)
//	{
         //每一趟比较的对数
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j]>arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}
//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr,sz);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	
//	return 0;
//}



//2.qsort-库函数 -quicksort 快速排序
//第一个参数：待排序数组的地址 
//第二个参数：待排序数组的元素个数
//第三个参数：待排序数组每个元素大小 单位是字节  
//第四个参数：是函数指针，比较两个元素的所用函数的地址-这个函数使用者自己实现
//             函数指针的两个参数是：待比较的两个元素的地址

//#include<stdio.h>
//#include<stdlib.h>
//
//
//int cmp_int(const void* e1, const void* e2)
//{
//	//比较两个整型
//	return *(int*)e1 - *(int*)e2;
//}
//void test1()
//{
//	int arr[10] = { 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, sz, sizeof(arr[0]), cmp_int);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//
//
//int cmp_float(const void*e1, const  void*e2)
//{
//	return *(float*)e1 - *(float*)e2;
//}
//void test2()
//{
//	float f[] = { 9.0, 8.0, 7.0, 6.0, 5.0 };
//    int	sz = sizeof(f) / sizeof(f[0]);
//	qsort(f, sz, sizeof(f[0]), cmp_float);
//	int j = 0;
//	for (j = 0; j < sz; j++)
//	{
//		printf("%f ", f[j]);
//	}
//}
//
//int main()
//{
//	//test1();
//	test2();
//
//	return 0;
//}
//



//指针和数组笔试题解析
//一维数组
#include<stdio.h>
int main()
{
	int a[] = { 1, 2, 3, 4 };
	printf("%d\n", sizeof(a));//16, sizeof(数组名）计算的是数组总大小单位是字节
	printf("%d\n", sizeof(a + 0));//4/8，除了那两种 数组名都是首元素地址 a+0还是首元素地址，地址大小就是4/8
	printf("%d\n", sizeof(*a));//4，数组名表示首元素地址 *a就是首元素
	printf("%d\n", sizeof(a + 1));//4/8，数组名是首元素地址 a+1是第二个元素地址
	printf("%d\n", sizeof(a[1]));//4，第二个元素大小
	printf("%d\n", sizeof(&a));//4，&a取出的是数组的地址，地址的大小就是4/8
	printf("%d\n", sizeof(*&a));//16，&a是数组的地址，数组的地址解引用访问的是数组，sizeof计算的是数组的大小
	printf("%d\n", sizeof(&a + 1));//4/8，&a+1还是地址
	printf("%d\n", sizeof(&a[0]));//4/8，第一个元素的地址
	printf("%d\n", sizeof(&a[0] + 1));//4/8，第二个元素的地址
}