#include <stdio.h>

//void test(void)
//{
//	printf("hello,Benz!\n");
//}
//
//int main()
//{
//	test(100);//void����
//	return 0;
//}

//int main()
//{
//	int a = 15;
//	int b = 23;
//	printf("%x",b);
//	return 0;
//}


//дһ�δ��������ǰ�������ֽ�����ʲô

//int main()
//{
//	int a = 1;
//	char* p = (char*)&a;
//	if (*p == 1)
//	{
//		printf("С�˴洢\n");
//	}
//	else
//	{
//		printf("��˴洢\n");
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
//		printf("С�˴洢\n");
//	}
//	else
//	{
//		printf("��˴洢\n");
//	}
//	return 0;
//}

//int main()
//{
//	char a = -1;
//	signed char b = -1;
//	unsigned char c = -1;
//	printf("a = %d  b = %d  c = %d\n", a, b, c);//%d��ӡint��ʮ��������ע��char��int����������
//	return 0;
//}
// 
//int main()
//{
//	char d = -128;
//	printf("d = %u\n", d);//d�Ȱ�int���͸��������ƣ�Ȼ��char���ͽضϣ�����������char�������������%u��ʽ���
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
//		printf("%u\n", i);//��ѭ��
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
//	printf("%d\n", strlen(a));//strlen��\0ֹͣ
//	return 0;
//}

//unsigned char i = 0;
//int main()
//{
//	for (i = 0; i <= 255; i++)
//	{
//		printf("hello word!\n");//��ѭ��
//	}
//	return 0;
//}

int main()
{
	int n = 9;
	//0 00000000 00000000000000000001001 - ����
	float* pfloat = (float*)&n;
	printf("n��ֵΪ:%d\n", n);//9
	printf("*pfloat��ֵΪ:%f\n", *pfloat);//0.000000
	//(-1)^0 * 0.00000000000000000001001 * 2^(-126)
	*pfloat = 9.0;
	//1001.0
	//1.001 * 2^3
	//(-1)^0 * 1.001 * 2^130
	//0 10000010 00100000000000000000000
	//01000001000100000000000000000000
	//1091567616
	printf("num��ֵΪ:%d\n", n);//1091567616
	printf("*pfloat��ֵΪ:%f\n", *pfloat);//9.000000
	return 0;
}