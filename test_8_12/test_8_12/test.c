#define  _CRT_SECURE_NO_WARNINGS 1

//����ָ��
//#include<stdio.h>
//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int a = 20;
//	int b = 30;
//	
//	int(*p)(int, int) = &Add;//&������ �� ������ ���Ǻ����ĵ�ַ
//	printf("%d\n", (*p)(2, 3));
//
//	return;
//}




//#include<stdio.h>
//void Print(char* str)
//{
//	printf("%s\n", str);
//}
//int main()
//{
//	void(*p) (char*) = Print;
//	(*p)("hello world");
//	return 0;
//}
//



//char* my_strcpy(char* dest, const char* arc);
////1.дһ������ָ��pf���ܹ�ָ��my_strcpy
//char*(*pf)(char*, const char*);
////2.дһ������ָ������pfArr���ܹ����4��my_strcpy�����ĵ�ַ
//char* (*pfArr[])(char*, const char*);





//����ָ��������;��
//������
//1.��ͨ����
//#include<stdio.h>
//menu()
//{
//	printf("************************\n");
//	printf("** 1.add        2.sub **\n");
//	printf("** 3.mul         4.div**\n");
//	printf("**        0.exit      **\n");
//	printf("************************\n");
//}
//add(int x,int y)
//{
//	return x + y;
//}
//sub(int x,int y)
//{
//	return x - y;
//}
//mul(int x, int y)
//{
//	return x * y;
//}
//div(int x, int y)
//{
//	return x / y;
//}
//int main()
//{
//	int x = 0;
//	int y = 0;
//	int input = 0;
//	do
//	{
//		menu();
//		printf("��ѡ��");
//		scanf("%d", &input);
//		
//
//		switch (input)
//		{
//		case 1:
//			printf("������������������");
//			scanf("%d%d", &x, &y);
//			printf("%d\n", add(x, y));
//			break;
//		case 2:
//			printf("������������������");
//			scanf("%d%d", &x, &y);
//			printf("%d\n", sub(x, y));
//			break;
//		case 3:
//			printf("������������������");
//			scanf("%d%d", &x, &y);
//			printf("%d\n", mul(x, y));
//			break;
//		case 4:
//			printf("������������������");
//			scanf("%d%d", &x, &y);
//			printf("%d\n", div(x, y));
//			break;
//		case 0:
//			printf("�˳�\n");
//				break;
//		default :
//			printf("ѡ�����\n");
//		}
//	} while (input); 
//	return 0;
//}
//2.����ָ������
#include<stdio.h>
menu()
{
	printf("************************\n");
	printf("** 1.add        2.sub **\n");
	printf("** 3.mul         4.div**\n");
	printf("**        0.exit      **\n");
	printf("************************\n");
}
add(int x, int y)
{
	return x + y;
}
sub(int x, int y)
{
	return x - y;
}
mul(int x, int y)
{
	return x * y;
}
div(int x, int y)
{
	return x / y;
}
int main()
{
	int x = 0;
	int y = 0;
	int input = 0;
	int(*pfArr[5])(int, int) = { 0, add, sub, mul, div };
	do
	{
		menu();
		printf("��ѡ��");
		scanf("%d", &input);
		if (input >= 1 && input <= 4)
		{
			printf("������������������");
			scanf("%d%d", &x, &y);
			int ret = pfArr[input](x, y);
			printf("%d\n", ret);
		}
		else if (input == 0)
		{
			printf("�˳�\n");
		}
		else
		{
			printf("ѡ�����\n");
		}

		
	} while (input);
	return 0;
}