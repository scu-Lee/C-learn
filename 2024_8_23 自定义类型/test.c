#include<stdio.h>

//�ṹ��������

//struct Node
//{
//	int data;
//	struct Node* next;
//};
//
//typedef struct Node
//{
//	int data;
//	struct Node* next;
//}Node;//������
//
//int mian()
//{
//
//	return 0;
//}


//�ṹ���ڴ����

//struct S1
//{
//	char c1;
//	int a;
//	char c2;
//};
//
//struct S2
//{
//	char c1;
//	char c2;
//	int a;
//};
//
//int main()
//{
//	struct S1 s1 = { 0 };
//	printf("%d\n", sizeof(s1));
//	struct S2 s2 = { 0 };
//	printf("%d\n", sizeof(s2));
//	return 0;
//}

//struct S3
//{
//	double d;
//	char c;
//	int i;
//};
//
//struct S4
//{
//	char c1;
//	struct S3 s3;
//	double d;
//};
//
//int main()
//{
//	printf("%d\n", sizeof(struct S3));
//	printf("%d\n", sizeof(struct S4));
//	return 0;
//}


////����Ĭ�϶�����4
//#pragma pack(4)
//struct S5
//{
//	char c1;
//	double d;
//};
//#pragma pack()
////ȡ������Ĭ�϶�����
//
//int main()
//{
//	struct S5 s5;
//	printf("%d\n", sizeof(s5));
//	return 0;
//}


#include <stddef.h>
//
//struct S
//{
//	char c;
//	int i;
//	double d;
//};
//
//int main()
//{
//	//offsetof();//�� - ����ƫ����
//	printf("%d\n", offsetof(struct S, c));
//	printf("%d\n", offsetof(struct S, i));
//	printf("%d\n", offsetof(struct S, d));
//	return 0;
//}


//struct S
//{
//	int a;
//	char b;
//	double d;
//};
//
//void Init(struct S* p)
//{
//	p->a = 100;
//	p->b = 'w';
//	p->d = 3.14;
//}
//
//void print1(struct S tmp)
//{
//	printf("%d %c %lf\n", tmp.a, tmp.b, tmp.d);
//}
//
//void print2(struct S* tmp)
//{
//	printf("%d %c %lf\n", tmp->a, tmp->b, tmp->d);
//}
//
//int main()
//{
//	struct S s;
//	Init(&s);
//	print1(s);
//	print2(&s);
//	return 0;
//}


//λ��

//struct S
//{
//	int a : 2;
//	int b : 5;
//	int c : 10;
//	int d : 30;
//};
//
//int main()
//{
//	struct S s;
//	printf("%d\n", sizeof(s));//8���ֽ�
//	return 0;
//}


//struct S
//{
//	char a : 3;
//	char b : 4;
//	char c : 5;
//	char d : 4;
//};
//
//int main()
//{
//	struct S s = { 0 };
//	s.a = 10;
//	s.b = 20;
//	s.c = 3;
//	s.d = 4;
//	return 0;
//}


//ö������
//enum Sex
//{
//	//ö�ٵĿ���ȡֵ - ����
//	MALE,
//	FEMALE=9,
//	SECRET
//};
//
//enum Color
//{
//	RED,//0
//	GREEN,//1
//	BULE//2
//};
//
////c����Դ����---->��ִ�г���
//#define RED 0
//#define GREEN 1
//#define BLUE 2
//
//int main()
//{
//	//enum Sex s = MALE;
//	//enum Color c = 2;//int 
//	int color = RED;
//	//printf("%d %d %d\n", RED, GREEN, BLUE);
//	//printf("%d %d %d\n", MALE, FEMALE, SECRET);
//	return 0;
//}


//���� - ������ - ������

//union U
//{
//	char i;
//	int a;
//};
//
//int main()
//{
//	union U u;
//	printf("%d\n", sizeof(u));
//	printf("%p\n", &u);
//	printf("%p\n", &(u.i));
//	printf("%p\n", &(u.a));
//	return;
//}


//��һ�֣�
//int check_system()
//{
//	int a = 1;
//	//����1����ʾС��
//	//����0����ʾ���
//	return *(char*)&a;
//}

//�ڶ��֣�
//int check_system()
//{
//	union U
//	{
//		char c;
//		int i;
//	}u;
//	u.i = 1;
//	return u.c;
//	//����1����ʾС��
//    //����0����ʾ���
//}
//
//int main()
//{
//	int a = 1;
//	int ret = check_system();
//	if (1 == ret)
//	{
//		printf("С�˴洢");
//	}
//	else
//	{
//		printf("��˴洢");
//	}
//	//int a = 0x11223344;
//	//
//	//�͵�ַ-------------------------->�ߵ�ַ
//	//...[][][][][11][22][33][44][][][][][][]...  ����ֽ���洢ģʽ
//	//...[][][][][44][33][22][11][][][][][][]...  С���ֽ���洢ģʽ
//	return 0;
//}


//enum Sex
//{
//	MALE,
//	FEMALE,
//	SECRET
//};
//
//int main()
//{
//	enum Sex s = MALE;
//	printf("%d\n", sizeof(s));//ö�ٴ�СΪ4�ֽ�
//	return 0;
//}


//union U
//{
//	int a;
//	char arr[5];
//};
//
//int main()
//{
//	union U u;
//	printf("%d\n", sizeof(u));
//	return 0;
//}