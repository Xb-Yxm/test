#define  _CRT_SECURE_NO_WARNINGS 1
//���ݵĴ洢
//��� С��
//�ٶ�2015��ϵͳ����ʦ�����⣺���һ��С�������жϵ�ǰ�������ֽ���		
//#include<stdio.h>
//int check_sys()
//{
//	int a = 1;
//	char* p = (char*)&a;
//	if (*p == 1)
//		return 1;
//	else
//		return 0;
//}


//�Ż���
//int check_sys()
//{
//	int a = 1;
//	return *(char*)&a;
//}
//
//
//int main()
//{
//	//����1��С��
//	//����0�����
//	int ret= check_sys();
//	if (ret == 1)
//	{
//		printf("С��\n");
//	}
//	else
//	{
//		printf("���\n");
//	}
//	return 0;
//}



//��ϰ1:
////���ʲô��
//
//int main()
//{
//	char a = -1;
//	signed char b = -1;
//	unsigned char c = -1;
//	//00000000000000000000000011111111-255
//	printf("a=%d,b=%d,c=%d", a, b, c);
//	return 0;
//}




//��ϰ2:
#include <stdio.h>
int main()
{
	char a = -128;
	//10000000000000000000000010000000- -128-ԭ��
	//11111111111111111111111101111111-���루����λ���� ���ఴλȡ����
	//111111111111111111111111	-����
	//11111111111111111111111110000000-����������Ĳ���
	printf("%u\n", a);
	return 0;
}