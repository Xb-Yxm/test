#define  _CRT_SECURE_NO_WARNINGS 1

//共用体
#include<stdio.h>
//union un
//{
//	int i;
//	char c;
//};
//int main()
//{
//	union un u;
//	printf("%d\n", sizeof(u));
//
//	printf("%p\n", &u);
//	printf("%p\n", &u.c);
//	printf("%p\n", &u.i);
//	return 0;
//}
//


//判断当前计算机的大小端存储

int check_sys()
{
	//方法一
	/*int i = 1;
	return *((char*)&i);*/




	//方法二-共用体
	union un
	{
		int i;
		char c;
	}u;
	u.i = 1;
	return u.c;
}

int main()
{
	
	int ret=check_sys();
	if (1 == ret)
	{
		printf("小端\n");
	}
	else
	{
		printf("大端\n");
	}
	return 0;
}