#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//运行结果
//int main()
//{
//	unsigned long pulArray[] = { 6,7,8,9,10 };
//	unsigned long* pulPtr;
//	pulPtr = pulArray;
//	*(pulPtr + 3) += 3;
//	printf("%d,%d\n", *pulPtr, *(pulPtr + 3));
//	return 0;
//}


//逆序字符串
//#include<string.h>
//#include<assert.h>
//
//void reverse(char* p)
//{
//	assert(p);
//	int len = strlen(p);
//	char* left = p;
//	char* right = p + len - 1;
//	while (left < right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//
//int main()
//{
//	char arr[100] = { 0 };
//	scanf_s("%s", arr, 100);//查资料表示：vs2019需要额外指定参数，表示输入字符串数组的大小，这周输入方式如mercedes benz，空格后字符被忽略
//	//gets(arr);//读取一行，获取整行字符，有空格也可以
//	reverse(arr);
//	printf("逆序后的字符串：%s\n", arr);
//	return 0;
//}


//计算求和Sn=a+aa+aaa+aaaa+aaaaa的前5项之和，其中a是一个数字
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf_s("%d%d", &a, &b);
//	int i = 0;
//	int ret = 0;
//	int sum = 0;
//	for (i = 0; i < b; i++)
//	{
//		ret = ret * 10 + a;
//		sum += ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}


//求出0-10000之间的水仙花数（153=1^3+5^3+3^3）
//#include<math.h>
//int main()
//{
//	int i = 0;
//	for (i = 0; i <= 100000; i++)
//	{
//		//1.计算i的位数 - count位数
//		int tmp = i;
//		int count = 1;
//		int sum = 0;
//		while (tmp /= 10)
//		{
//			count++;
//		}
//		//2.计算i的每一位的count次方之和sum
//		tmp = i;
//		while (tmp)
//		{
//			sum += pow(tmp % 10, count);
//			tmp /= 10;
//		}
//		//3.比较i，sum是否相等
//		if (i == sum)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}


//输出如下图案
//      *
//     ***  
//    *****
//   *******
//  *********
// ***********
//*************
// ***********
//  *********
//   *******
//    *****
//     *** 
//      *
//int main()
//{
//	int n = 0;
//	scanf_s("%d", &n);
//	//打印上半部分
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		int j = 0;
//		//打印空格
//		for (j = 0; j < n-1-i; j++)
//		{
//			printf(" ");
//		}
//		//打印*
//		for (j = 0; j < 2 * i + 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	//打印下半部分
//	for (i = 0; i < n - 1; i++)
//	{
//		int j = 0;
//		//打印空格
//		for (j = 0; j <= i; j++)
//		{
//			printf(" ");
//		}
//		//打印*
//		for (j = 0; j < 2 * (n - i) - 3; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}


//不能放在括号里的是B
//struct S
//{
//	int a;
//	int b;
//};
//
//int main()
//{
//	struct S a, * p = &a;
//	a.a = 99;
//	printf("%d\n",_____ );
//	return 0;
//}

//A. a.a
//B. *p.a//.优先级高于*，需要（）
//C. p->a
//D. (*p).a


//喝汽水问题，汽水1元1瓶，2个空瓶换1瓶，20元能喝多少瓶汽水
//int main()
//{
//	int money = 0;
//	scanf_s("%d", &money);
//	int total = 0;
//	int empty = 0;
//	if (money == 0)
//		total = 0;
//	else
//		total = 2 * money - 1;
//
//	//total = money;
//	//empty = money;
//	//while (empty >= 2)
//	//{
//	//	total += empty / 2;
//	//	empty = empty / 2 + empty % 2;
//	//}
//	printf("total=%d\n", total);
//	return 0;
//}


//实现一个数组内的数，奇数在前，偶数在后
//void move(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left < right)
//	{
//		//从左边找偶数
//		while ((left < right) && (arr[left] % 2 == 1))
//		{
//			left++;
//		}
//		//从右边找奇数
//		while ((left < right) && (arr[right] % 2 == 0))
//		{
//			right--;
//		}
//		if (left < right)
//		{
//			int tmp = arr[right];
//			arr[right] = arr[left];
//			arr[left] = tmp;
//		}
//    }
//}
//void print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	move(arr, sz);
//	print(arr, sz);
//	return 0;
//}


//大端模式b输出是00，本编译器为小端存储，输出为0x34==52
//int main()
//{
//	unsigned int a = 0x1234;
//	unsigned char b = *(unsigned char*)&a;
//	printf("%d\n", b);
//	return 0;
//}


//以下程序运行结果是
//#include<string.h>
//int main()
//{
//	char a[1000] = { 0 };
//	int i = 0;
//	for (i = 0; i < 1000; i++)
//	{
//		a[i] = -1 - i;
//	}
//	//-1 -2 -3 ... -127 -128 127 126 125 ... 3 2 1 0 -1 -2 ...
//	//-2 -1 0 1 2 3 ... 125 126 127 -128 -127 ... -3 -2 -1 ...
//	printf("%d\n", strlen(a));//255
//	return 0;
//}


//打印杨辉三角
//      1        1
//     1 1       1 1 
//    1 2 1      1 2 1
//   1 3 3 1     1 3 3 1
//  1 4 6 4 1    1 4 6 4 1
//int main()
//{
//	int arr[10][10] = { 0 };
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 10; i++)
//	{
//		for (j = 0; j < 10; j++)
//		{
//			if (j == 0)
//			{
//				arr[i][j] = 1;//=写成==，第一列为0
//			}
//			if (i == j)
//			{
//				arr[i][j] = 1;
//			}
//			if (i >= 2 && j >= 1)
//			{
//				arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
//			}
//		}
//	}
//	for (i = 0; i < 10; i++)
//	{
//		for (j = 0; j < i; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}


//猜凶手，以下4个人有3个人说了真话，1个人说的假话
//A说：不是我
//B说：是C
//C说：是D
//D说：C在胡说
//int main()
//{
//	int killer = 0;
//	for (killer = 'A'; killer <= 'D'; killer++)
//	{
//		if ((killer != 'A') + (killer == 'C') + (killer == 'D') + (killer != 'D') == 3)
//		{
//			printf("killer=%c\n", killer);
//		}
//	}
//	return 0;
//}


//赛马问题：有36匹马，6个跑道，没有计时器，请赛马确定，36匹马中的前三名。
//请问最少比赛几次？  8次
//赛马问题：有25匹马，5个跑道，没有计时器，请赛马确定，25匹马中的前三名。
//请问最少比赛几次？  ?次

//烧香问题：有一种香，材质不均匀，但是每一根香燃烧完恰好是1个小时
//          给你两根香，帮我确定一个15分钟的时间段
//第一根从两端点燃，第二根点燃一端，第一根燃完30min，此时点燃第二根另一端，燃完需要15min。


//5位运动员的比赛预测结果为如下，每位选手都说对了一半，编程确定名次
//A选手说：B第二，我第三
//B选手说：我第二，E第四
//C选手说：我第一，D第二
//D选手说：C最后，我第三
//E选手说：我第四，A第一
//int main()
//{
//	int a, b, c, d, e = 0;
//	for (a = 0; a <= 5; a++)
//	{
//		for (b = 0; b <= 5; b++)
//		{
//			for (c = 0; c <= 5; c++)
//			{
//				for (d = 0; d <= 5; d++)
//				{
//					for (e = 0; e <= 5; e++)
//					{
//						if (((b == 2) + (a == 3) == 1) &&
//							((b == 2) + (e == 4) == 1) &&
//							((c == 1) + (d == 2) == 1) &&
//							((c == 5) + (d == 3) == 1) &&
//							((e == 4) + (a == 1) == 1))
//						{
//							if (a * b * c * d * e == 120)
//							{
//								printf("a=%d b=%d c=%d d=%d e=%d\n", a, b, c, d, e);
//							}
//						}
//					}
//				}
//			}
//		}
//	}
//	return 0;
//}


//int* fun(int a,int b);//函数声明
//int(*) fun(int a,int b);//error
//int(*fun)(int a,int b);//函数指针
//(int*) fun(int a,int b);//函数声明


//下列代码哪个函数参数设计正确? C
//int arr[3][5] = { 1,2,3,4,5,6,7,8,9,10 };
//print_arr(arr, 3, 5);
//A.void print_arr(int arr[][], int  row, int col);
//B.void print_arr(int* arr, int  row, int col);
//C.void print_arr(int(*arr)[5], int  row, int col);
//D.void print_arr(int(*arr)[3], int  row, int col);


//实现一个函数，可以左旋字符串中的k个字符，如abcdef->cdefab
// 
//1.暴力求解法
#include<string.h>
#include<assert.h>
//
//void left_move(char* arr, int k)
//{
//	assert(arr != NULL);
//	int i = 0;
//	int len = strlen(arr);
//	for (i = 0; i < k; i++)
//	{
//		//左旋一个字符
//		//1
//		char tmp = *arr;
//		//2
//		int j = 0;
//		for (j = 0; j < len - 1; j++)
//		{
//			*(arr + j) = *(arr + j + 1);
//		}
//		//3
//		*(arr + len - 1) = tmp;
//	}
//}

//2.三步翻转法
//abcdef
//ba fedc  bafedc
//cdefab

//void reverse(char* left, char* right)
//{
//	assert(left != NULL);
//	assert(right != NULL);
//	while (left < right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//
//void left_move(char* arr, int k)
//{
//	assert(arr);
//	int len = strlen(arr);
//	assert(k <= len);
//	reverse(arr, arr + k - 1);//逆序左边
//	reverse(arr + k, arr + len - 1);//逆序右边
//	reverse(arr, arr + len - 1);//逆序整体
//}

//int main()
//{
//	char arr[] = "abcdef";
//	int k = 0;
//	scanf_s("%d", &k);
//	left_move(arr, k);
//	printf("%s\n", arr);
//	return 0;
//}


//并判断一个字符串是否为另外一个字符串旋转后的的字符串
//abcdef
//bcdefa
//cdefab
//defabc
//efabcd
//fabcde
//第一种：
//int is_left_move(char* s1, char* s2)
//{
//	int len = strlen(s1);
//	int i = 0;
//	for (i = 0; i < len; i++)
//	{
//		left_move(s1, 1);//每次旋转一个字符
//		int ret = strcmp(s1, s2);
//		if (ret == 0)
//			return 1;
//	} 
//	return 0;
//}
//
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "cdefab";
//	int ret = is_left_move(arr1, arr2);
//	if (ret == 1)
//		printf("Yes\n");
//	else
//		printf("No\n");
//	return 0;
//}

//第二种：
//int is_left_move(char* s1, char* s2)
//{
//	int len1 = strlen(s1);
//	int len2 = strlen(s2);
//	if (len1 != len2)
//		return 0;
//	//1.在s1字符串后追加一个s1字符串
//	//strcat(s1，s1);//error
//	strncat(s1, s1, 6);//abcdefabcdef
//	//2.判断s2指向的字符串是否是s1指向的字符串的子串
//	//strstr - 找字串的库函数
//	char* ret = strstr(s1, s2);
//	if (ret == NULL)
//		return 0;
//	else
//		return 1;
//}
//
//int main()
//{
//	char arr1[30] = "abcdef";
//	char arr2[] = "cdefab";
//	int ret = is_left_move(arr1, arr2);
//	if (ret == 1)
//		printf("Yes\n");
//	else
//		printf("No\n");
//	return 0;
//}


//杨氏矩阵：有一个数字矩阵，矩阵的每行从左到右是递增的，矩阵从上到下是递减的，请编写程序在这样的矩阵中查找某个数字是否存在
//要求：时间复杂度小于O(N);
//int FindNum(int arr[3][3], int k, int row, int col)
//{
//	int x = 0;
//	int y = col - 1;
//	while (x <= row - 1 && y >= 0)
//	{
//		if (arr[x][y] > k)
//			y--;
//		else if (arr[x][y] < k)
//			x++;
//		else
//			return 1;
//	}
//	//找不到
//	return 0;
//}
//
//int main()
//{
//	int arr[3][3] = { {1,2,3},{4,5,6},{7,8,9} };
//	int k = 7;
//	int ret = FindNum(arr, k, 3, 3);
//	if (ret == 1)
//		printf("找到了\n");
//	else
//		printf("找不到\n");
//	return 0;
//}


//可返回找到数字的下标
int FindNum(int arr[3][3], int k, int* px, int* py)
{
	int x = 0;
	int y = *py - 1;
	while (x <= *py - 1 && y >= 0)
	{
		if (arr[x][y] > k)
			y--;
		else if (arr[x][y] < k)
			x++;
		else
		{
			*px = x;
			*py = y;
			return 1;
		}
	}
	//找不到
	return 0;
}

int main()
{
	int arr[3][3] = { {1,2,3},{4,5,6},{7,8,9} };
	int k = 7;
	int a = 3;
	int b = 3;
	//返回型参数
	int ret = FindNum(arr, k, &a, &b);
	if (ret == 1)
	{
		printf("找到了\n");
		printf("下标是：%d %d\n", a, b);
	}
	else
		printf("找不到\n");
	return 0;
}