#define  _CRT_SECURE_NO_WARNINGS 1
//指针练习


//#include<stdio.h>
//int main()
//{
	//char *p = "abcdef";//p里面存的a的地址


	//printf("%d\n", strlen(p));
	//printf("%d\n", strlen(p + 1));
	//printf("%d\n", strlen(*p));//err
	//printf("%d\n", strlen(p[0]));//err
	//printf("%d\n", strlen(&p));
	//printf("%d\n", strlen(&p + 1));
	//printf("%d\n", strlen(&p[0] + 1));

	
	//printf("%d\n", sizeof(p));
	//printf("%d\n", sizeof(p + 1));//p+1得到的是字符b的地址
	//printf("%d\n", sizeof(*p));//字符串的第一个字符-'a'
	//printf("%d\n", sizeof(p[0]));//p[0]=*(p+0)=='a'
	//printf("%d\n", sizeof(&p));
	//printf("%d\n", sizeof(&p + 1));
	//printf("%d\n", sizeof(&p[0] + 1));
//}




//#include<stdio.h>
//int main()
//{
//	//二维数组
//	int a[3][4] = { 0 };
//
//	printf("%d\n", sizeof(a));
//	printf("%d\n", sizeof(a[0][0]));
//	printf("%d\n", sizeof(a[0]));//将二维数组看成三个一维数组 a[0]相当于第一行作为一维数组的数组名
//	printf("%d\n", sizeof(a[0] + 1));//第一行第二个元素的地址
//	printf("%d\n", sizeof(*(a[0] + 1)));
//	printf("%d\n", sizeof(a + 1));//二维数组的首元素是第一行（把二维数组看成一维数组），
//	printf("%d\n", sizeof(*(a + 1)));
//	printf("%d\n", sizeof(&a[0] + 1));
//	printf("%d\n", sizeof(*(&a[0] + 1)));
//	printf("%d\n", sizeof(*a));
//	return 0;
//}




////笔试题1：
//int main()
//{
//	int a[5] = { 1, 2, 3, 4, 5 };
//	int *ptr = (int *)(&a + 1);
//	printf("%d,%d", *(a + 1), *(ptr - 1));
//	return 0;
//}
////程序的结果是什么？



//笔试题2：
//由于还没学习结构体，这里告知结构体的大小是20个字节
//指针+-整数 取决于指针类型
//struct Test
//{
//	int Num;
//	char *pcName;
//	short sDate;
//	char cha[2];
//	short sBa[4];
//}*p;
////假设p 的值为0x100000。 如下表表达式的值分别为多少？
//int main()
//{
//	printf("%p\n", p + 0x1);
//	printf("%p\n", (unsigned long)p + 0x1);
//	printf("%p\n", (unsigned int*)p + 0x1);
//	return 0;
//}


//笔试题3：
//int main()
//{
//	int a[4] = { 1, 2, 3, 4 };
//	int *ptr1 = (int *)(&a + 1);
//	int *ptr2 = (int *)((int)a + 1);
//	printf("%x,%x", ptr1[-1], *ptr2);
//	return 0;
//}



//笔试题5：
#include <stdio.h>
int main()
{
	int a[3][2] = { (0, 1), (2, 3), (4, 5) };//逗号表达式 所以a[3][2]={{1,3},{5,0},{0,0}
	int *p;
	p = a[0];
	printf("%d", p[0]);
	return 0;
}