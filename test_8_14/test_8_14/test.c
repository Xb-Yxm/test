#define  _CRT_SECURE_NO_WARNINGS 1
//ָ����ϰ


//#include<stdio.h>
//int main()
//{
	//char *p = "abcdef";//p������a�ĵ�ַ


	//printf("%d\n", strlen(p));
	//printf("%d\n", strlen(p + 1));
	//printf("%d\n", strlen(*p));//err
	//printf("%d\n", strlen(p[0]));//err
	//printf("%d\n", strlen(&p));
	//printf("%d\n", strlen(&p + 1));
	//printf("%d\n", strlen(&p[0] + 1));

	
	//printf("%d\n", sizeof(p));
	//printf("%d\n", sizeof(p + 1));//p+1�õ������ַ�b�ĵ�ַ
	//printf("%d\n", sizeof(*p));//�ַ����ĵ�һ���ַ�-'a'
	//printf("%d\n", sizeof(p[0]));//p[0]=*(p+0)=='a'
	//printf("%d\n", sizeof(&p));
	//printf("%d\n", sizeof(&p + 1));
	//printf("%d\n", sizeof(&p[0] + 1));
//}




//#include<stdio.h>
//int main()
//{
//	//��ά����
//	int a[3][4] = { 0 };
//
//	printf("%d\n", sizeof(a));
//	printf("%d\n", sizeof(a[0][0]));
//	printf("%d\n", sizeof(a[0]));//����ά���鿴������һά���� a[0]�൱�ڵ�һ����Ϊһά�����������
//	printf("%d\n", sizeof(a[0] + 1));//��һ�еڶ���Ԫ�صĵ�ַ
//	printf("%d\n", sizeof(*(a[0] + 1)));
//	printf("%d\n", sizeof(a + 1));//��ά�������Ԫ���ǵ�һ�У��Ѷ�ά���鿴��һά���飩��
//	printf("%d\n", sizeof(*(a + 1)));
//	printf("%d\n", sizeof(&a[0] + 1));
//	printf("%d\n", sizeof(*(&a[0] + 1)));
//	printf("%d\n", sizeof(*a));
//	return 0;
//}




////������1��
//int main()
//{
//	int a[5] = { 1, 2, 3, 4, 5 };
//	int *ptr = (int *)(&a + 1);
//	printf("%d,%d", *(a + 1), *(ptr - 1));
//	return 0;
//}
////����Ľ����ʲô��



//������2��
//���ڻ�ûѧϰ�ṹ�壬�����֪�ṹ��Ĵ�С��20���ֽ�
//ָ��+-���� ȡ����ָ������
//struct Test
//{
//	int Num;
//	char *pcName;
//	short sDate;
//	char cha[2];
//	short sBa[4];
//}*p;
////����p ��ֵΪ0x100000�� ���±���ʽ��ֵ�ֱ�Ϊ���٣�
//int main()
//{
//	printf("%p\n", p + 0x1);
//	printf("%p\n", (unsigned long)p + 0x1);
//	printf("%p\n", (unsigned int*)p + 0x1);
//	return 0;
//}


//������3��
//int main()
//{
//	int a[4] = { 1, 2, 3, 4 };
//	int *ptr1 = (int *)(&a + 1);
//	int *ptr2 = (int *)((int)a + 1);
//	printf("%x,%x", ptr1[-1], *ptr2);
//	return 0;
//}



//������5��
#include <stdio.h>
int main()
{
	int a[3][2] = { (0, 1), (2, 3), (4, 5) };//���ű��ʽ ����a[3][2]={{1,3},{5,0},{0,0}
	int *p;
	p = a[0];
	printf("%d", p[0]);
	return 0;
}