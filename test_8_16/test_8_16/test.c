#define  _CRT_SECURE_NO_WARNINGS 1

//��ҵ�⣺
//1.дһ����������������һ���ַ���������
//#include<stdio.h>
//#include<string.h>
//
//void reverse(char * str)
//{
//	int len = strlen(str);
//	char *left = str;
//	char *right = str + len - 1;
//	while (left < right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	char arr[256] = { 0 };
//	//scanf("%s", arr);
//	gets(arr);//��ȡһ��
//	reverse(arr);
//	printf("�����%s\n", arr);
//	return 0;
//}





//2.�������-��Sn=a+aa+aaa+aaaa+aaaaa��ǰ����֮�ͣ�����a��һ������ ���磺2+22+222+2222+22222
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int n = 0;
//	int sum = 0;
//	scanf("%d%d", &a, &n);
//	int ret = 0;
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		ret = ret * 10 + a;
//		sum += ret;
//
//	}
//	printf("%d\n", sum);
//	return 0;
//}




//3.��ӡˮ�ɻ���-���0-100000֮��������������

//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 100000; i++)
//	{
//		//�ж�i�Ƿ�Ϊˮ�ɻ�������������
//		//1.����i��λ��-nλ��
//		int n = 1;
//		int tmp = i;
//		int sum = 0;
//		while (tmp /= 10)
//		{
//			n++;
//		}
//		//2.����i��ÿһλ��n�η�֮�� sum
//		tmp = i;
//		while (tmp)
//		{
//			sum +=(int) pow(tmp % 10, n);
//			tmp /= 10;
//		}
//		//3.�Ƚ�i==sum
//		if (i == sum)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}




//4.��ӡ����
  /*  *
     ***
    *****
   *******
  *********
 ***********
*************
 ***********
  *********
   *******
    *****
	 ***
	  *        */
#include<stdio.h>
int main()
{
	int line = 0;
	scanf("%d", &line);//line���ϰ벿������
	//�ȴ�ӡ�ϰ벿��
	int i = 0;
	for (i = 0; i < line; i++)
	{
		//��ӡ�ո�
		int j = 0;
		for (j = 0; j < line - i - 1; j++)
		{
			printf(" ");
		}
		//��ӡ*
		for (j = 0; j <2*i+1 ; j++)
		{
			printf("*");
		}
		printf("\n");
	}


	//�ٴ�ӡ�°벿��
	for (i = 0; i < line - 1; i++)
	{
		//��ӡ�ո�
		int j = 0;
		for (j = 0; j <= i; j++)
		{
			printf(" ");
		}
		//��ӡ*
		for (j = 0; j < 2 * (line - 1 - i)-1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	
}