#include <stdio.h>

//void test(void)
//{
//	printf("hello,Benz!\n");
//}
//
//int main()
//{
//	test(100);//void声明
//	return 0;
//}

//int main()
//{
//	int a = 15;
//	int b = 23;
//	printf("%x",b);
//	return 0;
//}


//写一段代码求出当前机器的字节序是什么

//int main()
//{
//	int a = 1;
//	char* p = (char*)&a;
//	if (*p == 1)
//	{
//		printf("小端存储\n");
//	}
//	else
//	{
//		printf("大端存储\n");
//	}
//	return 0;
//}

//int check_sys()
//{
//	int a = 1;
//	return *(char*)&a;
//}
//
//int main()
//{
//	int ret = check_sys();
//	if (ret == 1)
//	{
//		printf("小端存储\n");
//	}
//	else
//	{
//		printf("大端存储\n");
//	}
//	return 0;
//}

//int main()
//{
//	char a = -1;
//	signed char b = -1;
//	unsigned char c = -1;
//	printf("a = %d  b = %d  c = %d\n", a, b, c);//%d打印int型十进制数，注意char到int的整型提升
//	return 0;
//}
// 
//int main()
//{
//	char d = -128;
//	printf("d = %u\n", d);//d先按int类型给出二进制，然后char类型截断，整型提升按char类型提升，最后按%u格式输出
//	return 0;
//}
// 
//int main()
//{
//	char d = 128;
//	printf("d = %u\n", d);
//	return 0;
//}

//int main()
//{
//	int a = -20;
//	unsigned int b = 10;
//	printf("%d\n", a + b);
//	return 0;
//}

//#include <windows.h>
//int main()
//{
//	unsigned int i;
//	for (i = 9; i >= 0; i--)
//	{
//		printf("%u\n", i);//死循环
//		Sleep(1000);
//	}
//	return 0;
//}

//#include <string.h>
//int main()
//{
//	char a[1000];
//	int i;
//	for (i = 0; i < 1000; i++)
//	{
//		a[i] = -1 - i;
//	}
//	printf("%d\n", strlen(a));//strlen到\0停止
//	return 0;
//}

//unsigned char i = 0;
//int main()
//{
//	for (i = 0; i <= 255; i++)
//	{
//		printf("hello word!\n");//死循环
//	}
//	return 0;
//}

int main()
{
	int n = 9;
	//0 00000000 00000000000000000001001 - 补码
	float* pfloat = (float*)&n;
	printf("n的值为:%d\n", n);//9
	printf("*pfloat的值为:%f\n", *pfloat);//0.000000
	//(-1)^0 * 0.00000000000000000001001 * 2^(-126)
	*pfloat = 9.0;
	//1001.0
	//1.001 * 2^3
	//(-1)^0 * 1.001 * 2^130
	//0 10000010 00100000000000000000000
	//01000001000100000000000000000000
	//1091567616
	printf("num的值为:%d\n", n);//1091567616
	printf("*pfloat的值为:%f\n", *pfloat);//9.000000
	return 0;
}