#define  _CRT_SECURE_NO_WARNINGS 1

//��̬�ڴ����
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<errno.h>

int main()
{
	//���ڴ�����ʮ�����͵Ŀռ�
	int* p = (int *)malloc(10 * sizeof(int));
	if (p == NULL)
	{
		//��ӡ����ԭ��
		printf("%s\n", strerror(errno));
	}
	else
	{
		//����ʹ�ÿռ�
		int i = 0;
		for (i = 0; i < 10; i++)
		{
			*(p + i) = i;
		}
		for (i = 0; i < 10; i++)
		{
			printf("%d ", *(p + i));
		}
	}
	free(p);
	p = NULL;
	return 0;
}