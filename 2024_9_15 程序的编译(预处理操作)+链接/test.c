#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//extern int Add(int x, int y);
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int arr[10] = { 0 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	int c = Add(a, b);
//	printf("%d\n", c);
//	return 0;
//}


//预定义符号

//int main()
//{
//	//printf("%s\n", __FILE__);
//	//printf("%d\n", __LINE__);
//	//printf("%s\n", __DATE__);
//	//printf("%s\n", __TIME__);
//
//	//写日志文件
//	int i = 0;
//	int arr[10] = { 0 };
//	FILE* pf = fopen("log.txt", "w");
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = i;
//		fprintf(pf, "file:%s line:%d date:%s time:%s i=%d\n", __FILE__, __LINE__, __DATE__, __TIME__, i);
//		printf("%s\n", __FUNCTION__);
//	}
//	fclose(pf);
//	pf = NULL;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}

//int main()
//{
//	printf("%d\n", __STDC__);//vs对此预定义符号不满足ANSI C
//	return 0;
//}


//宏

//#define SQUARE(X) (X)*(X)
//
//int main()
//{
//	int ret = SQUARE(5);
//	//int ret =5 * 5;
//	printf("%d\n", ret);
//
//    ret = SQUARE(5 + 1);//宏的参数是替换进去的
//	printf("%d\n", ret);
//	return 0;
//}


//#define DOUBLE(X) ((X)+(X))
//
//int main()
//{
//	int a = 5;
//	int ret = 10 * DOUBLE(a);
//	printf("%d\n", ret);
//	return 0;
//}


//void print(int x)
//{
//	printf("the value of a is %d\n", x);
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//printf("the value of a is %d\n", a);
//	print(a);
//	print(b);
//	return 0;
//}


//#define PRINT(X) printf("the value of " #X " is %d\n",X)
//
//int main()
//{
//	//printf("hello world\n");
//	//printf("hello " "world\n");
//	//printf("hel" "lo " "world\n");
//
//	int a = 10;
//	int b = 20;
//	PRINT(a);
//	//printf("the value of ""a"" is %d\n", a);
//	PRINT(b);
//	//printf("the value of ""b"" is %d\n", b);
//	return 0;
//}


//#define CAT(X,Y) X##Y
//
//int main()
//{
//	int sculee = 2024;
//	printf("%d\n", CAT(scu, lee));
//	//printf("%d\n", scu##lee);
//	//printf("%d\n", sculee);
//	return 0;
//}


//#define MAX(X,Y) ((X)>(Y)?(X):(Y))
//
//int main()
//{
//	int a = 10;
//	int b = 11;
//	int max = MAX(a++, b++);
//	//int max = ((a++) > (b++) ? (a++) : (b++));
//	printf("%d\n", max);//不要写有副作用的宏
//	printf("%d\n", a);
//	printf("%d\n", b);
//	return 0;
//}


//#define SIZEOF(TYPE) sizeof(TYPE)
//
//int main()
//{
//	int ret = SIZEOF(int);//宏可以传类型
//	//int ret = sizeof(int);
//	printf("%d\n", ret);
//	return 0;
//}


//#define MALLOC(num,type) (type*)malloc(num*sizeof(type))
//
//int main()
//{
//	int* p = (int*)malloc(10 * sizeof(int));
//	int* p = MALLOC(10, int);
//	return 0;
//}


//#define MAX 100
//
//int main()
//{
//	printf("%d\n", MAX);
//#undef MAX//移除一个宏定义
//	printf("%d\n", MAX);
//	return 0;
//}


//条件编译指令

//#define DEBUG///不定义就不会执行中间的语句
//
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,0 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = 0;
//#ifdef DEBUG
//		printf("%d ", arr[i]);
//#endif
//	}
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,0 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = 0;
//#if 1-1//if 常量表达式  常量表达式为真就编译，为假不编译
//		printf("%d ", arr[i]);
//#endif
//	}
//	return 0;
//}


//int main()
//{
//#if 1==2
//	printf("哈哈\n");//谁成立执行谁
//#elif 1==1
//	printf("嘿嘿\n");
//#else
//	printf("嘻嘻\n");
//#endif
//	return 0;
//}


#define DEBUG 0

int main()
{
#if defined(DEBUG)
	printf("haha\n");
#endif
//两种写法一样
#ifdef DEBUG
	printf("haha\n");
#endif

//对立的写法
#if !defined(DEBUG)
	printf("haha\n");
#endif

#ifndef DEBUG
	printf("haha\n");
#endif
	return 0;
}