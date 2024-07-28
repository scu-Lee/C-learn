#include<stdio.h>
#include<stdlib.h>

//写一个函数求a的二进制（补码）表示中有几个1

//第一种：
//int count_bit_one(unsigned int n)
//{
//	int count = 0;
//	while (n)
//	{
//		if (n % 2 == 1)
//		{
//			count++;
//		}
//		n = n / 2;
//	}
//	return count;
//}

//第二种：
//int count_bit_one(int n)
//{
//	int count = 0;
//	int a = 1;
//	int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		//n = n >> i;//如果用这行i初始值设为1
//		if (((n >> i) & a) == 1)
//		{
//			count++;	
//		}
//	}
//	return count;
//}

//第三种：
//int count_bit_one(int n)
//{
//	int count = 0;
//	while (n)
//	{
//		n = n & (n - 1);
//		count++;
//	}
//	return count;
//}

//int main()
//{
//	int a = 0;
//	scanf_s("%d", &a);//如果为负数呢？比如-1，补码有32个1，可以将数a强制类型转换为unsigned
//	int count = count_bit_one(a);
//	printf("count=%d\n", count);
//	//system("pause");//system库函数 - 执行系统命令 - pause（暂停）
//	return 0;
//}


//求两个数二进制中不同位的个数

//int dif_num(int m, int n)
//{
//	int x = m ^ n;
//  //return count_bit_one(x);
//	int a = 1;
//	int count = 0;
//	int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		//x = x >> i;//如果用这行i初始值设为1
//		if (((x >> i) & a) == 1)
//		{
//			count++;
//		}
//	}
//	return count;
//}

//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf_s("%d %d", &m, &n);
//	int count = dif_num(m, n);
//	printf("count=%d", count);
//	return 0;
//}


//获取一个整数二进制序列中所有的偶数和奇数位，分别打印出二进制序列

//void Print(int x)
//{
//	int i = 0;
//	printf("奇数位：\n");
//	for (i = 30; i >=0; i -= 2)
//	{
//		printf("%d ", (x >> i) & 1);
//	}
//	printf("\n");
//	printf("偶数位：\n");
//	for (i = 31; i >= 0; i -= 2)
//	{
//		printf("%d ", (x >> i) & 1);
//	}
//	printf("\n");
//}
//
//int main()
//{
//	int a = 0;
//	scanf_s("%d", &a);
//	Print(a);
//	return 0;
//}


//用指针打印数组内容，不使用数组下标

//void Print(int* p, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//}
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	Print(arr, sz);
//	return 0;
//}


//实现一个函数打印乘法口诀表，口诀表的行数列数根据输入值指定

//void Print(int x)
//{
//	int i = 0;
//	for (i = 1; i <= x; i++)
//	{
//		int j = 0;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-3d ", i, j, i * j);
//		}
//		printf("\n");
//	}
//}
//
//int main()
//{
//	int a = 0;
//	scanf_s("%d", &a);
//	Print(a);
//	return 0;
//}


//用递归的方法逆序打印字符串
//有点难！不会做！

//int my_strlen(char* array)
//{
//	int count = 0;
//	while (*array != '\0')
//	{
//		count++;
//		array++;
//	}
//	return count;
//}
//
//void reverse_string(char* array)
//{
//	char tmp = array[0];
//	int len = my_strlen(array);
//	array[0] = array[len - 1];
//	array[len - 1] = '\0';
//	if (my_strlen(array + 1) >= 2)
//	{
//		reverse_string(array + 1);
//	}
//	array[len - 1] = tmp;
//}
//
//int main()
//{
//	char arr[] = "abcdefg";
//	reverse_string(arr);
//	printf("%s\n", arr);
//	return 0;
//}


//计算一个数的每位之和（如：2023为2+0+2+3=7），递归实现

//int Digitsum(unsigned int x)
//{
//	if (x > 9)
//	{
//		return Digitsum(x / 10) + x % 10;
//	}
//	else
//		return x;
//}
//
//int main()
//{
//	unsigned int a = 0;
//	scanf_s("%d", &a);
//	int ret = Digitsum(a);
//	printf("ret=%d\n", ret);
//	return 0;
//}


//编写一个函数实现n的k次方，递归实现

//double Pow(int n, int k)
//{
//	if (k < 0)
//		return (1 / (Pow(n, -k)));
//	else if (k == 0)
//		return 1;
//	else
//		return n * Pow(n, k - 1);
//}
//
//int main()
//{
//	int n = 0;
//	int k = 0;
//	scanf_s("%d %d", &n, &k);
//	double ret = Pow(n, k);
//	printf("ret=%lf\n", ret);
//	return 0;
//}