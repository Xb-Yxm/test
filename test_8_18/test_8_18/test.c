#define  _CRT_SECURE_NO_WARNINGS 1
//��ϰ��1��
//ʵ��һ�����������������ַ����е�k���ַ�
//���� ABCD����һ���ַ��õ�BCDA  ABCD���������ַ��õ�CDAB
#include <stdio.h>
#include <string.h>
#include<assert.h>



////�ٱ������
//void left_move(char* arr,int k)
//{
//	assert(arr);//ָ��Ķ���  �ж�ָ���Ƿ�Ϊ��ָ��
//	int len = strlen(arr);
//	int i = 0;
//	for (i = 0; i < k; i++)
//	{
//		char tmp = *arr;
//		int j = 0;
//		for (j = 0; j < len - 1; j++)
//		{
//			*(arr + j) = *(arr + j + 1);
//		}
//		*(arr + len - 1) = tmp;
//	}
//
//}



//�ڶ��ַ�����������ת����
//1.ab-ba 2.cdef-fedc 3.cdefab

//reverse(char* left, char*right)
//{
//	assert(left != NULL);
//	assert(right != NULL);
//	while (left < right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//			left++;
//		right--;
//	}
//}
//
//void left_move(char* arr, int k)
//
//{
//	assert(arr);
//	int len = strlen(arr);
//	reverse(arr, arr + k -1 );//�������
//	reverse(arr + k, arr +len - 1);//�����ұ�
//	reverse(arr, arr + len - 1);//��������
//}
//
//
//int main()
//{
//	char arr[] = "abcdef";
//	left_move(arr, 2);//����2���ַ�
//	printf("%s", arr);
//	return 0;
//}



//��ϰ��2��
//дһ���������ж�һ���ַ����Ƿ�����һ���ַ�����ת����   �ǵĻ�����1�����Ƿ���0


int is_left_move(char* str1, char* str2)
{
	int len1 = strlen(str1);
	int len2 = strlen(str2);
	if (len1 != len2)
		return 0;
	//1.��str1�ַ�����׷��һ��str1�ַ���-�⺯�� strncat
	strncat(str1, str2, 6);//abcdefabcdef
	//2.�ж�str2-�⺯��strstr- ���Ӵ�
	char* ret = strstr(str1, str2);
	if (ret == NULL)
	{
		return 0;
	}
	else
	{
		return 1;
	}
}
int main()
{
	//�ж�arr2�Ƿ���arr1��ת����,
	char arr1[30] = "abcdef";
	char arr2[] = "cdefab";
	int ret=is_left_move(arr1,arr2);
	if (ret == 1)
		printf("yes\n");
	else
		printf("no\n");
	return 0;
}