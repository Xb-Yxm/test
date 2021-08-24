#define  _CRT_SECURE_NO_WARNINGS 1
//通讯录
//功能：
//1.存放1000个好友的信息：姓名 电话 性别 地址 年龄
//2.增加好友信息
//3.删除指定名字的好友信息
//4.查找好友信息
//5.修改好友信息
//6.打印好友信息

#include"contact.h"

void menu()
{
	printf("********************************\n");
	printf("**** 1.add         2.del     ****\n");
	printf("**** 3.search      4.modify  ****\n");
	printf("**** 5.show        0.exit    ****\n");
	printf("***************************\n");
}
int main()
{
	int input = 0;
	//创建通讯录
	struct Contact con;
	//初始化通讯录
	InitContact(&con);
	do
	{
		menu();
		printf("请选择：");
		scanf("%d", &input);
		switch (input)
		{
		case ADD:
			AddContact(&con);
			break;
		case DEL:
			DelContact(&con);
			break;
		case SEARCH:
			SearchContact(&con);
			break;
		case MODIFY:
			ModifyContact(&con);
			break;
		case SHOW:
			ShowContact(&con);
			break;
		case EXIT:
			printf("退出通讯录\n");
			break;
		default:
			printf("输入错误\n");
			break;


		}
	} while (input);
	return 0;
}