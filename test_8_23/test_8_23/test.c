#define  _CRT_SECURE_NO_WARNINGS 1

//������
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


//�жϵ�ǰ������Ĵ�С�˴洢

int check_sys()
{
	//����һ
	/*int i = 1;
	return *((char*)&i);*/




	//������-������
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
		printf("С��\n");
	}
	else
	{
		printf("���\n");
	}
	return 0;
}