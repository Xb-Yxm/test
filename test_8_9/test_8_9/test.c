#define  _CRT_SECURE_NO_WARNINGS 1
//数据的存储
//大端 小端
//百度2015年系统工程师笔试题：设计一个小程序来判断当前机器的字节序		
//#include<stdio.h>
//int check_sys()
//{
//	int a = 1;
//	char* p = (char*)&a;
//	if (*p == 1)
//		return 1;
//	else
//		return 0;
//}


//优化：
//int check_sys()
//{
//	int a = 1;
//	return *(char*)&a;
//}
//
//
//int main()
//{
//	//返回1，小端
//	//返回0，大端
//	int ret= check_sys();
//	if (ret == 1)
//	{
//		printf("小端\n");
//	}
//	else
//	{
//		printf("大端\n");
//	}
//	return 0;
//}



//练习1:
////输出什么？
//
//int main()
//{
//	char a = -1;
//	signed char b = -1;
//	unsigned char c = -1;
//	//00000000000000000000000011111111-255
//	printf("a=%d,b=%d,c=%d", a, b, c);
//	return 0;
//}




//练习2:
#include <stdio.h>
int main()
{
	char a = -128;
	//10000000000000000000000010000000- -128-原码
	//11111111111111111111111101111111-反码（符号位不变 其余按位取反）
	//111111111111111111111111	-补码
	//11111111111111111111111110000000-整型提升后的补码
	printf("%u\n", a);
	return 0;
}