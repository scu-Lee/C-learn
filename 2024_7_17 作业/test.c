#include<stdio.h>
#include<stdlib.h>

//дһ��������a�Ķ����ƣ����룩��ʾ���м���1

//��һ�֣�
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

//�ڶ��֣�
//int count_bit_one(int n)
//{
//	int count = 0;
//	int a = 1;
//	int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		//n = n >> i;//���������i��ʼֵ��Ϊ1
//		if (((n >> i) & a) == 1)
//		{
//			count++;	
//		}
//	}
//	return count;
//}

//�����֣�
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
//	scanf_s("%d", &a);//���Ϊ�����أ�����-1��������32��1�����Խ���aǿ������ת��Ϊunsigned
//	int count = count_bit_one(a);
//	printf("count=%d\n", count);
//	//system("pause");//system�⺯�� - ִ��ϵͳ���� - pause����ͣ��
//	return 0;
//}


//���������������в�ͬλ�ĸ���

//int dif_num(int m, int n)
//{
//	int x = m ^ n;
//  //return count_bit_one(x);
//	int a = 1;
//	int count = 0;
//	int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		//x = x >> i;//���������i��ʼֵ��Ϊ1
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


//��ȡһ���������������������е�ż��������λ���ֱ��ӡ������������

//void Print(int x)
//{
//	int i = 0;
//	printf("����λ��\n");
//	for (i = 30; i >=0; i -= 2)
//	{
//		printf("%d ", (x >> i) & 1);
//	}
//	printf("\n");
//	printf("ż��λ��\n");
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


//��ָ���ӡ�������ݣ���ʹ�������±�

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


//ʵ��һ��������ӡ�˷��ھ����ھ��������������������ֵָ��

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


//�õݹ�ķ��������ӡ�ַ���
//�е��ѣ���������

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


//����һ������ÿλ֮�ͣ��磺2023Ϊ2+0+2+3=7�����ݹ�ʵ��

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


//��дһ������ʵ��n��k�η����ݹ�ʵ��

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