#define  _CRT_SECURE_NO_WARNINGS 1
//�ṹ��
//#include<stdio.h>
////struct �ṹ��ؼ��� Student �ṹ���ǩ  struct Student-�ṹ������
// typedef struct Student
//{
//	//��Ա����
//	char name[20];
//	short age;
//	char sex[5];
//
// }Stu;//s1,s2,s3;//s1,s2,s3������ȫ�ֵĽṹ�����
//int main()
//{
//	struct Student s1 = {"����",1,"��"};//s1�Ǿֲ��Ľṹ�����
//	Stu s2 = { "����", 2, "Ů" };
//	printf("%s\n", s1.name);
//	printf("%d\n", s1.age);
//	return 0;
//}



#include<stdio.h>
 typedef struct Student
{
	
	char name[20];
	short age;
	char sex[5];

 }Stu;
 void Printf1(struct Student tmp)
 {
	 printf("name:%s\n", tmp.name);
	 printf("age:%d\n", tmp.age);
	 printf("sex:%s\n", tmp.sex);
 }
void Printf2(Stu* ps)
 {
	 printf("name:%s\n",ps->name);
	 printf("age:%d\n", ps->age);
	 printf("sex:%s\n", ps->sex);
 }
int main()
{
	Stu s = { "Jack", 45, "male" };
	Printf1(s);
	Printf2(&s);
	return 0;
}