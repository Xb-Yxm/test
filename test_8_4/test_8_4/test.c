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
	//~ -��������λȡ��
	//00000000000000000000000000000000
	//11111111111111111111111111111111-���� ��ӡ������ԭ�룬���Ե����ԭ��
	//11111111111111111111111111111110-����
	//10000000000000000000000000000001-ԭ��
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


//360������
//#include<stdio.h>
//int main()
//{
//	int i = 0, a = 0, b = 2, c = 3, d = 4;
//	i = a++ && ++b && d++;//���ҵĹ�ϵ ���Ϊ�� ����ȫ������������
//	printf("a=%d\n b=%d\n c=%d\n d=%d\n", a, b, c, d);
//	i = a++ || ++b || d++;//��Ĺ�ϵ ���λ�� ����ȫ������������
//	printf("a=%d\n b=%d\n c=%d\n d=%d\n", a, b, c, d);
//	return 0;
//}


//��������������Ŀ��������
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