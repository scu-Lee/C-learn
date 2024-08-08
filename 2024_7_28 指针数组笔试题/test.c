#include<stdio.h>
#include<string.h>

//int main()
//{
	//数组名是首元素的地址
	//1.sizeof(数组名) - 数组名表示整个数组
	//2.&数组名 - 数组名表示整个数组的地址

	//整型数组
	//int a[] = { 1,2,3,4 };
	//printf("%d\n", sizeof(a));//16 计算数组总大小 - 单位字节
	//printf("%d\n", sizeof(a + 0));//4/8 这里数组名表示首元素的值，a+0还是首元素地址，地址大小为4/8字节
	//printf("%d\n", sizeof(*a));//4 数组名表示首元素地址，*a就是首元素，大小为4字节
	//printf("%d\n", sizeof(a + 1));//4/8 这里数组名表示首元素的值，a+1第2个元素地址，地址大小为4/8字节
	//printf("%d\n", sizeof(a[1]));
	//printf("%d\n", sizeof(&a));
	//printf("%d\n", sizeof(*&a));
	//printf("%d\n", sizeof(&a + 1));
	//printf("%d\n", sizeof(&a[0]));
	//printf("%d\n", sizeof(&a[0] + 1));

	//字符数组
	//char arr[] = { 'a','b','c','d','e','f' };
	//printf("%d\n", sizeof(arr));
	//printf("%d\n", sizeof(arr + 0));
	//printf("%d\n", sizeof(*arr));
	//printf("%d\n", sizeof(arr[1]));
	//printf("%d\n", sizeof(&arr));
	//printf("%d\n", sizeof(&arr + 1));
	//printf("%d\n", sizeof(&arr[0] + 1));
	//printf("%d\n", strlen(arr));//随机值
	//printf("%d\n", strlen(arr + 0));//随机值
	////printf("%d\n", strlen(*arr));//error
	////printf("%d\n", strlen(arr[1]));//error
	//printf("%d\n", strlen(&arr));//随机值
	//printf("%d\n", strlen(&arr + 1));//随机值 -6
	//printf("%d\n", strlen(&arr[0] + 1));//随机值 -1

	//char arr[] = "abcdef";
	////printf("%d\n", sizeof(arr));//7 sizeof计算数组的大小 abcdef\0
	////printf("%d\n", sizeof(arr + 0));
	////printf("%d\n", sizeof(*arr));
	////printf("%d\n", sizeof(arr[1]));
	////printf("%d\n", sizeof(&arr));
	////printf("%d\n", sizeof(&arr + 1));
	////printf("%d\n", sizeof(&arr[0] + 1));
	//printf("%d\n", strlen(arr));
	//printf("%d\n", strlen(arr + 0));
	////printf("%d\n", strlen(*arr));//error
	////printf("%d\n", strlen(arr[1]));//error
	//printf("%d\n", strlen(&arr));//6 &arr的指针为数组指针 char(*)[7],strlen的指针为字符指针 const char* ，会报警告，不影响运行
	//printf("%d\n", strlen(&arr + 1));//随机值
	//printf("%d\n", strlen(&arr[0] + 1));//随机值 -1

	//char* p = "abcdef";
	//printf("%d\n", sizeof(p));
	//printf("%d\n", sizeof(p + 1));
	//printf("%d\n", sizeof(*p));
	//printf("%d\n", sizeof(p[0]));//1 int arr[10]; arr[0] == *(arr+0) p[0] == *(p+0) == 'a'
	//printf("%d\n", sizeof(&p));
	//printf("%d\n", sizeof(&p + 1));
	//printf("%d\n", sizeof(&p[0] + 1));
	//printf("%d\n", strlen(p));
	//printf("%d\n", strlen(p + 1));
	////printf("%d\n", strlen(*p));//error
	////printf("%d\n", strlen(p[0]));//error
	//printf("%d\n", strlen(&p));//随机值
	//printf("%d\n", strlen(&p + 1));//随机值
	//printf("%d\n", strlen(&p[0] + 1));//5

	//二维数组
	//int a[3][4] = { 0 };
	//printf("%d\n", sizeof(a));
	//printf("%d\n", sizeof(a[0][0]));
	//printf("%d\n", sizeof(a[0]));
	//printf("%d\n", sizeof(a[0] + 1));//4 第一行第二个元素的地址
	//printf("%d\n", sizeof(*(a[0] + 1)));
	//printf("%d\n", sizeof(a + 1));//a为二位数组第一行元素的首地址，+1为第二行元素的地址
	//printf("%d\n", sizeof(*(a + 1)));
	//printf("%d\n", sizeof(&a[0] + 1));//第二行地址 
	//printf("%d\n", sizeof(*(&a[0] + 1)));
	//printf("%d\n", sizeof(*a));//a数首元素地址 - 第一行地址，*a就是第一行，sizeof（*a）就是计算第一行的大小
//	printf("%d\n", sizeof(a[3]));//16 sizeof表示访问a[]同类型大小（如a[0]），不会访问越界部分
//	return 0;
//}


//int main()
//{
//	int a[5] = { 1, 2, 3, 4, 5 };
//	int* ptr = (int*)(&a + 1);
//	printf("%d,%d", *(a + 1), *(ptr - 1));
//	return 0;
//}


//struct Test
//{
//	int Num;
//	char* pcName;
//	short sDate;
//	char cha[2];
//	short sBa[4];
//}* p;
////假设p 的值为0x100000。 如下表表达式的值分别为多少？
////已知，结构体Test类型的变量大小是20个字节
//int main()
//{
//	p = (struct Test*)0x100000;
//	printf("%p\n", p + 0x1);
//	printf("%p\n", (unsigned long)p + 0x1);//%p-打印16进制，不够的位的补0，%x-字母小写不补零，%X-字母大写不补零
//	printf("%p\n", (unsigned int*)p + 0x1);
//	return 0;
//}


//int main()
//{
//	int a[4] = { 1, 2, 3, 4 };
//	int* ptr1 = (int*)(&a + 1);
//	int* ptr2 = (int*)((int)a + 1);
//	printf("%x,%x", ptr1[-1], *ptr2);//ptr1[-1] == *(ptr1+(-1)) == *(ptr1-1)
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int a[3][2] = { (0, 1), (2, 3), (4, 5) };//逗号表达式
//	//int i = 0;
//	//for (i = 0; i < 3; i++)
//	//{
//	//	int j = 0;
//	//	for (j = 0; j < 2; j++)
//	//	{
//	//		printf("%d ", a[i][j]);
//	//	}
//	//	printf("\n");
//	//}
//	int* p;
//	p = a[0];
//	printf("%d\n", p[0]);
//	return 0;
//}


//********difficult
//int main()
//{
//	int a[5][5];
//	int(*p)[4];
//	p = a;
//	printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);//p[4][2] == *(*(p+4)+2)
//	return 0;
//}


//int main()
//{
//	int aa[2][5] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int* ptr1 = (int*)(&aa + 1);
//	int* ptr2 = (int*)(*(aa + 1));//*(aa + 1) == aa[1]
//	printf("%d,%d", *(ptr1 - 1), *(ptr2 - 1));//10,5
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	char* a[] = { "work","at","alibaba" };
//	char** pa = a;
//	pa++;
//	printf("%s\n", *pa);
//	return 0;
//}


//**********difficult
//int main()
//{
//	char* c[] = { "ENTER","NEW","POINT","FIRST" };
//	char** cp[] = { c + 3,c + 2,c + 1,c };
//	char*** cpp = cp;
//	printf("%s\n", **++cpp);//POINT
//	printf("%s\n", *-- * ++cpp + 3);//ER
//	printf("%s\n", *cpp[-2] + 3);//ST
//	printf("%s\n", cpp[-1][-1] + 1);//EW
//	return 0;
//}