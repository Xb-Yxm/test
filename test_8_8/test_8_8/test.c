#define  _CRT_SECURE_NO_WARNINGS 1
//C����ʵ�õ��Լ���
//F5 F9���ʹ��
//#include<stdio.h>
//int Add(int x, int y)
//{
//	return  x + y;
//}
//int main()
//{
//	printf("hehe\n");
//	int a = 10;
//	int b = 20;
//	int c= Add(a, b);
//	printf("%d\n", c);
//	return 0;
//}
//


//һЩ����ʵ��
//ʵ��һ��ʵ�ִ��룺��1��+2��+3��+������+n�������������(����Ϊ������룬��Ҫ���������⣩
//F10+����
//int main()
//{
//	int i = 0;
//	int sum = 0;//�������ս��
//	int n = 0;
//	int ret = 1;//����n�Ľ׳�
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		int j = 0;
//		// int ret=1;
//		for (j = 1; j <= i; j++)
//		{
//			ret *= j;
//		}
//		sum += ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}



//ʵ�ж���
//ջ����Ĭ��ʹ�ã��ȸߵ�ַ �ٵ͵�ַ   ���������±����������ַ�ɵ͵���
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	for (i = 0; i <= 12; i++)
//	{
//		arr[i] = 0;
//		printf("hehe\n");
//	}
//	return 0;
//}






//���д���ã����ڵ��ԣ��Ĵ���
//ʾ����  ģ��ʵ�ֿ⺯����strcpy

#include<stdio.h>
//void my_strcpy(char* pa, char*pc)
//{
//	while (*pa)
//	{
//		*pa = *pc;
//		pa++;
//		pc++;
//	}
//	*pa = *pc;
//}


//�Ż�1��
//void my_strcpy(char* pa, char*pc)
//{
//	while (*pa != '\0')
//	{
//		*pa++ = *pc++;
//		
//	}
//	*pa = *pc;
//}


//�Ż�2��

//void my_strcpy(char* pa, char*pc)
//{
//	while (*pa++ = *pc++)
//	{
//		;
//		
//	}
//	
//}


//�Ż�3��
//void my_strcpy(char* pa, char*pc)
//{
//	if (pa != NULL && pc != NULL)
//	{
//		while (*pa++ = *pc++)
//		{
//			;
//
//		}
//	}
//	
//}




//�Ż�4��
#include<assert.h>
//void my_strcpy(char* pa, char*pc)
//{
//	assert(pa!=NULL);//����-���ʽ���Ϊ�� ʲô�������������Ϊ�� �ᱨ��
//	assert(pc != NULL);
//	while(*pa++ = *pc++)
//	{
//		;
//
//	}
//
//}



//�Ż�5��
char* my_strcpy(char* pa,const char*pc)
{
	char* ret = pa;
	assert(pa != NULL);//����-���ʽ���Ϊ�� ʲô�������������Ϊ�� �ᱨ��
	assert(pc != NULL);
	while (*pa++ = *pc++)
	{
		;

	}
	return ret;

}


int main()
{
	char arr1[] = { "############" };
	char arr2[] = { "bit" };
	my_strcpy(arr1, arr2);
	printf("%s\n", arr1);
	return 0;
}