#include <stdio.h>

//void test(int arr[])
//{
//	int sz = 0;
//	sz = sizeof(arr) / sizeof(arr[0]);
//	printf("%d\n", sz);
//}
//
//int main()
//{
//	int arr[10] = { 0 };
//	test(arr);
//	return 0;
//}


//int main()
//{
//	char ch = "w";
//	char* pc = &ch;
//	return 0;
//}


//int main()
//{
//	char arr[] = "abcdef";
//	char* pc = arr;
//	printf("%s\n", arr);
//	printf("%s\n", pc);
//	return 0;
//}


//int main()
//{
//	const char* p = "abcdef";//"abcdef"常量字符串
//	//*p = 'w';
//	printf("%c\n", *p);
//	printf("%s\n", p);
//	return 0;
//}


//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "abcdef";
//	const char* p1 = "abcdef";
//	const char* p2 = "abcdef";
//	if (p1 == p2)
//	{
//		printf("hehe\n");
//	}
//	else
//	{
//		printf("haha\n");
//	}
//	if (arr1 == arr2)
//	{
//		printf("hehe\n");
//	}
//	else
//	{
//		printf("haha\n");
//	}
//	return 0;
//}


//int main()
//{
//	int a = 10, b = 20, c = 30, d = 40;
//	int* arr[4] = { &a,&b,&c,&d };
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		printf("%d ", *(arr[i]));
//	}
//	return 0;
//}


//int main()
//{
//	int arr1[] = { 1,2,3,4,5,6 };
//	int arr2[] = { 2,3,4,5,6,7 };
//	int arr3[] = { 3,4,5,6,7,8 };
//	int* parr[] = { arr1,arr2,arr3 };//指针数组
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			printf("%d ", (*parr[i] + j));
//		}
//		printf("\n");
//	}
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int(*p)[10] = &arr;//数组的地址要存起来
//	//上面的p就是数组指针
//	return 0;
//}


//int main()
//{
//	char* arr[5];
//	char* (*pa)[5] = &arr;
//
//	int arr2[10] = { 0 };
//	int(*pa2)[10] = &arr2;
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;
//	//1.
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	//2.
//	int(*pa)[10] = &arr;
//	int j = 0;
//	for (j = 0; j < 10; j++)
//	{
//		printf("%d ", *(*pa + j));//*pa == arr
//	}
//	//3.
//	//int(*pa)[10] = &arr;
//	int k = 0;
//	for (k = 0; k < 10; k++)
//	{
//		printf("%d ", (*pa)[k]);
//	}
//	return 0;
//}


////参数是数组的形式
//void print1(int arr[3][5], int x, int y)
//{
//	int i = 0;
//	for (i = 0; i < x; i++)
//	{
//		int j = 0;
//		for (j = 0; j < y; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//
////参数是指针的形式
//void print2(int(*p)[5], int x, int y)
//{
//	int i = 0;
//	for (i = 0; i < x; i++)
//	{
//		int j = 0;
//		for (j = 0; j < y; j++)
//		{
//			printf("%d ", p[i][j]);
//			//printf("%d ", *(p[i] + j));
//			//printf("%d ", *(*(p + i) + j));
//			//printf("%d ", (*(p + i))[j]);
//		}
//		printf("\n");
//	}
//}
//
//int main()
//{
//	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };
//	print1(arr, 3, 5);
//	print2(arr, 3, 5);
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	int* p = arr;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));
//		printf("%d ", *(arr + i));
//		printf("%d ", p[i]);
//		printf("%d ", arr[i]);//arr[i] == p[i] == *(arr+i) == *(p+i)
//	}
//	return 0;
//}

//int arr[5];//arr是一个5个元素的数组
//int* parr1[10];//parr1是一个数组，数组有10个元素，每个元素的类型是int*，parr1是指针数组
//int(*parr2)[10];//parr2是一个指针，该指针指向了一个数组，数组有10个元素，每个元素类型是int，parr2是数组指针
//int(*parr3[10])[5];//parr3是一个数组，该数组有10个元素，每个元素是一个数组指针，该数组指针指向的数组有5个元
//                   //素，每个元素是int类型


//void test1(int* p)
//{
//
//}
//
//void test2(char* p)
//{
//
//}
//
//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	test1(&a);//ok
//	test1(pa);//ok
//
//	char ch = 'w';
//	char* pc = &ch;
//	test2(&ch);//ok
//	test2(pc);//ok
//	return 0;
//}


//void test(int** p)
//{
//
//}
//
//int main()
//{
//	int* ptr;
//	int** pp = &ptr;
//	test(&ptr);
//	test(pp);
//	int* arr[10];
//	test(arr);//指针数组也可以
//	return 0;
//}


//数组指针 - 指向数组的指针
//函数指针 - 指向函数的指针


//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int arr[10] = { 0 };
//	int(*p)[10] = &arr;
//	printf("%d\n", Add(a, b));
//
//	//&函数名 和 函数名 都是函数的地址
//	printf("%p\n", Add);
//	printf("%p\n", &Add);
//
//	int (*pa)(int, int) = Add;
//	printf("%p\n", pa);
//	printf("%d\n", (*pa)(2, 3));
//	return 0;
//}


//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int (*pa)(int, int) = Add;
//	printf("%d\n", pa(2, 3));
//	printf("%d\n", Add(2, 3));
//	printf("%d\n", (*pa)(2, 3));//三种等价
//	//printf("%d\n", *pa(2, 3));//error
//	return 0;
//}


//void Print(char* str)
//{
//	printf("%s\n", str);
//}
//
//int main()
//{
//	void(*p)(char*) = Print;
//	(*p)("Is this your handbag?");
//	return 0;
//}


//代码1
//(*(void(*)())0)()//把0强制类型转换成：void(*)()函数指针类型 - 0就是一个函数的地址
                   //调用0地址处的该函数
//代码2
//void(*     signal(int, void(*)(int))     )(int);//void(*)(int) - 函数指针；void(*      )(int) - 函数指针
//signal是一个函数声明
//signal函数的参数有两个，一个是整型，一个是函数指针类型，该函数指针的参数类型是int，返回类型是void
//signal函数的返回类型也是一个函数指针，该函数指针的参数类型是int，返回类型是void

//void(*signal(int, void(*)(int)))(int)
//typedef void(*pfun_t)(int);
//pfun_t signal(int, pfun_t);
//typedef unsigned int u_int;


//int Add(int x, int y)
//{
//    int z = 0;
//    z = x + y;
//    return z;
//}
//
//int Sub(int x, int y)
//{
//    int z = 0;
//    z = x - y;
//    return z;
//}
//
//int Mul(int x, int y)
//{
//    int z = 0;
//    z = x * y;
//    return z;
//}
//
//int Div(int x, int y)
//{
//    int z = 0;
//    z = x / y;
//    return z;
//}
//
//int main()
//{
//    //需要一个数组，这个数组能存放4个函数的地址 - 函数指针数组
//    int (*p)(int, int) = Add;//Sub/Mul/Div
//    int(*parr[4])(int, int) = { Add,Sub,Mul,Div };//函数指针数组
//    int i = 0;
//    for (i = 0; i < 4; i++)
//    {
//        printf("%d\n", parr[i](2, 3));//5 -1 6 0
//        //printf("%d\n", (*parr[i])(2, 3));//等价
//    }
//    return 0;
//}


//char* my_strcpy(char* dest, const char* src);
//1.写一个函数指针 pf,能够指向my_strcpy
//2.写一个函数指针数组 pfArr，能够存放4个my_strcpy函数的地址
//1. char* (*pf)(char*, const char*);
//2. char* (*pfArr[4])(char*, const char*);// = { my_strcpy };


//计算器

//void menu()
//{
//    printf("      1.Add      2.Sub      \n");
//    printf("      3.Mul      4.Div      \n");
//    printf("      5.Xor      0.exit     \n");
//}
//
//int Add(int x, int y)
//{
//    int z = 0;
//    z = x + y;
//    return z;
//}
//
//int Sub(int x, int y)
//{
//    int z = 0;
//    z = x - y;
//    return z;
//}
//
//int Mul(int x, int y)
//{
//    int z = 0;
//    z = x * y;
//    return z;
//}
//
//int Div(int x, int y)
//{
//    int z = 0;
//    z = x / y;
//    return z;
//}
//
//int Xor(int x, int y)
//{
//    int z = 0;
//    z = x ^ y;
//    return z;
//}

//第一种：
//int main()
//{
//    int input = 0;
//    int x = 0;
//    int y = 0;
//    do
//    {
//        menu();
//        printf("请选择:>\n");
//        scanf_s("%d", &input);
//        switch (input)
//        {
//        case 1:
//            printf("请输入两个操作数:>");
//            scanf_s("%d%d", &x, &y);
//            printf("%d\n", Add(x, y));
//            break;
//        case 2:
//            printf("请输入两个操作数:>");
//            scanf_s("%d%d", &x, &y);
//            printf("%d\n", Sub(x, y));
//            break;
//        case 3:
//            printf("请输入两个操作数:>");
//            scanf_s("%d%d", &x, &y);
//            printf("%d\n", Mul(x, y));
//            break;
//        case 4:
//            printf("请输入两个操作数:>");
//            scanf_s("%d%d", &x, &y);
//            printf("%d\n", Div(x, y));
//            break;
//        case 5:
//            printf("请输入两个操作数:>");
//            scanf_s("%d%d", &x, &y);
//            printf("%d\n", Xor(x, y));
//            break;
//        case 0:
//            printf("退出\n");
//            break;
//        default:
//            printf("选择错误！\n");
//            break;
//        }
//    } while(input);
//    return 0;
//}

//第二种:
//int main()
//{
//    int input = 0;
//    int x = 0;
//    int y = 0;
//    int(*pfArr[6])(int, int) = { 0,Add,Sub,Mul,Div,Xor };//pfArr是一个函数指针数组 - 转移表
//    do
//    {
//        menu();
//        printf("请选择:>");
//        scanf_s("%d", &input);
//        if (input >= 1 && input <= 5)
//        {
//            printf("请输入两个操作数:>");
//            scanf_s("%d%d", &x, &y);
//            int ret = pfArr[input](x, y);
//            printf("%d\n", ret);
//        }
//        else if (input == 0)
//        {
//            printf("退出\n");
//        }
//        else
//        {
//            printf("输入错误，请重新选择\n");
//        }
//    } while (input);
//    return 0;
//}

//第三种：

//void calc(int(*pf)(int, int))
//{
//    int x = 0;
//    int y = 0;
//    printf("请输入两个操作数:>");
//    scanf_s("%d%d", &x, &y);
//    printf("%d\n", pf(x, y));
//}
//
//int main()
//{
//    int input = 0;
//    do
//    {
//        menu();
//        printf("请选择:>\n");
//        scanf_s("%d", &input);
//        switch (input)
//        {
//        case 1:
//            calc(Add);
//            break;
//        case 2:
//            calc(Sub);
//            break;
//        case 3:
//            calc(Mul);
//            break;
//        case 4:
//            calc(Div);
//            break;
//        case 5:
//            calc(Xor);
//            break;
//        case 0:
//            printf("退出\n");
//            break;
//        default:
//            printf("选择错误！\n");
//            break;
//        }
//    } while(input);
//    return 0;
//}


//int Add(int x, int y)
//{
//    return x + y;
//}
//
//int main()
//{
//    int arr[10] = { 0 };
//    int(*p)[10] = &arr;//取出数组的地址
//
//    int(*pf)(int, int);//函数指针
//    int(*pfArr[4])(int, int);//pfArr是一个数组 - 函数指针的数组
//    int(*(*ppfArr)[4])(int, int) = &pfArr;
//    //ppfArr是一个指向（函数指针数组）的指针
//    //ppfArr是一个数组指针，指针指向的数组有4个元素
//    //指向的数组的每个元素的类型是一个函数指针int(*)(int,int)
//    return 0;
//}


//回调函数
//void Print(char* p)
//{
//    printf("Ki-Fung:%s", p);
//}
//
//void test(void(*p)(char*))
//{
//    printf("Li:what?\n");
//    p("pardon?");
//}
//
//int main()
//{
//    test(Print);
//    return 0;
//}


//int Add(int x, int y)
//{
//    return x + y;
//}
//
//int main()
//{
//    //指针数组
//    int* arr[10];
//    //数组指针
//    int*(*pa)[10] = &arr;
//    //函数指针
//    int(*pAdd)(int, int) = Add;//&Add
//    int sum = (*pAdd)(1, 2);
//    int sum = pAdd(1, 2);
//             //Add(1,2)
//    printf("sum = %d\n", sum);
//    //函数指针的数组
//    int(*pArr[5])(int, int);
//    //指向函数指针数组的指针
//    int(*(*ppArr)[5])(int, int) = &pArr;
//    return 0;
//}


//int main()
//{
//    int a = 10;
//    //int* pa = &a;
//    //char* pc = &a;
//    //char ch = 'w';
//    void* p = &a;
//    //*p = 0;//error
//    //p++;error
//    //p = &ch;
//    //void* 类型的指针可以接收任意类型的地址
//    //void* 类型的指针不可以进行解引用操作
//    //void* 类型的指针不可以进行+-整数的操作
//    return 0;
//}


//冒泡排序，int型
//void bubble_sort(int arr[],int sz)
//{
//    int i = 0;
//    for (i = 0; i < sz - 1; i++)
//    {
//        int j = 0;
//        for (j = 0; j < sz - 1 - i; j++)
//        {
//            if (arr[j] > arr[j + 1])
//            {
//                int tmp = arr[j+1];
//                arr[j + 1] = arr[j];
//                arr[j] = tmp;
//            }
//        }
//    }
//}
//
////struct stu
////{
////    char name[20];
////    short age;
////};
//
//int main()
//{
//    int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
//    int sz = sizeof(arr) / sizeof(arr[0]);
//
//    //struct stu n[3] = { {"zhangsan",22},{"lisi",23},{"wangwu",24} };//int类型冒泡排序排不了
//    //float f[] = { 0.1,0.2,0.3,0.4,0.5 };//int类型冒泡排序排不了
//
//    bubble_sort(arr,sz);
//    int i = 0;
//    for (i = 0; i < 10; i++)
//    {
//        printf("%d ", arr[i]);
//    }
//    return 0;
//}


//冒泡排序，优化后排序任意类型数据

//struct stu
//{
//    char name[20];
//    int age;
//};
//
//int cmp_int(const void* e1, const void* e2)
//{
//    //比较两个整型值
//    return *(int*)e1 - *(int*)e2;//e1-e2为升序排列，e2-e1为降序排列
//}
//
//int cmp_stu_by_age(const void* e1, const void* e2)
//{
//    return ((struct stu*)e1)->age - ((struct stu*)e2)->age;
//}
//
//void swap(char* buf1, char* buf2, int width)
//{
//    int i = 0;
//    for (i = 0; i < width; i++)
//    {
//        char tmp = *buf1;
//        *buf1 = *buf2;
//        *buf2 = tmp;
//        buf1++;
//        buf2++;
//    }
//}
//
//void bubble_sort(void* base, int sz, int width, int(*cmp)(void* e1, void* e2))
//{
//    int i = 0;
//    //趟数
//    for (i = 0; i < sz - 1; i++)
//    {
//        //每一趟比较对数
//        int j = 0;
//        for (j = 0; j < sz - 1 - i; j++)
//        {
//            //两个元素比较
//            if (cmp((char*)base+j*width,(char*)base+(j+1)*width)>0)
//            {
//                //交换
//                swap((char*)base + j * width, (char*)base + (j + 1) * width,width);
//            }
//        }
//    }
//}
//
//void test1()
//{
//    int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
//    int sz = sizeof(arr) / sizeof(arr[0]);
//    bubble_sort(arr, sz,sizeof(arr[0]),cmp_int);
//    int i = 0;
//    for (i = 0; i < sz; i++)
//    {
//        printf("%d ", arr[i]);
//    }
//    printf("\n");
//}
//
//void test2()
//{
//    struct stu mate[3] = { {"zhangsan",22},{"lisi",23},{"wangwu",24} };
//    int sz = sizeof(mate) / sizeof(mate[0]);
//    bubble_sort(mate, sz, sizeof(mate[0]), cmp_stu_by_age);
//    int i = 0;
//    for (i = 0; i < sz; i++)
//    {
//        printf("%s ", mate[i].name);
//        printf("%d ", mate[i].age);
//    }
//    printf("\n");
//}
//
//int main()
//{
//    test1();
//    test2();
//    return 0;
//}


//库函数qsort调用
////void qsort( void *base, size_t num, size_t width, int (__cdecl *compare )(const void *elem1, const void *elem2 ) );
////第一个参数：待排序数组的首元素地址
////第二个参数：待排序数组的元素个数
////第三个参数：待排序数组的每个元素的大小 - 单位是字节
////第四个参数：是函数指针，比较两个元素的所用函数的地址 - 这个函数使用者自己实现
////            函数指针的两个参数是：待比较两个元素的地址


//#include<stdlib.h>
//int cmp_int(const void* e1, const void* e2)
//{
//    return *(int*)e1 - *(int*)e2;//e1-e2为升序排列，e2-e1为降序排列
//}
//
//int main()
//{
//    int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
//    int sz = sizeof(arr) / sizeof(arr[0]);
//    //struct stu n[3] = { {"zhangsan",22},{"lisi",23},{"wangwu",24} };//int类型冒泡排序排不了
//    float f[] = { 0.1,0.2,0.3,0.4,0.5 };//int类型冒泡排序排不了
//    qsort(arr, sz, sizeof(arr[0]), cmp_int);//qsort - 库函数
//    int i = 0;
//    for (i = 0; i < 10; i++)
//    {
//        printf("%d ", arr[i]);
//    }
//    return 0;
//}


//#include<stdlib.h>
//#include<string.h>
//
//int cmp_int(const void* e1, const void* e2)
//{
//    return *(int*)e1 - *(int*)e2;//e1-e2为升序排列，e2-e1为降序排列
//}
//
//void test1()
//{
//    int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
//    int sz = sizeof(arr) / sizeof(arr[0]);
//    qsort(arr, sz, sizeof(arr[0]), cmp_int);
//    int i = 0;
//    for (i = 0; i < 10; i++)
//    {
//        printf("%d ", arr[i]);
//    }
//    printf("\n");
//}
//
//int cmp_float(const void* e1, const void* e2)
//{
//    if (*(float*)e1 == *(float*)e2)
//        return 0;
//    else if (*(float*)e1 < *(float*)e2)
//        return -1;
//    else
//        return 1;
//    //return ((int)(*(float*)e1 - *(float*)e2));//也能运行return (int)(*(float*)e1 - *(float*)e2);这里强制类型转换丢失精度，比如5.1，5.3，5.2不能排序
//}
//
//void test2()
//{
//    float f[] = { 2.0,1.5f,7.8f,5.9f,5.6f,5.2f,9.9f };//这里如果float定义为2.0，3.0等不会报错，但是2.2，3.5这种会报错，浮点数默认为double类型，float类型写为2.2f，3.5f不会报错
//    int sz = sizeof(f) / sizeof(f[0]);
//    qsort(f, sz, sizeof(f[0]), cmp_float);
//    int i = 0;
//    for (i = 0; i < sz; i++)
//    {
//        printf("%f ", f[i]);
//    }
//    printf("\n");
//}
//
//
//struct stu
//{
//    char name[20];
//    int age;
//};//这个位置不会报错
//
//int cmp_stu_by_age(const void* e1, const void* e2)
//{
//    return ((struct stu*)e1)->age - ((struct stu*)e2)->age;
//}
//
//void test3()
//{
//    struct stu mate[3] = { {"zhangsan",26},{"lisi",28},{"wangwu",24} };
//    int sz = sizeof(mate) / sizeof(mate[0]);
//    qsort(mate, sz, sizeof(mate[0]), cmp_stu_by_age);//疑问：为什么F10直接跳过qsort但是监视器会显示排序后的mate[]，但是F11会进入qsort在return循环得到几次返回值后，后面的程序不执行直接跳出，但是跳出后会在屏幕上打印出后续的程序内容
//    int i = 0;
//    for (i = 0; i < sz; i++)
//    {
//        printf("%s ", mate[i].name);
//        printf("%d\n", mate[i].age);
//    }
//    printf("\n");
//}
//
//int cmp_stu_by_name(const void* e1, const void* e2)
//{
//    //比较名字就是比较字符串
//    //字符串比较不能直接用><=来比较，应该用strcmp函数
//    return strcmp(((struct stu*)e1)->name,((struct stu*)e2)->name);
//}
//
//void test4()
//{
//    struct stu mate[3] = { {"zhangsan",22},{"lisi",23},{"wangwu",24} };
//    int sz = sizeof(mate) / sizeof(mate[0]);
//    qsort(mate, sz, sizeof(mate[0]), cmp_stu_by_name);
//    int i = 0;
//    for (i = 0; i < sz; i++)
//    {
//        printf("%s ", mate[i].name);
//        printf("%d\n", mate[i].age);
//    }
//    printf("\n");
//}
//
////struct stu
////{
////    char name[20];
////    short age;
////};//结构体函数不能定义在主函数中;在调用test3、4时，结构体函数在这个位置会报错
//
//int main()
//{
//    test1();
//    printf("\n");
//    test2();
//    printf("\n");
//    test3();
//    printf("\n");
//    test4();
//    printf("\n");
//    return 0;
//}