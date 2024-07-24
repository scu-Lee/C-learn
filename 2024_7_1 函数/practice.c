#include<stdio.h>

//1.接受一个整型值（无符号），按照顺序打印它的每一位。例如：输入：1234，输出：1 2 3 4

//void print(int n)
//{
//	if (n > 9)
//	{
//		print(n / 10);
//	}
//	printf("%d ", n % 10);	
//}
//
//int main()
//{
//	unsigned int num = 0;
//	scanf_s("%d", &num);
//	print(num);//递归
//	return 0;
//}


//2.编写函数，不允许创建临时变量，求字符串的长度

//循环
//int my_strlen(char* str)
//{
//	int count = 0;//创建了临时变量
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}

//递归
//int my_strlen(char* str)
//{
//	if (*str != '\0')
//		return 1 + my_strlen(str + 1);
//	else
//		return 0;
//}
//
//int main()
//{
//	char arr[] = "Mercedes benz";
//	//int len = strlen(arr);//求字符串长度
//	int len = my_strlen(arr);//模拟实现strlen函数。arr是数组，数组传参，传过去的不是整个数组，而是第一个元素的地址
//	printf("%d\n", len);
//	return 0;
//}


//3.求n的阶乘，不考虑溢出

//循环
//int Factorial1(int n)
//{
//	int i = 0;
//	int ret = 1;
//	for (i = 1; i <= n; i++)
//	{
//		ret *= i;
//	}
//	return ret;
//}

//递归
//int Factorial2(int n)
//{
//	if (n <= 1)
//		return 1;
//	else
//		return n * Factorial2(n - 1);
//}

//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf_s("%d", &n);
//	ret = Factorial1(n);
//	printf("%d\n", ret);
//	return 0;
//}


//4.求斐波那契数列



//int fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (n > 2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//
int main()
{
	int n = 0;
	int ret = 0;
	scanf_s("%d", &n);
 //测试驱动开发Test-Driven Development（TDD）
	ret = fib(n);
	printf("ret=%d\n", ret);
	//printf("count=%d\n", count);
	return 0;
}


int count = 0;
int fib(int n)
{
	if (n == 3)//测试第三个斐波那契数的计算次数	
	{
		count++;
	}
	if (n <= 2)
		return 1;
	else
		return fib(n - 1) + fib(n - 2);
}


//3层汉诺塔
//#include <stdio.h>
//
//// 函数声明
//void hanoi(int n, char from_rod, char to_rod, char aux_rod);//这里要声明，不加声明会报错。之前有个代码不加声明也可以运行，为什么呢？
//// 主函数
//int main() 
//{
//    int n = 3; // 圆盘的数量
//    hanoi(n, 'A', 'C', 'B');  // A、B 和 C 分别是三个塔
//    return 0;
//}
//// 汉诺塔的递归函数
//void hanoi(int n, char from_rod, char to_rod, char aux_rod)
//{
//    if (n == 1) 
//    {
//        printf("Move disk 1 from rod %c to rod %c\n", from_rod, to_rod);//%c单个字符，%s字符串
//        return 0;
//    }
//    hanoi(n - 1, from_rod, aux_rod, to_rod);
//    printf("Move disk %d from rod %c to rod %c\n", n, from_rod, to_rod);
//    hanoi(n - 1, aux_rod, to_rod, from_rod);
//}