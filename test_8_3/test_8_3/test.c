#define  _CRT_SECURE_NO_WARNINGS 1
//操作符
//右移操作符
//#include<stdio.h>
//int main()
//{
//	int a = 16;
//	int b = a >> 1;
//	//右移操作符移动的是二进制位
//	printf("b=%d\n", b);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int a = -1;
//	int b = a >> 1;
//	printf("b=%d\n", b);
//	return 0;
//}

//左移操作符
//#include<stdio.h>
//int main()
//{
//	int a = 5;
//	int b = a << 1;
//	printf("b=%d\n", b);
//	return 0;
//}

//位操作符
//#include<stdio.h>
//int main()
//{
//	
//	int a = 3;
//	int b = 5;
	//&-按位与 -按二进制位与
	//int c = a&b;
	//都为1，结果才是1 
	//3-00000000000000000000000000000011
	//5-00000000000000000000000000000101
  //3&5-00000000000000000000000000000001
	
	
	//|-按位或 -按二进制位或
	//int c = a | b;
	//3|5=00000000000000000000000000000111

	//^按位异或 按二进制位异或-相同为0，相异为1
	//int c = a^b;
	//3-00000000000000000000000000000011
	//5-00000000000000000000000000000101
  //3^5-00000000000000000000000000000110=6
	//printf("c=%d\n", c);
//}

//一道面试题：不能创建临时变量（第三个变量），实现两个数的交换
//#include<stdio.h>
//int main()
//{
//	int a = 3;
//	int b = 5;
//	printf("before:a=%d b=%d\n", a, b);
//	a = a^b;
//	b = a^b;
//	a = a^b;
//	printf("after:a=%d b=%d\n", a, b);
//
//}

//练习：编写代码实现：求一个整数存储在内存中的二进制中1的个数
#include<stdio.h>
int main()
{
	int num = 0;
	int count = 0;
	scanf("%d", &num);

	int i = 0;
	for (i = 0; i < 32; i++)
	{
		if (1 ==((num >> i)&1) )
			count++;
	}
	//下面算法有缺陷-如果是负数 求不出结果
	/*while (num)
	{
		if (num % 2 == 1)
			count++;
		num = num / 2;
	}*/
	printf("%d\n", count);
	return 0;
}