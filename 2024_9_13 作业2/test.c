#define _CRT_
#include <stdio.h>

//1.
//typedef struct
//{
//	int a;//0-3      4
//	char b;//4       1
//	//5
//	short c;//6-7    2
//	short d;//8-9    2
//	//10-11
//}AA_t;
//
////12字节
// 
//int main()
//{
//	printf("%d\n", sizeof(AA_t));
//	return 0;
//}


//2.
//4字节对齐

//struct A
//{
//	int a;//0-3
//	short b;//4-5
//	//6-7
//	int c;//8-11
//	char d;//12
//	//13 14 15
//};//13 --> 16
//
//struct B
//{
//	int a;//0-3
//	short b;//4-5
//	char c;//6
//	//7
//	int d;//8-11
//};//12
//
//int main()
//{
//	printf("%d\n", sizeof(struct A));
//	printf("%d\n", sizeof(struct B));
//	return 0;
//}


//3.
#pragma pack(4)//编译选项，表示4字节对齐平台：vs2013。语言：C语言
int main(int argc, char* argv[])
{
	struct tagTest1
	{
		short a;//0-1
		char d;//2
		//3
		long b;//4-7
		long c;//8-11
	};//12
	struct tagTest2
	{
		long b;//0-3
		short c;//4-5
		char d;//6
		//7
		long a;//8-11
	};//12
	struct tagTest3
	{
		short c;//0-1
		//2-3
		long b;//4-7
		char d;//8
		//9-11
		long a;//12-15
	};//16

	struct tagTest1 stT1;
	struct tagTest2 stT2;
	struct tagTest3 stT3;
	printf("%d %d %d", sizeof(stT1), sizeof(stT2), sizeof(stT3));
	return 0;
}
#pragma pack()