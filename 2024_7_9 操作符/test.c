#include<stdio.h>

//int main()
//{
//	double a = 5 % 2;//商2余1
//	printf("a = %lf", a);
//	return 0;
//}

//int main()
//{
//	int a = 16;
//	//>>--右移操作符
//	//移动的是二进制位
//	int b = a >> 2;
//	printf("b = %d", b);
//	return 0;
//}

//int main()
//{
//	int a = -1;
//	int b = a >> 1;
//	printf("%d\n", b);
//	return 0;
//}

//int main()
//{
//	int a = 5;
//	int b = a << 1;
//	printf("b = %d\n", b);
//	return 0;
//}

//编写代码实现：求一个整数存储在内存中的二进制中1的个数
//第一种：
//int main()
//{
//	int a = 0;
//	int count = 0;
//	scanf_s("%d", &a);//-1?
//	while (a)
//	{
//		if (a % 2 == 1)
//			count++;
//		a = a / 2;
//	}
//	printf("count = %d\n", count);
//	return 0;
//}

//第二种：
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int count = 0;
//	int i = 0;
//	scanf_s("%d", &a);
//	for (i = 0; i < 32; i++)
//	{
//		b = a >> i;
//		if (1 == (b & 1))
//			count++;
//		
//	}
//	printf("count = %d\n", count);
//	return 0;
//}

//int main()
//{
//	int a = 20;
//	int* p = &a;
//	*p = 99;
//	printf("%d\n", *p);
//	return 0;
//}

//int main()
//{
//	int a = 4;//int - 4 bite
//	char b = 'a';//char - 1 bite
//	char* p = &b;//char* - 4 bite
//	int arr[10] = { 0 };//int - 4 bite * 10 = 40 bite
//	printf("%d\n", sizeof(a));//a的括号可以去掉
//	printf("%d\n", sizeof(int));//int的括号不能去掉
//
//	printf("%d\n", sizeof(b));
//	printf("%d\n", sizeof(char));
//
//	printf("%d\n", sizeof(p));
//	printf("%d\n", sizeof(char*));
//
//	printf("%d\n", sizeof(arr));
//	printf("%d\n", sizeof(int[10]));
//	return 0;
//}

//int main()
//{
//	short s = 0;
//	int a = 10;
//	printf("%d\n", sizeof(s = a + 5));
//	printf("%d\n", s);
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	printf("%d\n", a++);//后置++，先使用，再++
//	printf("%d\n", ++a);//前置++，先++，再使用
//	return 0;
//}

//int main()
//{
//	int a = (int)3.14;//(类型)强制类型转换。int a = int (3.14)//error
//	printf("%d\n", a);
//	return 0;
//}

//int main()
//{
//	int i = 0, a = 0, b = 2, c = 3, d = 4;
//	//i = a++ && ++b && d++;//a++为假，后边不再运算
//	//i = a++ || ++b || d++;//a++为真，后边不再运算
//
//	/*i = a++ && ++b || d++;
//	printf("i = %d\n", i);*///自己的思考-应该是与某一项逻辑与或逻辑或的那一项分别为假和真，后一项便不再运算
//
//	printf("a = %d \nb = %d \nc = %d \nd = %d \n", a, b, c, d);
//	return 0;

//int main()
//{
//	int a = 2;
//	int b = 3;
//	int max = 0;
//	max=(a > b ? 3 : 2);//exp ? exp1 : exp2 三目操作符，exp成立，取exp1，否者取exp2
//	/*if (a > b)
//		max = a;
//	else
//		max = b;*/
//	printf("max = %d\n", max);
//	return 0;
//}

//struct Stu 
//{
//	char name[10];
//	int age;
//	char id[20];
//};

//int main()
//{
//	//使用struct Stu这个类型创建了一个学生对象s1，并初始化
//	struct Stu s1 = { "scu_Lee",24,"2023222055185" };
//	struct Stu* ps = &s1;
//
//	printf("%s\n", ps->name);//第一种
//	printf("%d\n", ps->age);
//	printf("%s\n", ps->id);
//
//	printf("%s\n", (*ps).name);//第二种
//	printf("%d\n", (*ps).age);
//	printf("%s\n", (*ps).id);
//
//	printf("%s\n", s1.name);//第三种
//	printf("%d\n", s1.age);
//	printf("%s\n", s1.id);
//	//结构体变量.成员名
//	return 0;
//}

//隐式类型提升-整型提升
//int main()
//{
//	char a = 3;
//	//00000000000000000000000000000011
//	//00000011 - a
//	char b = 127;
//	//00000000000000000000000001111111
//	//01111111 - b
//
//	//a和b如何相加
//	//00000000000000000000000000000011
//	//00000000000000000000000001111111
//	//00000000000000000000000010000010
//	char c = a + b;
//	//10000010 - c
//	//11111111111111111111111110000010 - 补码
//	//11111111111111111111111110000001 - 反码
//	//10000000000000000000000001111110 - 原码
//	//-126
//	printf("%d\n", c);//%d打印整型，c需要做整型提升
//	return 0;
//}

//int main()
//{
//	char a = 0xb6;//10110110
//	short b = 0xb600;
//	int c = 0xb6000000;
//	if (a == 0xb6)
//		printf("a");//发生整型提升，所以！=，不打印，b同理
//	if (b == 0xb600)
//		printf("b");
//	if (c == 0xb6000000)
//		printf("c");
//	return 0;
//}

//int main()
//{
//	char c = 1;
//	printf("%u\n", sizeof(c));//1
//	printf("%u\n", sizeof(+c));//+c进行了运算，所以需要整型提升，即为4
//	printf("%u\n", sizeof(!c));//逻辑运算（&& || ！）不会发生整型提升。
//	//算术运算符（如 +、-、*、/ 等）
//	//比较运算符（如 == 、<、> 等）
//	//位运算符（如 & 、 | 、 ^ 、 << 、 >> 等）
//	//这三种运算会发生整型提升
//	return 0;
//}

//int main()
//{
//	int a = 1;
//	a = a + --a;
//	printf("%d\n", a);//歧义
//	return 0;
//}

//int main()
//{
//	int i = 10;
//	i = i-- - --i * (i = -3) * i++ + ++i;
//	printf("i = %d\n", i);//歧义
//	return 0;
//}