#define  _CRT_SECURE_NO_WARNINGS 1
//指针

//#include<stdio.h>
//int main()
//{
	//printf("%d\n", sizeof(char*));
	//printf("%d\n", sizeof(int*));
	//printf("%d\n", sizeof(short*));
	//printf("%d\n", sizeof(double*));


	//①指针类型决定了指针进行解引用的时候，能够访问空间的大小
	//int* p-*p能访问4个字节   char* p-*p能访问1个字节   double* p-*p能访问8个字节
	//int a = 0x11223344;
	//内存里由“44 33 22 11”变为“00 00 00 00”
	/*int* pa = &a;
	*pa = 0;*/

	//内存里由“44 33 22 11”变为“00 33 22 11”
	//char* pc = &a;
	//*pc=0;
	
	
	
	/*printf("%p\n", pa);
	printf("%p\n", pc);
*/


	//return 0;
//}


//②指针类型决定了：指针走一步走多远
//int* p-p+1向后走4个字节  char* p-p+1 向后走1个字节  double* p-p+1 向后走8个字节
//#include<stdio.h>
//int main()
//{
//	int a = 0x11223344;
//	int* pa = &a;
//	char* pc = &a;
//
//	printf("%p\n", pa);
//	printf("%p\n", pa+1);
//
//	printf("%p\n", pc);
//	printf("%p\n", pc+1);
//
//	return 0;
//}



//指针的运算
//# include<stdio.h>
//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int*p = arr;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *p);
//			p = p + 1;//指针+整数
//	}
//	return 0;
//}



//指针-指针  得到的结果是中间元素的个数
//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	printf("%d\n", arr[9] - arr[0]);
//	return 0;
//}


//指针-指针求字符串长度
//#include<stdio.h>
//int my_strlen(char* str)
//{
//	char* start = str;
//	char* end = str;
//	while (*end != '\0')
//	{
//		end++;
//	}
//	return end - start;
//
//}
//int main()
//{
//	char arr[] = "world";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}


//指针数组
#include<stdio.h>
int main()
{
	int a = 10;
	int b = 2;
	int c = 30;
	int i = 0;
	int* arr[3] = { &a, &b, &c };
	for (i = 0; i < 3; i++)
	{
		printf("%d ", *(arr[i]));
	}
	return 0;
}