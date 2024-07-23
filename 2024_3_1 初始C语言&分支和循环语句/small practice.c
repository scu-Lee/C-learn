#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//1.从大到小输出三个数
// 
//int main()
//{
//	int a = 0;
//    int b = 0;
//    int c = 0;
//	scanf_s("%d %d %d", &a, &b, &c);
//	if (a < b)
//	{
//		int tmp = a;
//		a = b;
//		b = tmp;
//	}
//	if (a < c)
//	{
//		int tmp = a;
//		a = c;
//		c = tmp;
//	}
//	if (b < c)
//	{
//		int tmp = b;
//		b = c;
//		c = tmp;
//	}
//	printf("%d %d %d\n", a, b, c);
//	return 0;
//}


//2.打印1-100之间3的倍数的数字
// 
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 3 == 0)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}


//3.给定两个数，求这两个数的最大公约数
// 
//int main()
//{
//	int m = 24;
//	int n = 18;
//	int r = 0;
//	scanf_s("%d %d", &m, &n);
//	while (r = m % n)
//	{
//		//r = m % n;
//		m = n;
//		n = r;
//	}
//	printf("%d\n", n);
//	return 0;
//}


//4.打印1000-2000年的闰年

//第一种方法：
//int main()
//{
//	int year = 0;
//	int count = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		//判断year是否为闰年
//		//1.能被4整除并且不能被100整除是闰年
//		//2.能被400整除是闰年
//		if (year % 4 == 0 && year % 100 != 0)
//		{
//			printf("%d ", year);
//			count++;
//		}
//		else if (year % 400 == 0)
//		{
//			printf("%d ", year);
//			count++;
//		}
//	}
//	printf("\ncount=%d",count);
//	return 0;
//}

//第二种方法：
//int main()
//{
//	int year = 0;
//	int count = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))//&&-和，||-或
//		{
//			printf("%d ", year);
//			count++;
//		}
//	}
//	printf("\ncount = %d", count);
//	return 0;
//}

//5.打印100-200之间的素数

//第一种方法：
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		//判断i是否为素数
//		//素数的判断规则
//		//1.试除法
//		//产生2->i-1
//		int j = 0;
//		for (j = 2; j < i; j++)
//		{
//			if (i % j == 0)
//			{
//				break;
//			}
//		}
//		if (i == j)
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\ncount = % d", count);
//	return 0;
//}

//第二种方法:
//#include <math.h>
//int main()
//{
//	int i = 0;
//	int count = 0;
//	//sqrt-开平方的数学库函数
//	for (i = 100; i <= 200; i++)
//	{
//		int j = 0;
//		for (j = 2; j <= sqrt(i); j++)
//		{
//			if (i % j == 0)
//			{
//				break;
//			}
//		}
//		if (j > sqrt(i))
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\ncount = % d", count);
//	return 0;
//}

////第三种方法：
//#include <math.h>
//int main()
//{
//	int i = 0;
//	int count = 0;
//	//sqrt-开平方的数学库函数
//	for (i = 101; i <201; i += 2)
//	{
//		int j = 0;
//		for (j = 2; j <= sqrt(i); j++)
//		{
//			if (i % j == 0)
//			{
//				break;
//			}
//		}
//		if (j > sqrt(i))
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\ncount = % d", count);
//	return 0;
//}

//6.程序输出结果

//int main()
//{
//	int a = 0, b = 0;
//	for (a = 1,b = 1 ; a <= 100; a++)
//	{
//		if (b >= 20)
//			break;
//		if (b % 3 == 1)
//		{
//			b = b + 3;
//		    continue;
//		}
//		b = b - 5;
//	}
//	printf("%d\n",a);
//	return 0;
//}


//7.数一下1到100的所有整数中有多少个9

//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9)
//			count++;
//		if (i / 10 == 9)//如果是else if那么上一个if执行的数就不会在else if中执行，99这个数就只算了一个9，结果为19
//			count++;
//	}
//	printf("count= %d ", count);
//	return 0;
//}


//8.计算1/1-1/2+1/3-1/4+...+1/99-1/100的值，打印出结果

//int main()
//{
//	int i = 0;
//	double sum = 0.0;
//	int symbol = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		sum = sum + symbol * 1.0 / i;
//		symbol = -symbol;
//	}
//	printf("sum=%lf\n", sum);//%f用于打印float类型的数，%lf打印double类型的数
//	return 0;
//}


//9.求10个整数的最大值

//int main()
//{
//	int arr[] = { 0,1,2,3,4,5,6,7,8,9,10 };
//	int max = arr[0];
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//	}
//	printf("max=%d\n", max);
//	return 0;
//}


//10.在屏幕上输出9*9乘法表

//int main()
//{
//	printf("1*1=1\n");
//	printf("2*1=2 2*2=4\n");
//	printf("3*1=3 3*2=6 3*3=9\n");
//	printf("4*1=4 4*2=8 4*3=12 4*4=16\n");
//	printf("5*1=5 5*2=10 5*3=15 5*4=20 5*5=25\n");//printf战神
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	//确定打印9行
//	for (i = 1; i <= 9; i++)
//	{
//		//打印一行
//		int j = 0;
//		for (j = 1; j <= i; j++)
//			printf("%d*%d=%-2d ", i, j,i*j);//%2d表示右对齐，%-2d表示左对齐
//		printf("\n");
//	}
//	return 0;
//}


//11.二分查找，在一个整型有序数组中查找具体的某个数。找到了就打印数字所在的下标，找不到则输出找不到

//前面讲过

