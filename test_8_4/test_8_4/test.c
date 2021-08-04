#define  _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	char b = 'a';
//	int arr[10] = { 0 };
//
//
//	printf("%d\n", sizeof(a));
//	printf("%d\n", sizeof(int));
//
//	printf("%d\n", sizeof(b));
//	printf("%d\n", sizeof(char));
//
//	printf("%d\n", sizeof(arr));
//	printf("%d\n", sizeof(int[10]));
//	return 0;
//
//}


//
//#include<stdio.h>
//int main()
//{
//	short s = 0;
//	int a = 10;
//	printf("%d\n", sizeof(s = a + 5));
//	printf("%d\n", s);
//
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int a = 0;
	//~ -按二进制位取反
	//00000000000000000000000000000000
	//11111111111111111111111111111111-补码 打印出的是原码，所以得求出原码
	//11111111111111111111111111111110-反码
	//10000000000000000000000000000001-原码
//	printf("%d\n", ~a);
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int a = (int)3.14;
//	printf("%d\n", a);
//	return 0;
//}


//360笔试题
//#include<stdio.h>
//int main()
//{
//	int i = 0, a = 0, b = 2, c = 3, d = 4;
//	i = a++ && ++b && d++;//并且的关系 左边为假 后面全部跳过不计算
//	printf("a=%d\n b=%d\n c=%d\n d=%d\n", a, b, c, d);
//	i = a++ || ++b || d++;//或的关系 左边位真 后面全部跳过不计算
//	printf("a=%d\n b=%d\n c=%d\n d=%d\n", a, b, c, d);
//	return 0;
//}


//条件操作符（三目操作符）
#include<stdio.h>
int main()
{
	int a = 0;
	int b = 0;
	//if (a > 5)
	//	b = 3;
	//else
	//	b = -3;


	b=a > 5 ? 3 : -3;
	printf("b=%d\n", b);
	return 0;
}