#define  _CRT_SECURE_NO_WARNINGS 1
//ָ��

//#include<stdio.h>
//int main()
//{
	//printf("%d\n", sizeof(char*));
	//printf("%d\n", sizeof(int*));
	//printf("%d\n", sizeof(short*));
	//printf("%d\n", sizeof(double*));


	//��ָ�����;�����ָ����н����õ�ʱ���ܹ����ʿռ�Ĵ�С
	//int* p-*p�ܷ���4���ֽ�   char* p-*p�ܷ���1���ֽ�   double* p-*p�ܷ���8���ֽ�
	//int a = 0x11223344;
	//�ڴ����ɡ�44 33 22 11����Ϊ��00 00 00 00��
	/*int* pa = &a;
	*pa = 0;*/

	//�ڴ����ɡ�44 33 22 11����Ϊ��00 33 22 11��
	//char* pc = &a;
	//*pc=0;
	
	
	
	/*printf("%p\n", pa);
	printf("%p\n", pc);
*/


	//return 0;
//}


//��ָ�����;����ˣ�ָ����һ���߶�Զ
//int* p-p+1�����4���ֽ�  char* p-p+1 �����1���ֽ�  double* p-p+1 �����8���ֽ�
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



//ָ�������
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
//			p = p + 1;//ָ��+����
//	}
//	return 0;
//}



//ָ��-ָ��  �õ��Ľ�����м�Ԫ�صĸ���
//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	printf("%d\n", arr[9] - arr[0]);
//	return 0;
//}


//ָ��-ָ�����ַ�������
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


//ָ������
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