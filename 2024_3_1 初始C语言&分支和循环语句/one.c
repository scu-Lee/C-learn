//#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


//int main()
//{
//	int i = 1;
//	do//do while 循环至少被执行一次
//	{
//		if (5 == i)
//			continue;
//		printf("%d ",i);
//		i++;
//	} 
//	while (i <= 10);
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (; i < 10; i++)
//	{
//		for (; j < 10; j++)
//		{
//			printf("hehe\n");
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	//10次循环
//	//10次打印
//	//10个元素
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	//   初始化 判断    调整 
//	for (i = 1 ;i <= 10 ;i++)
//	{
//		if (5 == i)
//			continue;//或用break
//		printf("%d ", i);
//	}
//	return 0;
//}


//int main()
//{
//	int i = 0;//初始化
//	while (i < 10)//判断
//	{
//		;
//		i++;//调整
//	}
//	return 0;
//}


//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch < '0' || ch > '9')
//			continue;
//		putchar(ch);
//	}
//	return 0;
//}


//int main()
//{
//	int ret = 0;
//	int ch = 0;
//	char password[20] = { 0 };
//	printf("请输入密码:>");
//	scanf_s ("%s", password,sizeof(password));//scanf_s，加sizeof()。输入密码，并存放在password数组中
//	//缓冲区还剩一个‘\n’
//	//读取一下‘\n'
//	//ch = getchar();
//	while ((ch = getchar() != '\n'))
//	{
//		;
//	}
//	printf("请确认(Y/N):>");
//	ret = getchar();//getchar是单个字符
//	if (ret == 'Y')
//	{
//		printf("确认成功\n");
//	}
//	else
//	{
//		printf("放弃确认\n");
//	}
//	return 0;
//}


//int main()
//{
//	int ch = 0;
//	//ctrl + z
//	//EOF - end of file -> -1
//	while ((ch = getchar()) != EOF)
//	{
//		putchar(ch);
//	}
//	//int ch = getchar();
//	//putchar(ch);
//	//printf("%c\n", ch);
//	return 0;
//}


//死循环代码
//int main()
//{
//	int i = 1;
//	while (i<=10)
//	{
//		if (5 == i)
//		continue;//continue终止本次循环后面的代码
//		printf("%d ", i);
//		i++;
//	}
//	return 0;
//}


//int main()
//{
//	int n = 1;
//	int m = 2;
//	switch (n)
//	{
//	case 1:
//		m++;//3
//	case 2:
//		n++;//2
//	case 3:
//		switch (n)//switch允许嵌套使用
//		{
//		case 1:
//			n++;
//		case 2:
//			m++;//4
//			n++;//3
//			break;
//		}
//		case 4:
//			m++;
//			break;
//		default:
//			break;
//		}
//		printf("m = %d,n = %d\n", m, n);
//	return 0;
//}

//int main()
//{
//	int day = 0;
//	int n = 1;
//	scanf_s("%d", &day);
//	switch (day)
//	{
//	/*default://switch语句内的整型常量表达式没有顺序，可以任意顺序编写，如把default编写在开始
//		printf("输入错误\n");
//		break;*/
//	case 1:
//		if (n == 1)
//			printf("呵呵\n");//switch语句可以加入if语句
//	case 3:
//	case 4:
//	case 5:
//		printf("工作日\n");
//		break;
//	case 6:
//	case 7:
//		printf("休息日\n");
//		break;
//	default:
//		printf("输入错误\n");
//		break;
//	}
//	return 0;
//}


//int main()
//{
//	int day = 0;
//	int n = 1;//n为变量
//	scanf_s("%d", &day);
//	switch (day)//括号内为整型表达式
//	{
//	//case n：//n为变量，错误
//	case 1://case后面为整型常量表达式，例如不能为1.0，可以为1+0
//		printf("星期一\n");
//		break;
//	case 2:
//		printf("星期二\n");
//		break;
//	case 3:
//		printf("星期三\n");
//		break;
//	case 4:
//		printf("星期四\n");
//		break;
//	case 5:
//		printf("星期五\n");
//		break;
//	case 6:
//		printf("星期六\n");
//		break;
//	case 7:
//		printf("星期天\n");
//		break;
//	}
//	return 0;
//}


//int main()
//{
//	int day = 0;
//	scanf_s ("%d", &day);//vs2019 scanf用scanf_s编写
//	if (1 == day)
//		printf("星期一\n");
//	else if (2 == day)
//		printf("星期二\n");
//	else if (3 == day)
//		printf("星期三\n");
//	else if (4 == day)
//		printf("星期四\n");
//	return 0;
//}

//int main()
//{
//	int a, b, c, d;
//	a = 0;
//	b = 1;
//	c = 2;
//	d = 3;
//	printf("%d", a+++b+c+++d++);//在C语言中，++运算符是右结合的,该段代码为a++ + b + c++ + d++
//	return 0;
//}

//int main()
//{
//	int num = 0;
//	while (num < 100)
//	{
//		if (num % 2 == 1)
//		{
//			printf("num=%d\n", num);
//		}
//		num++;
//	}
//	return 0;
//}
//或者下面的方式
//int main()
//{
//	int i = 1;
//	while (i < 100)
//	{
//		printf("%d\n", i);
//		i = i + 2;//或i+=2
//	}
//	return 0;
//}

//int main()//while是循环语句，下面代码是死循环
//{
//	int a = 5;
//	while (a % 2 == 1)
//	printf("%d ", a);
//	return 0;
//}


//int main()
//{
//	int num = 4;
//	if( 5 == num )//变量名和常量换位置可以防止少个‘=’代码能跑起来，但是是错的
//	{
//		printf("呵呵\n");
//	}
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 2;
//	if (a == 1)
//		if (b == 2)
//			printf("hehe\n");
//	else//else就近原则，与未匹配的if匹配。可以用{}进行代码块分割
//		printf("haha\n");
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	;//是一条空语句
//	return 0;
//}

//结构体-复杂对象-自己创造出来的一种类型

//创建一个结构体类型
//struct Book
//{
//	char name[20];//C语言程序设计
//	short price;//55
//};//;用于专门结束这个类型定义的，不可缺少
//
//int main()
//{
//	//利用结构体类型创建一个该类型的结构体变量
//	struct Book b1={"C语言程序设计",55};
//	strcpy (b1.name, "C++");//strcpy-string copy-字符串拷贝-库函数-string.h
//	printf("%s\n", b1.name);
//	//struct Book* pb = &b1;
//	//利用pb打印出我的书名和价格
//	//.    结构体变量.成员
//	//->   结构体指针->成员
//	//printf("%s\n", pb->name);
//	//printf("%d\n", pb->price);
//
//	//printf("%s\n", (*pb).name);
//	//printf("%d\n", (*pb).price);
//	
//	/*printf("书名：%s\n", b1.name);
//	printf("价格：%d元\n", b1.price);
//	b1.price = 15;
//	printf("改变后的价格：%d元\n", b1.price);*/
//	return 0;
//}

//int main()//自己写的
//{
//	printf("书名：C语言程序设计\n");
//	printf("价格：55元\n");
//	return 0;
//}

//int main()
//{
//	printf("%d\n", sizeof(char*));
//	printf("%d\n", sizeof(short*));
//	printf("%d\n", sizeof(int*));
//	printf("%d\n", sizeof(double*));

	//double d = 3.14;
	//double* pd = &d;
	//*pd = 5.5;
	//printf("%d\n", sizeof (pd));//32-4  64-8
	//printf("%lf\n", d);
	//printf("%lf\n", *pd);
	
	//int a = 10;//申请了4个字节的空间
	////printf("%p\n", &a);
	//int* p = &a;//p是一个变量-指针变量
	////printf("%p\n", p);
	//*p = 20;//解引用操作符/间接访问操作符
	//printf("a=%d\n", a);
	//return 0;
//}
//int main()
//{
//	int a = 2;
//	printf("%d\n", &a);
//	return 0;
// }
 

//int main()
//{
//	int arr[10] = {0};
//	printf("%d\n",sizeof (arr));
//	//int a = 10;
//	//printf("%d\n", sizeof(a));
//	//printf("%d\n", sizeof a);//变量的（）可以省略，但变量名不可以，比如a和int。
//	//printf("%d\n", sizeof(int));
//	//printf("%d\n", sizeof (float));
//	return 0;
//}


//int Add(int x, int y)
//{
//	int z = x + y;
//	return z;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = 0;
//	sum = a + b;
//	sum = Add(a, b);
//	printf("%d\n", sum);
//	return 0;
// }


//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };//创建一个10个整型元素的数组，下标默认从0开始。
//	int i = 0;
//	while (i < 10)
//	{
//		printf("%d ", arr[i]);
//		i++;
//	}
//	return 0; 
//}


//int num = 10;
//int main()
//{
//	int num = 1;
//	printf("num=%d\n", num);//全局变量和局部变量同名时，局部变量优先使用。
//	return 0;
//}


//int main()
//{
//	//字符结束标志：‘\0’
//	//'0'-转义字符-0
//	//0-数字0
//	//'0'-48
//	//EOF-end of file-文件结束标志--1
//	return 0;
//}


//#include <string.h>
//
//int main()
//{
//	char arr[] = {'b','i','t',0};//'\0'或者0都行。
//	printf("%d\n", strlen(arr));
//    return 0;
//}


//int main()
//{
//	char ch[10] = "hello bit";
//	int i = 0;
//	while (i < 10)
//	{
//		printf("%d\n", ch[i]);
//		i++;
//	}
//	return 0;
//}


//int MAX(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y; 
//}
//	
//int main()
//{
//	int num1 = 10;
//	int num2 = 20;
//	int max = 0;
//	max = MAX(num1, num2);
//	printf("max=%d\n", max);
//	return 0;
//}


//int main()
//{
//	int a = 0;
//	int b = ~a;//b是有符号数的整型，~是二进制位按位取反，负数在内存中存储的是补码。原码->反码（最高位不变，其他位按位取反）->补码（反码+1）。
//	printf("%d\n", b);//打印使用的是这个数的原码。
//	return 0;
//}
