#define  _CRT_SECURE_NO_WARNINGS 1
//������
//���Ʋ�����
//#include<stdio.h>
//int main()
//{
//	int a = 16;
//	int b = a >> 1;
//	//���Ʋ������ƶ����Ƕ�����λ
//	printf("b=%d\n", b);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int a = -1;
//	int b = a >> 1;
//	printf("b=%d\n", b);
//	return 0;
//}

//���Ʋ�����
//#include<stdio.h>
//int main()
//{
//	int a = 5;
//	int b = a << 1;
//	printf("b=%d\n", b);
//	return 0;
//}

//λ������
//#include<stdio.h>
//int main()
//{
//	
//	int a = 3;
//	int b = 5;
	//&-��λ�� -��������λ��
	//int c = a&b;
	//��Ϊ1���������1 
	//3-00000000000000000000000000000011
	//5-00000000000000000000000000000101
  //3&5-00000000000000000000000000000001
	
	
	//|-��λ�� -��������λ��
	//int c = a | b;
	//3|5=00000000000000000000000000000111

	//^��λ��� ��������λ���-��ͬΪ0������Ϊ1
	//int c = a^b;
	//3-00000000000000000000000000000011
	//5-00000000000000000000000000000101
  //3^5-00000000000000000000000000000110=6
	//printf("c=%d\n", c);
//}

//һ�������⣺���ܴ�����ʱ��������������������ʵ���������Ľ���
//#include<stdio.h>
//int main()
//{
//	int a = 3;
//	int b = 5;
//	printf("before:a=%d b=%d\n", a, b);
//	a = a^b;
//	b = a^b;
//	a = a^b;
//	printf("after:a=%d b=%d\n", a, b);
//
//}

//��ϰ����д����ʵ�֣���һ�������洢���ڴ��еĶ�������1�ĸ���
#include<stdio.h>
int main()
{
	int num = 0;
	int count = 0;
	scanf("%d", &num);

	int i = 0;
	for (i = 0; i < 32; i++)
	{
		if (1 ==((num >> i)&1) )
			count++;
	}
	//�����㷨��ȱ��-����Ǹ��� �󲻳����
	/*while (num)
	{
		if (num % 2 == 1)
			count++;
		num = num / 2;
	}*/
	printf("%d\n", count);
	return 0;
}