#include<stdio.h>

//结构体自引用

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
//}Node;//类型名
//
//int mian()
//{
//
//	return 0;
//}


//结构体内存对齐

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


////设置默认对齐数4
//#pragma pack(4)
//struct S5
//{
//	char c1;
//	double d;
//};
//#pragma pack()
////取消设置默认对齐数
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
//	//offsetof();//宏 - 返回偏移量
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


//位段

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
//	printf("%d\n", sizeof(s));//8个字节
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


//枚举类型
//enum Sex
//{
//	//枚举的可能取值 - 常量
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
////c语言源代码---->可执行程序
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


//联合 - 联合体 - 共用体

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


//第一种：
//int check_system()
//{
//	int a = 1;
//	//返回1，表示小端
//	//返回0，表示大端
//	return *(char*)&a;
//}

//第二种：
//int check_system()
//{
//	union U
//	{
//		char c;
//		int i;
//	}u;
//	u.i = 1;
//	return u.c;
//	//返回1，表示小端
//    //返回0，表示大端
//}
//
//int main()
//{
//	int a = 1;
//	int ret = check_system();
//	if (1 == ret)
//	{
//		printf("小端存储");
//	}
//	else
//	{
//		printf("大端存储");
//	}
//	//int a = 0x11223344;
//	//
//	//低地址-------------------------->高地址
//	//...[][][][][11][22][33][44][][][][][][]...  大端字节序存储模式
//	//...[][][][][44][33][22][11][][][][][][]...  小端字节序存储模式
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
//	printf("%d\n", sizeof(s));//枚举大小为4字节
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