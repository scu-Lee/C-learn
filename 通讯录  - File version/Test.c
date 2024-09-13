#define _CRT_SECURE_NO_WARNINGS
#include "Contact.h"

void menu()
{
	printf("       1.add           2.del         \n");
	printf("       3.search        4.modify      \n");
	printf("       5.show          6.sort        \n");
	printf("       7.save          0.exit        \n");
}

int main()
{
	int input = 0;
	//����ͨѶ¼
	struct Contact con;//con����ͨѶ¼����߰�����dataָ���size��capacity
	//��ʼ��ͨѶ¼
	InitContact(&con);
	do
	{
		menu();
		printf("��ѡ��:>");
		scanf_s("%d", &input);//��дscanf("%d",&input); vs2019����scanf����ֵ����
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
			//����ͨѶ¼ - �ͷŶ�̬���ٵ��ڴ�
			SaveContact(&con);
			DestoryContact(&con);
			printf("�˳�ͨѶ¼\n");
			break;
		case SAVE:
			SaveContact(&con);
			break;
		default:
			printf("ѡ�����\n");
			break;
		}
	} while (input);
}