#define  _CRT_SECURE_NO_WARNINGS 1
//ָ�����
//#include<stdio.h>
//int main()
//{
//	char arr[] = "abcdef";
//	char* ch = arr;
//	printf("%s\n", arr);
//	printf("%s\n", ch);
//	return 0;
//}



//#include<stdio.h>
//int main()
//{
//	const char* p = "abcdef";//���ַ������ַ��ĵ�ַ�ŵ���p��  "abcdef"��һ�������ַ���
//	
//	printf("%s\n", p);
//	printf("%c\n",*p);
//	return 0;
//}


//��ϰ��
//#include <stdio.h>
//int main()
//{
//	char str1[] = "hello bit.";
//	char str2[] = "hello bit.";
//	char *str3 = "hello bit.";
//	char *str4 = "hello bit.";
//	if (str1 == str2)//������ͬ������������ͬ���ڴ�ռ䣬�˴��ǱȽ���Ԫ�ص�ַ �϶������
//		printf("str1 and str2 are same\n");
//	else
//		printf("str1 and str2 are not same\n");
//
//	if (str3 == str4)//����str3��str4ָ�����һ��ͬһ�������ַ�����
//		printf("str3 and str4 are same\n");
//	else
//		printf("str3 and str4 are not same\n");
//
//	return 0;
//}




//ָ������-���������ָ�������
//int* parr[4];-�������ָ�������
//char* pch[5];-����ַ�ָ�������

//#include<stdio.h>
//int main()
//{
//	int a = 1;
//	int b = 2;
//	int c = 3;
//	int d = 4;
//	int* arr[] = { &a, &b, &c, &d };
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		printf("%d ", *arr[i]);
//	}
//	return 0;
//}

//
//#include<stdio.h>
//int main()
//{
//	int arr1[] = { 1, 2, 3, 4, 5 };
//	int arr2[] = { 2, 3, 4, 5, 6 };
//	int arr3[] = { 3, 4, 5, 6, 7 };
//	int* parr[] = { arr1, arr2, arr3 };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		{
//			for (j = 0; j < 5; j++)
//				printf("%d ", *(parr[i] + j));
//		}
//		printf("\n");
//	}
//	return 0;
//}



//����ָ��-ָ�������ָ��-�������ĵ�ַ
//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int(*p)[10] = &arr;//p��������ָ��
//	return 0;
//}


#include<stdio.h>

//�������������ʽ
void print1(int arr[3][4], int x, int y)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < x; i++)
	{
		for (j = 0; j <y ; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
}
//������ָ�����ʽ
void print2(int(*p)[4], int x, int y)
{
	int i = 0;
	{
		for (i = 0; i < x; i++)
		{
			int j = 0;
			for (j = 0; j < y; j++)
			{
				printf("%d ", *(*(p + i) + j));
			}
			printf("\n");
		}
	}
}
int main()
{
	int arr[3][4] = { { 1, 2, 3, 4 }, { 2, 3, 4, 5 }, { 3, 4, 5, 6 } };
	print1(arr,3,4);
	print2(arr, 3, 4);
	return 0;
}