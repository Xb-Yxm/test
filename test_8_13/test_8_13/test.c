#define  _CRT_SECURE_NO_WARNINGS 1
//ָ�����3



//ð������
//1.��ͨ����(ֻ�������������飬�����ű�����ͣ�
//void bubble_sort(int arr[], int sz)
//{
//	int i = 0;
// ����
//	for (i = 0; i < sz - 1; i++)
//	{
         //ÿһ�˱ȽϵĶ���
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j]>arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}
//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr,sz);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	
//	return 0;
//}



//2.qsort-�⺯�� -quicksort ��������
//��һ������������������ĵ�ַ 
//�ڶ��������������������Ԫ�ظ���
//����������������������ÿ��Ԫ�ش�С ��λ���ֽ�  
//���ĸ��������Ǻ���ָ�룬�Ƚ�����Ԫ�ص����ú����ĵ�ַ-�������ʹ�����Լ�ʵ��
//             ����ָ������������ǣ����Ƚϵ�����Ԫ�صĵ�ַ

//#include<stdio.h>
//#include<stdlib.h>
//
//
//int cmp_int(const void* e1, const void* e2)
//{
//	//�Ƚ���������
//	return *(int*)e1 - *(int*)e2;
//}
//void test1()
//{
//	int arr[10] = { 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, sz, sizeof(arr[0]), cmp_int);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//
//
//int cmp_float(const void*e1, const  void*e2)
//{
//	return *(float*)e1 - *(float*)e2;
//}
//void test2()
//{
//	float f[] = { 9.0, 8.0, 7.0, 6.0, 5.0 };
//    int	sz = sizeof(f) / sizeof(f[0]);
//	qsort(f, sz, sizeof(f[0]), cmp_float);
//	int j = 0;
//	for (j = 0; j < sz; j++)
//	{
//		printf("%f ", f[j]);
//	}
//}
//
//int main()
//{
//	//test1();
//	test2();
//
//	return 0;
//}
//



//ָ���������������
//һά����
#include<stdio.h>
int main()
{
	int a[] = { 1, 2, 3, 4 };
	printf("%d\n", sizeof(a));//16, sizeof(��������������������ܴ�С��λ���ֽ�
	printf("%d\n", sizeof(a + 0));//4/8������������ ������������Ԫ�ص�ַ a+0������Ԫ�ص�ַ����ַ��С����4/8
	printf("%d\n", sizeof(*a));//4����������ʾ��Ԫ�ص�ַ *a������Ԫ��
	printf("%d\n", sizeof(a + 1));//4/8������������Ԫ�ص�ַ a+1�ǵڶ���Ԫ�ص�ַ
	printf("%d\n", sizeof(a[1]));//4���ڶ���Ԫ�ش�С
	printf("%d\n", sizeof(&a));//4��&aȡ����������ĵ�ַ����ַ�Ĵ�С����4/8
	printf("%d\n", sizeof(*&a));//16��&a������ĵ�ַ������ĵ�ַ�����÷��ʵ������飬sizeof�����������Ĵ�С
	printf("%d\n", sizeof(&a + 1));//4/8��&a+1���ǵ�ַ
	printf("%d\n", sizeof(&a[0]));//4/8����һ��Ԫ�صĵ�ַ
	printf("%d\n", sizeof(&a[0] + 1));//4/8���ڶ���Ԫ�صĵ�ַ
}