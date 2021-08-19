#define  _CRT_SECURE_NO_WARNINGS 1

//字符串函数使用

//strcpy
//#include<stdio.h>
#include<assert.h>
//char *my_strcpy(char *dest,const char*src)
//{
//	assert(dest != NULL);
//	assert(src != NULL);
//	char* ret = dest;
//	//拷贝src指向的字符串到dest指向的空间，包含'\0'
//	while (*dest++ = *src++)
//	{
//
//	}
//	//返回目的空间的起始地址
//	return ret;
//}
//int main()
//{
//	char arr1[] = "abcdefg";
//	char arr2[] = "bit";
//	my_strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}



//实现strcat
#include<stdio.h>
char* my_strcat(char* dest, const char*src)
{
	char* ret = dest;
	assert(dest);
	assert(src);
	//1.找到目的字符串的'\0'
	while (*dest != '\0')
	{
		dest++;
	}
	//2.追加
	while (*dest++ = *src ++ )
	{
		;
	}
	return ret;
	
}
int main()
{
	char arr1[30] = "hello";
	char arr2[] = "world";
	my_strcat(arr1, arr2);
	printf("%s\n", arr1);
	return 0;
}