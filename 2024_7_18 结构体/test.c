#include<stdio.h>

//struct S
//{
//	int a;
//	char c;
//	char arr[20];
//	double d;
//};
//
//typedef struct T
//{
//	char ch[10];
//	struct S s;
//	char* pc;
//}T;
//
//int main()
//{
//	char arr[] = "hello Ferrari";
//	struct T t = { "SCU",{2023,"Lee","Mercedes",3.00},arr };
//	printf("%s\n", t.ch);
//	printf("%d\n", t.s.a);
//	printf("%lf\n", t.s.d);
//	printf("%s\n", t.pc);
//	return 0;
//}


typedef struct Stu
{
	char name[8];
	short age;
	char tele[10];
	char sex[5];
}Stu;

void Print1(Stu x)
{
	printf("name:%s\n", x.name);
	printf("age:%d\n", x.age);
	printf("tele:%s\n", x.tele);
	printf("sex:%s\n", x.sex);
}

void Print2(Stu* p)
{
	printf("name:%s\n", p->name);
	printf("age:%d\n", p->age);
	printf("tele:%s\n", p->tele);
	printf("sex:%s\n", p->sex);
}

int main()
{
	Stu s = { "scu_Lee",24,"20230901","male" };
	Print1(s);
	Print2(&s);
	return 0;
}