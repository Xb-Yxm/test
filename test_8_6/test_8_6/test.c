#define  _CRT_SECURE_NO_WARNINGS 1

//��ϰ1��
//����һ���������飺��ɶ�����Ĳ���
//1.ʵ�ֺ��� init������ʼ������ȫΪ0
//2.ʵ��printf������ӡ�����ÿ��Ԫ��
//3.ʵ��reverse���������������Ԫ�ص�����
//Ҫ���Լ�������Ϻ����Ĳ���������ֵ
//
//#include<stdio.h>
//void Init(int arr[],int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		arr[i] = 0;
//	}
//}
//void Printf(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//void Reverse(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz-1;
//	while (left < right)
//	{
//		int tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//
//	}
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//Init(arr,sz);//�������ʼ��Ϊ0
//	Printf(arr, sz);//��ӡ
//	Reverse(arr,sz);
//	Printf(arr, sz);
//	return 0;
//}


//��ϰ2��������A�е����ݺ�����B�е����ݽ��н���������һ����
//


//��ϰ3��ͳ�ƶ����ƣ����룩��1�ĸ���
#include<stdio.h>
//������
//int count_bit_one(unsigned int a)//ȥ��unsigned�Ļ����󲻳������Ľ��
//{
//	int count = 0;
//	while(a)
//	{
//		
//		if (a % 2 == 1)
//		{
//			count++;
//			
//		}
//		
//		a = a / 2;
//	}
//	return count;
//}

//������
//int count_bit_one(int a)
//{
//	int count = 0;
//	int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (((a >> i) & 1) == 1)
//		{
//			count++;
//		}
//	}
//	return count;
//}

//�����ۣ������㷨��
//int count_bit_one(int a)
//{
//	int count = 0;
//	while (a)
//	{
//		a = a&(a - 1);
//		count++;
//	}
//}
//
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int count = count_bit_one(a);
//	printf("%d\n", count);
//	return 0;
//
//}


//�˷��ھ���
#include<stdio.h>
void table(int a)
{
	int i = 0;
	for (i = 1; i <= a; i++)
	{
		int j = 0;
		for (j = 1; j <= i; j++)
		{
			printf("%d*%d=%d\t", i, j, i*j);
		}
		printf("\n");
	}
}
int main()
{
	int a = 0;
	scanf("%d", &a);
	table(a);
	return 0;
}