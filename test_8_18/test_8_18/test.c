#define  _CRT_SECURE_NO_WARNINGS 1
//练习题1：
//实现一个函数，可以左旋字符串中的k个字符
//例如 ABCD左旋一个字符得到BCDA  ABCD左旋两个字符得到CDAB
#include <stdio.h>
#include <string.h>
#include<assert.h>



////①暴力求解
//void left_move(char* arr,int k)
//{
//	assert(arr);//指针的断言  判断指针是否为空指针
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



//第二种方法（三步翻转法）
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
//	reverse(arr, arr + k -1 );//逆序左边
//	reverse(arr + k, arr +len - 1);//逆序右边
//	reverse(arr, arr + len - 1);//逆序整体
//}
//
//
//int main()
//{
//	char arr[] = "abcdef";
//	left_move(arr, 2);//左旋2个字符
//	printf("%s", arr);
//	return 0;
//}



//练习题2：
//写一个函数，判断一个字符串是否由另一个字符串旋转得来   是的话返回1，不是返回0


int is_left_move(char* str1, char* str2)
{
	int len1 = strlen(str1);
	int len2 = strlen(str2);
	if (len1 != len2)
		return 0;
	//1.在str1字符串中追加一个str1字符串-库函数 strncat
	strncat(str1, str2, 6);//abcdefabcdef
	//2.判断str2-库函数strstr- 找子串
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
	//判断arr2是否由arr1旋转得来,
	char arr1[30] = "abcdef";
	char arr2[] = "cdefab";
	int ret=is_left_move(arr1,arr2);
	if (ret == 1)
		printf("yes\n");
	else
		printf("no\n");
	return 0;
}