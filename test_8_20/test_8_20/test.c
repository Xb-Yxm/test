#define  _CRT_SECURE_NO_WARNINGS 1

//�ַ�������
//strstr-�����ַ���
#include<stdio.h>
#include<string.h>
int main()
{
	char* p1 = "abcdef";
	char* p2= "def";
	char *ret = strstr(p1, p2);
	if (ret == NULL)
	{
		printf("�Ӵ�������\n");
	}
	else
	{
		printf("%s\n", ret);
	}
	return 0;
}