#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//1.�Ӵ�С���������
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


//2.��ӡ1-100֮��3�ı���������
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


//3.���������������������������Լ��
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


//4.��ӡ1000-2000�������

//��һ�ַ�����
//int main()
//{
//	int year = 0;
//	int count = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		//�ж�year�Ƿ�Ϊ����
//		//1.�ܱ�4�������Ҳ��ܱ�100����������
//		//2.�ܱ�400����������
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

//�ڶ��ַ�����
//int main()
//{
//	int year = 0;
//	int count = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))//&&-�ͣ�||-��
//		{
//			printf("%d ", year);
//			count++;
//		}
//	}
//	printf("\ncount = %d", count);
//	return 0;
//}

//5.��ӡ100-200֮�������

//��һ�ַ�����
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		//�ж�i�Ƿ�Ϊ����
//		//�������жϹ���
//		//1.�Գ���
//		//����2->i-1
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

//�ڶ��ַ���:
//#include <math.h>
//int main()
//{
//	int i = 0;
//	int count = 0;
//	//sqrt-��ƽ������ѧ�⺯��
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

////�����ַ�����
//#include <math.h>
//int main()
//{
//	int i = 0;
//	int count = 0;
//	//sqrt-��ƽ������ѧ�⺯��
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

//6.����������

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


//7.��һ��1��100�������������ж��ٸ�9

//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9)
//			count++;
//		if (i / 10 == 9)//�����else if��ô��һ��ifִ�е����Ͳ�����else if��ִ�У�99�������ֻ����һ��9�����Ϊ19
//			count++;
//	}
//	printf("count= %d ", count);
//	return 0;
//}


//8.����1/1-1/2+1/3-1/4+...+1/99-1/100��ֵ����ӡ�����

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
//	printf("sum=%lf\n", sum);//%f���ڴ�ӡfloat���͵�����%lf��ӡdouble���͵���
//	return 0;
//}


//9.��10�����������ֵ

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


//10.����Ļ�����9*9�˷���

//int main()
//{
//	printf("1*1=1\n");
//	printf("2*1=2 2*2=4\n");
//	printf("3*1=3 3*2=6 3*3=9\n");
//	printf("4*1=4 4*2=8 4*3=12 4*4=16\n");
//	printf("5*1=5 5*2=10 5*3=15 5*4=20 5*5=25\n");//printfս��
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	//ȷ����ӡ9��
//	for (i = 1; i <= 9; i++)
//	{
//		//��ӡһ��
//		int j = 0;
//		for (j = 1; j <= i; j++)
//			printf("%d*%d=%-2d ", i, j,i*j);//%2d��ʾ�Ҷ��룬%-2d��ʾ�����
//		printf("\n");
//	}
//	return 0;
//}


//11.���ֲ��ң���һ���������������в��Ҿ����ĳ�������ҵ��˾ʹ�ӡ�������ڵ��±꣬�Ҳ���������Ҳ���

//ǰ�潲��

