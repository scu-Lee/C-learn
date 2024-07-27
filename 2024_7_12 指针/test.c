#include<stdio.h>

//int main()
//{
//	int a = 10;
//	int* p = &a;//p为指针变量，指针变量里面存的地址，即指针就是地址;int* p也可以写为int *p
//	printf("%d\n", *p);
//	return 0;
//}

//int main()
//{
//	//printf("%d\n", sizeof(int*));
//	//printf("%d\n", sizeof(char*));
//	//printf("%d\n", sizeof(short*));
//	//printf("%d\n", sizeof(double*));//运行结果都为4，那不同指针类型有什么意义呢？
//
//	int a = 0x11223344;
//	//int* pa = &a;
//	//*pa = 0;
//
//	//char* pb = &a;
//	//*pb = 0;
//
//	//指针类型决定了指针进行解引用操作的时候，能够访问空间的大小
//	//int* p    : *p能访问4个字节的大小
//	//char* p   : *p能访问1个字节的大小
//	//double* p : *p能访问8个字节的大小
//	return 0;
//}

//int main()
//{
//	int a = 0x11223344;
//	int* pa = &a;
//	char* pb = &a;
//	printf("%p\n", pa);
//	printf("%p\n", pa + 1);
//	printf("%p\n", pb);
//	printf("%p\n", pb + 1);//指针类型决定了指针一步走多远（指针的步长）	
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	//int* p = arr;//数组名-首元素地址
//	char* p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = 1;
//	}
//	return 0;
//}

//int main()
//{
//	//int a;//局部变量不初始化，默认是随机值
//	int* p;//局部指针不初始化，就被初始化为随机值
//	*p = 20;
//	return 0;
//}

//int main()
//{
//	int* p = 5;//该行代码不准确，指针变量必须被初始化为一个有效的内存地址，而不是一个整数值；改为：int a=10; int* p=&a;
//	*p = 20;
//	return 0;
//}

//指针指向的空间释放--不太明白
//int* test()
//{
//	int a = 10;
//	return &a;
//}
//int main()
//{
//	int* p = test();
//	*p = 20;
//	return 0;
//}

//int main()
//{
//	int b = 0;
//	int a = 10;
//	int* pa = &a;//初始化
//	int* p = NULL;//NULL - 用来初始化指针，给指针赋值
//	int a = 10;
//	int* pa = &a;
//	*pa = 20;
//
//	pa = NULL;
//
//	if (pa != 0)
//	{
//
//	}
//
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int* p = arr;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *p);
//		p = p + 1;//或者 p++;
//	}
//	return 0;
//}

//int my_strlen(char* str)
//{
//	char* start = str;
//	char* end = str;
//	while (*end != '\0')
//	{
//		end++;
//	}
//	return end - start;
//}
//
//int main()
//{
//	//strlen求字符串长度
//	//递归 - 模拟实现了strlen - 计数器的方式1，递归的方式2
//	char arr[] = "Mercedes Benz";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	printf("%p\n", arr);//地址 - 首元素地址
//	printf("%p\n", arr+1);
//
//	printf("%p\n", &arr[0]);
//	printf("%p\n", &arr[0]+1);
//
//	printf("%p\n", &arr);
//	printf("%p\n", &arr+1);
//	//1.&arr - &数组名 - 数组名不是首元素地址 - 数组名表示整个数组 - &数组名：取出的是整个数组的地址
//	//2.sizeof(arr) - sizeof(数组名) - 数组名表示的整个数组 - sizeof(数组名)计算的是整个数组的大小
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = i;
//		printf("%d ", *(p + i));
//	}
//	//for (i = 0; i < 10; i++)
//	//	printf("%d ", *(p + i));
//	//for (i = 0; i < 10; i++)
//	//	printf("%p === %p\n", p + i, &arr[i]);
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int * pa = &a;
//	int* * ppa = &pa;//ppa是二级指针
//	**ppa = 20;
//	printf("%d\n", **ppa);
//	printf("%d\n", a);
//	//int** * pppa = &ppa;//pppa是三级指针
//	return 0;
//}

//指针数组 - 指针 - 存放指针的数组
//数组指针 - 数组

//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	int* pa = &a;
//	int* pb = &b;
//	int* pc = &c;
//	//整型数组 - 数组
//	//字符数组 - 字符
//	//指针数组 - 指针
//	//int arr[10];
//	int* arr2[3] = { &a,&b,&c };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		printf("%d ", *(arr2[i]));
//	}
//	return 0;
//}