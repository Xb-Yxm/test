#define  _CRT_SECURE_NO_WARNINGS 1
//�α��ڶ���

//��2.1
//��5��


//#include<stdio.h>
//int main()
//{
//	int a = 1;
//	int i = 1;
//	for (i = 1; i <= 5; i++)
//	{
//		a = a*i;
//		
//	}
//	printf("%d\n", a);
//
//	return 0;
//}

//��2.3 �ж�2000-2500���е�ÿһ���Ƿ�Ϊ����
#include<stdio.h>
//int main()
//{
//	int year = 0;
//	for (year = 2000; year <= 2500; year++)
//	{
//		if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
//		{
//			printf("%d ", year);
//		}
//	}
//	return 0;
//}


//��2.5 ����һ�����ڻ����3���� �ж��ǲ�������
int main()
{
	int a = 0;
	scanf("%d", &a);
	int i = 2;
	while (i < a)
	{
		if (a%i == 0)
		{
			printf("��������\n");
			break;
		}
		else
		{
			printf("������\n");
			break;
		}
		i++;
	}
	
	return 0;
}