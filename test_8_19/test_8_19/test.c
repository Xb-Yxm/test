#define  _CRT_SECURE_NO_WARNINGS 1

//�ַ�������ʹ��

//strcpy
//#include<stdio.h>
#include<assert.h>
//char *my_strcpy(char *dest,const char*src)
//{
//	assert(dest != NULL);
//	assert(src != NULL);
//	char* ret = dest;
//	//����srcָ����ַ�����destָ��Ŀռ䣬����'\0'
//	while (*dest++ = *src++)
//	{
//
//	}
//	//����Ŀ�Ŀռ����ʼ��ַ
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



//ʵ��strcat
#include<stdio.h>
char* my_strcat(char* dest, const char*src)
{
	char* ret = dest;
	assert(dest);
	assert(src);
	//1.�ҵ�Ŀ���ַ�����'\0'
	while (*dest != '\0')
	{
		dest++;
	}
	//2.׷��
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