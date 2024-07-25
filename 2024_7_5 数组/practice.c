#include<stdio.h>
//#include<string.h>

//int main()
//{
//	//创建一个数组-存放整型-10个
//	//int arr1[10] = { 1,2,3 };//不完全初始化。剩下的元素默认初始化为0
//	//char arr2[5] = { 'a',98 };//字符'b'的ASCII码值为98
//	//char arr3[5] = "ab";//“”ok
//	char arr4[] = "abcdef";//[]未定义字符个数，根据后边实际字符个数自动确定为7个
//	printf("%d\n", sizeof(arr4));
//	//sizeof计算arr4所占能存空间的大小
//	//7个元素-char*7 7*1=7
//	printf("%d\n", strlen(arr4));
//	//strlen求字符串的长度-'\0'之前的字符个数
//	//[a b c d e f \0]
//	//6
//	//int n = 5;
//	//char ch[n];//error
//	return 0;
//}

//1.strlen和sizeof没什么关联
//2.strlen是求字符串长度的-只能针对字符串求长度-库函数-使用得引头文件
//3.sizeof计算变量、数组、类型的大小-单位是字节-操作符


//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("&arr[%d] = %p\n", i, &arr[i]);//%p以地址形式打印
//	}
//	return 0;
//}


//int main()
//{
//	int arr[3][4] = { {1,2,3},{4,5} };
//	//1 2 3 0
//	//4 5 0 0
//	//0 0 0 0
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	//char arr[5][6];
//	//int arr[] = { 1,2,3,4 };
//	//int arr[][5] = { {1,2,3,9,4},{5,1,3,4,7} };
//	return 0;
//}

//int main()
//{
//	int arr[3][4] = { {1,2,3},{4,5} };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)
//		{
//			printf("&arr[%d][%d]= %p\n", i, j, &arr[i][j]);
//		}
//	}
//	return 0;
//}


//冒泡排序法

//void bubble_sort(int arr[], int sz)
//{
//	//确定冒泡排序趟数
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int flag = 1;//假设这一趟要排序的数据已有序
//		//每一趟冒泡排序
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//				flag = 0;//本趟排序的数据其实不完全有序
//			}
//		}
//		if (flag == 1)
//		{
//			break;
//		}
//	}
//}
//
//int main()
//{
//	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	//对arr排序，排成升序
//	//arr是数组，我们对数组arr进行传参，实际上传过去的是数组arr首元素的地址 &arr[0]
//	bubble_sort(arr, sz);//冒泡排序函数
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


//int main()
//{
//	int arr[] = { 12,45,4,6,77,9 };
//	printf("%p\n", arr);
//	printf("%p\n", arr + 1);
//	printf("%p\n", &arr[0]);
//	printf("%p\n", &arr[0] + 1);
//	printf("%p\n", &arr);
//	printf("%p\n", &arr + 1);//注意区别

//	//int sz=sizeof(arr)/sizeof(arr[0]);
//	//1.sizeof(数组名)-数组名表示整个数组，sizeof(数组名)计算的是整个数组的大小，单位是字节
//	//2.&数组名，数组名代表整个数组，&数组名，取出的是整个数组的地址
//
//	//printf("%p\n", arr);
//	//printf("%p\n", &arr[0]);
//	//printf("%d\n", *arr);//*解引用操作符-返回指针指向的对象的值-12
////	return 0;
//}


//找出数组中只出现一次的数
//int main()
//{
//	int arr[] = { 1,2,3,4,1,2,3,4 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < sz; i++)
//	{
//		j = j ^ arr[i];
//	}
//	printf("单身狗：%d\n", j);
//	return 0;
//}
//思考：如果没有只出现一次的数字或者有多个只出现一次的数字呢？


//创建一个整型数组，完成对数组的操作
//1.实现函数Init（）初始化数组为全零
//2.实现Print（）打印数组的每个元素
//3.实现Reverse（）函数完成数组元素的逆置
void Init(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		arr[i] = 0;
		printf("%d ", arr[i]);
	}
}

void Print(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}

void Reverse(int arr[], int sz)
{
	int left = 0;
	int right = sz-1;
	int tmp = arr[left];
	while (left < right)
	{
		int tmp = arr[left];
		arr[left] = arr[right];
		arr[right] = tmp;
		left++;
		right--;
	}
}
int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	Print(arr, sz);
	//Init(arr, sz);
	printf("\n");
	Reverse(arr, sz);
	Print(arr, sz);
	return 0;
}


//将数组A中的内容和数组B中的内容进行交换（数组一样大）
//int main()
//{
//	int A[] = { 1,3,5,7,9 };
//	int B[] = { 2,4,6,8,0 };
//	int tmp = 0;
//	int sz = sizeof(A) / sizeof(A[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		tmp = A[i];
//		A[i] = B[i];
//		B[i] = tmp;
//		printf("%d %d\n", A[i], B[i]);
//	}
//	return 0;
//}


//下面代码输出的结果是
//int main()
//{
//	int arr[] = { 1,2,3,4,5 };
//	short* p = (short*)arr;//(short*)指针强制类型转换
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		*(p + i) = 0;
//	}
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


//求代码结果
//#include<stdio.h>
//int i;//i使全局变量，不初始化默认为0
//int main()
//{
//	i--;
//	if (i > sizeof(i))//sizeof（）- 计算变量/类型所占内存的大小 >=0 无符号数；无符号数和整数比较i（-1）被默认为无符号数
//	{
//		printf(">\n");
//	}
//	else
//	{
//		printf("<\n");
//	}
//	return 0;
//}


//求代码结果
//int main()
//{
//	int a, b, c;
//	a = 5;
//	c = ++a;
//	b = ++c, c++, ++a, a++;
//	b += a++ + c;
//	printf("a=%d b=%d c=%d\n", a, b, c);
//	return 0;
//}