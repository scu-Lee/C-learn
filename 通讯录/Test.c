#define _CRT_SECURE_NO_WARNINGS
#include "Contact.h"

void menu()
{
	printf("       1.add           2.del         \n");
	printf("       3.search        4.modify      \n");
	printf("       5.show          6.sort        \n");
	printf("       0.exit                        \n");
}

int main()
{
	int input = 0;
	//创建通讯录
	struct Contact con;//con就是通讯录，里边包含：1000个元素和size
	//初始化通讯录
	InitContact(&con);
	do
	{
		menu();
		printf("请选择:>");
		scanf_s("%d", &input);//若写scanf("%d",&input); vs2019警告scanf返回值忽略
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
		case SORT:
			//SortContact(&con);
			break;
		case EXIT:
			printf("退出通讯录\n");
			break;
		default:
			printf("选择错误\n");
			break;
		}
	} while (input);
}