#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

//struct S
//{
//	char name[20];
//	int age;
//};
//
//int main()
//{
//	int n = 0;
//	scanf_s("%d", &n);
//	struct S arr[50];//50个struct S 类型的数据
//	//30不够
//	//60浪费
//	return 0;
//}

//C语言是可以创建变长数组的 - C99中增加了

//malloc

#include <stdlib.h>
#include <string.h>
#include <errno.h>

//int main()
//{
//	//向内存申请10个整型的空间
//	int* p = (int*)malloc(10 * sizeof(int));//INT_MAX / 10*sizeof(int) / size为0标准未定义，取决于编译器
//	if (p == NULL)
//	{
//		//打印错误原因的一个方式
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		//正常使用
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			*(p + i) = i;
//			printf("%d ", *(p + i));
//		}
//	}
//	//当动态申请的空间不再使用的时候，就应该还给操作系统
//	free(p);//free函数用来释放动态开辟的空间  /  但是指针值不会改变
//	p = NULL;
//	return 0;
//}


//calloc

//int main()
//{
//	//malloc(10 * sizeof(int))
//	int* p = (int*)calloc(10, sizeof(int));//calloc开辟初始化为0的空间，malloc开辟未初始化的空间
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ", *(p + i));
//		}
//	}
//	//释放空间
//	free(p);
//	p = NULL;
//	return 0;
//}


//realloc
//调整动态开辟内存空间的大小

//int main()
//{
//	int* p = (int*)malloc(20);//20字节
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		int i = 0;
//		for (i = 0; i < 5; i++)
//		{
//			*(p + i) = i;
//		}
//	}
//	//使用malloc开辟20字节的空间不够使用，需要40字节的空间，可用realloc来调整动态开辟的内存
//	//realloc使用注意事项：
//	//1.如果p指向的空间之后有足够的内存空间可以增加，则直接追加，后返回p
//	//2.如果p指向的空间之后没有足够的内存空间可以增加，则realloc函数会重新找一个新的内存区域开辟
//	//  一块满足需求的空间，并且把原来内存中的数据拷贝回来，释放旧的内存空间，最后返回新开辟的内存地址
//	//3.得用一个新的变量来接受realloc函数的返回值
//	int* ptr = realloc(p, INT_MAX);
//	if (ptr != NULL)
//	{
//		p = ptr;
//		int i = 0;
//		for (i = 5; i < 10; i++)
//		{
//			*(p + i) = i;
//		}
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ", *(p + i));
//		}
//	}
//	//释放内存
//	free(p);
//	p = NULL;
//	return 0;
//}


//int main()
//{
//	int* p = (int*)malloc(40);
//	if (p == NULL)
//	{
//		return 0;
//	}
//	int* p2 = realloc(p, 80);
//	if (p2 != NULL)
//	{
//		p = p2;
//	}
//
//	//int* p = realloc(NULL, 40);//malloc(40)
//	return 0;
//}


#include <windows.h>
//int main()
//{
//	//1.对NULL进行解引用操作
//	//int* p = (int*)malloc(40);
//	////玩意malloc失败了，p就被赋值为NULL
//	//*p = 0;//error
//	//int i = 0;
//	//for (i = 0; i < 10; i++)
//	//{
//	//	*(p + i) = i;
//	//}
//	//free(p);
//	//p = NULL;
//
//	//2.对动态开辟内存的越界访问
//	//int* p = (int*)malloc(5 * sizeof(int));
//	//if (p == NULL)
//	//{
//	//	return 0;
//	//}
//	//else
//	//{
//	//	int i = 0;
//	//  //越界访问
//	//	for (i = 0; i < 10; i++)//10
//	//	{
//	//		*(p + i) = i;
//	//	}
//	//}
//	//free(p);
//	//p = NULL;
//
//	//3.对动态开辟内存的free
//	//int a = 10;
//	//int* p = &a;
//	//*p = 20;
//	//free(p);
//	//p = NULL;
//
//	//4.使用free释放动态开辟内存的一部分
//	//int* p = (int*)malloc(40);
//	//if (p == NULL)
//	//{
//	//	return 0;
//	//}
//	//int i = 0;
//	//for (i = 0; i < 5; i++)
//	//{
//	//	*p++ = i;
//	//}
//	////回收空间
//	////使用free释放动态开辟内存的一部分,p已经变了
//	//free(p);
//	//p = NULL;
//
//	//5.对同一块动态内存的多次释放
//	//int* p = (int*)malloc(40);
//	//if (p == NULL)
//	//{
//	//	return 0;
//	//}
//	////使用
//	////释放
//	//free(p);
//	////...//写为p = NULL可避免此问题
//	//free(p);
//
//	//6.动态开辟内存忘记释放(内存泄漏)
//	//while (1)
//	//{
//	//	malloc(1);
//	//}
//	return 0;
//}



//题目1：

//以下代码存在的问题
//1.运行代码会出现崩溃的现象
//2.程序存在内存泄露的问题
// str以值传递的形式给p，p是GrtMemory函数的形参，只能函数内部有效,等GetMemory
// 函数返回后，动态开辟内存尚未释放并且无法找到，所以会造成内存泄露

//void GetMemory(char* p)
//{
//	p = (char*)malloc(100);
//}
//
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(str);//传值
//	strcpy(str, "hello world");
//	printf(str);
//}
//
//int main()
//{
//	Test();
//
////	char* str = "abcdef";
////	printf("%s\n", str);
////	printf(str);
////	printf("abcdef");
//
//	return 0;
//}

//改正1:
//void GetMemory(char** p)
//{
//	*p = (char*)malloc(100);
//}
//
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(&str);//传址
//	strcpy(str, "hello world");
//	printf(str);
//	free(str);
//	str = NULL;
//}
//
//int main()
//{
//	Test();
//	return 0;
//}

//改正2:
//char* GetMemory(char* p)
//{
//	p = (char*)malloc(100);
//	return p;
//}
//
//void Test(void)
//{
//	char* str = NULL;
//	str = GetMemory(str);//传值
//	strcpy(str, "hello world");
//	printf(str);
//	free(str);
//	str = NULL;
//}
//
//int main()
//{
//	Test();
//	return 0;
//}


//题目2：

//char* GetMemory(void)
//{
//	char p[] = "abcdef";
//	return p;//返回栈空间地址，出函数p数组已经被销毁了
//}
//
//void Test(void)
//{
//	char* str = NULL;
//	str = GetMemory();
//	printf(str);//非法访问内存
//}
//
//int main()
//{
//	Test();
//	return 0;
//}

//以下可行

//1.
//int* Test(void)
//{
//	static int a = 10;//静态区 - 此时用static修饰，生命周期延长，放在在静态区
//	//int a = 10;//栈区
//	return &a;
//}
//
//int main()
//{
//	int* p = Test();
//	*p = 20;
//	printf("%d\n", *p);
//	return 0;
//}

//2.
//int* test()
//{
//	int* ptr = malloc(100);//malloc开辟的空间在堆区，只能通过free释放
//	return ptr;
//}
//
//int main()
//{
//	int* p = test();
//	return 0;
//}


//题目3：

//void GetMemory(char** p, int num)
//{
//	*p = (char*)malloc(num);
//}
//
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(&str, 100);
//	strcpy(str, "hello");
//	printf(str);//内存泄露，没有释放动态内存开辟的空间
//	//改
//	free(str);
//	str = NULL;
//}
//
//int main()
//{
//	Test();
//	return 0;
//}


//题目4：

//void Test(void)
//{
//	char* str = (char*)malloc(100);
//	strcpy(str, "hello");
//	free(str);//free释放str指向的空间后，并不会把str置为NULL
//	//改
//	str = NULL;
//	if (str != NULL)
//	{
//		strcpy(str, "world");
//		printf(str);//非法访问内存
//	}
//}
//
//int main()
//{
//	Test();
//	return 0;
//}


//柔性数组

//struct S
//{
//	int n;
//	int arr[];//未知大小的 - 柔性数组成员 - 数组的大小是可以调整的
//};

//struct S
//{
//	int n;
//	int arr[0];//未知大小的
//};
//
//int main()
//{
//	//struct S s;
//	//printf("%d\n", sizeof(s));//4
//	struct S* ps = (struct S*)malloc(sizeof(struct S) + 5 * sizeof(int));
//	ps->n = 100;
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		ps->arr[i] = i;//0,1,2,3,4
//	}
//	struct S* ptr = realloc(ps, 44);
//	if (ptr != NULL)
//	{
//		ps = ptr;
//	}
//	for (i = 5; i < 10; i++)
//	{
//		ps->arr[i] = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", ps->arr[i]);
//	}
//	//释放
//	free(ps);
//	ps = NULL;
//	return 0;
//}


//struct S
//{
//	int n;
//	int* arr;
//};
//
//int main()
//{
//	struct S* ps = (struct S*)malloc(sizeof(struct S));
//	ps->arr = malloc(5 * sizeof(int));
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		ps->arr[i] = i;
//	}
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", ps->arr[i]);
//	}
//	//调整大小
//	int* ptr = realloc(ps->arr, 10 * sizeof(int));
//	if (ptr != NULL)
//	{
//		ps->arr = ptr;
//	}
//	for (i = 5; i < 10; i++)
//	{
//		ps->arr[i] = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", ps->arr[i]);
//	}
//	//释放内存
//	free(ps->arr);
//	ps->arr = NULL;
//	free(ps);
//	ps = NULL;
//	return 0;
//}