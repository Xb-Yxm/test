#define  _CRT_SECURE_NO_WARNINGS 1

//作业题：
//1.写一个函数，可以逆序一个字符串的内容
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
//	gets(arr);//读取一行
//	reverse(arr);
//	printf("逆序后：%s\n", arr);
//	return 0;
//}





//2.计算求和-求Sn=a+aa+aaa+aaaa+aaaaa的前五项之和，其中a是一个数字 例如：2+22+222+2222+22222
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




//3.打印水仙花数-求出0-100000之间的自幂数并输出

//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 100000; i++)
//	{
//		//判断i是否为水仙花数（自幂数）
//		//1.计算i的位数-n位数
//		int n = 1;
//		int tmp = i;
//		int sum = 0;
//		while (tmp /= 10)
//		{
//			n++;
//		}
//		//2.计算i的每一位的n次方之和 sum
//		tmp = i;
//		while (tmp)
//		{
//			sum +=(int) pow(tmp % 10, n);
//			tmp /= 10;
//		}
//		//3.比较i==sum
//		if (i == sum)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}




//4.打印菱形
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
	scanf("%d", &line);//line是上半部分行数
	//先打印上半部分
	int i = 0;
	for (i = 0; i < line; i++)
	{
		//打印空格
		int j = 0;
		for (j = 0; j < line - i - 1; j++)
		{
			printf(" ");
		}
		//打印*
		for (j = 0; j <2*i+1 ; j++)
		{
			printf("*");
		}
		printf("\n");
	}


	//再打印下半部分
	for (i = 0; i < line - 1; i++)
	{
		//打印空格
		int j = 0;
		for (j = 0; j <= i; j++)
		{
			printf(" ");
		}
		//打印*
		for (j = 0; j < 2 * (line - 1 - i)-1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	
}