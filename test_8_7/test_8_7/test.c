#define  _CRT_SECURE_NO_WARNINGS 1
//结构体
//#include<stdio.h>
////struct 结构体关键字 Student 结构体标签  struct Student-结构体类型
// typedef struct Student
//{
//	//成员变量
//	char name[20];
//	short age;
//	char sex[5];
//
// }Stu;//s1,s2,s3;//s1,s2,s3是三个全局的结构体变量
//int main()
//{
//	struct Student s1 = {"张三",1,"男"};//s1是局部的结构体变量
//	Stu s2 = { "李四", 2, "女" };
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