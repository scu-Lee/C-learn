#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//���н��
//int main()
//{
//	unsigned long pulArray[] = { 6,7,8,9,10 };
//	unsigned long* pulPtr;
//	pulPtr = pulArray;
//	*(pulPtr + 3) += 3;
//	printf("%d,%d\n", *pulPtr, *(pulPtr + 3));
//	return 0;
//}


//�����ַ���
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
//	scanf_s("%s", arr, 100);//�����ϱ�ʾ��vs2019��Ҫ����ָ����������ʾ�����ַ�������Ĵ�С���������뷽ʽ��mercedes benz���ո���ַ�������
//	//gets(arr);//��ȡһ�У���ȡ�����ַ����пո�Ҳ����
//	reverse(arr);
//	printf("�������ַ�����%s\n", arr);
//	return 0;
//}


//�������Sn=a+aa+aaa+aaaa+aaaaa��ǰ5��֮�ͣ�����a��һ������
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


//���0-10000֮���ˮ�ɻ�����153=1^3+5^3+3^3��
//#include<math.h>
//int main()
//{
//	int i = 0;
//	for (i = 0; i <= 100000; i++)
//	{
//		//1.����i��λ�� - countλ��
//		int tmp = i;
//		int count = 1;
//		int sum = 0;
//		while (tmp /= 10)
//		{
//			count++;
//		}
//		//2.����i��ÿһλ��count�η�֮��sum
//		tmp = i;
//		while (tmp)
//		{
//			sum += pow(tmp % 10, count);
//			tmp /= 10;
//		}
//		//3.�Ƚ�i��sum�Ƿ����
//		if (i == sum)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}


//�������ͼ��
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
//	//��ӡ�ϰ벿��
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		int j = 0;
//		//��ӡ�ո�
//		for (j = 0; j < n-1-i; j++)
//		{
//			printf(" ");
//		}
//		//��ӡ*
//		for (j = 0; j < 2 * i + 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	//��ӡ�°벿��
//	for (i = 0; i < n - 1; i++)
//	{
//		int j = 0;
//		//��ӡ�ո�
//		for (j = 0; j <= i; j++)
//		{
//			printf(" ");
//		}
//		//��ӡ*
//		for (j = 0; j < 2 * (n - i) - 3; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}


//���ܷ������������B
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
//B. *p.a//.���ȼ�����*����Ҫ����
//C. p->a
//D. (*p).a


//����ˮ���⣬��ˮ1Ԫ1ƿ��2����ƿ��1ƿ��20Ԫ�ܺȶ���ƿ��ˮ
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


//ʵ��һ�������ڵ�����������ǰ��ż���ں�
//void move(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left < right)
//	{
//		//�������ż��
//		while ((left < right) && (arr[left] % 2 == 1))
//		{
//			left++;
//		}
//		//���ұ�������
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


//���ģʽb�����00����������ΪС�˴洢�����Ϊ0x34==52
//int main()
//{
//	unsigned int a = 0x1234;
//	unsigned char b = *(unsigned char*)&a;
//	printf("%d\n", b);
//	return 0;
//}


//���³������н����
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


//��ӡ�������
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
//				arr[i][j] = 1;//=д��==����һ��Ϊ0
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


//�����֣�����4������3����˵���滰��1����˵�ļٻ�
//A˵��������
//B˵����C
//C˵����D
//D˵��C�ں�˵
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


//�������⣺��36ƥ��6���ܵ���û�м�ʱ����������ȷ����36ƥ���е�ǰ������
//�������ٱ������Σ�  8��
//�������⣺��25ƥ��5���ܵ���û�м�ʱ����������ȷ����25ƥ���е�ǰ������
//�������ٱ������Σ�  ?��

//�������⣺��һ���㣬���ʲ����ȣ�����ÿһ����ȼ����ǡ����1��Сʱ
//          ���������㣬����ȷ��һ��15���ӵ�ʱ���
//��һ�������˵�ȼ���ڶ�����ȼһ�ˣ���һ��ȼ��30min����ʱ��ȼ�ڶ�����һ�ˣ�ȼ����Ҫ15min��


//5λ�˶�Ա�ı���Ԥ����Ϊ���£�ÿλѡ�ֶ�˵����һ�룬���ȷ������
//Aѡ��˵��B�ڶ����ҵ���
//Bѡ��˵���ҵڶ���E����
//Cѡ��˵���ҵ�һ��D�ڶ�
//Dѡ��˵��C����ҵ���
//Eѡ��˵���ҵ��ģ�A��һ
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


//int* fun(int a,int b);//��������
//int(*) fun(int a,int b);//error
//int(*fun)(int a,int b);//����ָ��
//(int*) fun(int a,int b);//��������


//���д����ĸ��������������ȷ? C
//int arr[3][5] = { 1,2,3,4,5,6,7,8,9,10 };
//print_arr(arr, 3, 5);
//A.void print_arr(int arr[][], int  row, int col);
//B.void print_arr(int* arr, int  row, int col);
//C.void print_arr(int(*arr)[5], int  row, int col);
//D.void print_arr(int(*arr)[3], int  row, int col);


//ʵ��һ�����������������ַ����е�k���ַ�����abcdef->cdefab
// 
//1.������ⷨ
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
//		//����һ���ַ�
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

//2.������ת��
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
//	reverse(arr, arr + k - 1);//�������
//	reverse(arr + k, arr + len - 1);//�����ұ�
//	reverse(arr, arr + len - 1);//��������
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


//���ж�һ���ַ����Ƿ�Ϊ����һ���ַ�����ת��ĵ��ַ���
//abcdef
//bcdefa
//cdefab
//defabc
//efabcd
//fabcde
//��һ�֣�
//int is_left_move(char* s1, char* s2)
//{
//	int len = strlen(s1);
//	int i = 0;
//	for (i = 0; i < len; i++)
//	{
//		left_move(s1, 1);//ÿ����תһ���ַ�
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

//�ڶ��֣�
//int is_left_move(char* s1, char* s2)
//{
//	int len1 = strlen(s1);
//	int len2 = strlen(s2);
//	if (len1 != len2)
//		return 0;
//	//1.��s1�ַ�����׷��һ��s1�ַ���
//	//strcat(s1��s1);//error
//	strncat(s1, s1, 6);//abcdefabcdef
//	//2.�ж�s2ָ����ַ����Ƿ���s1ָ����ַ������Ӵ�
//	//strstr - ���ִ��Ŀ⺯��
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


//���Ͼ�����һ�����־��󣬾����ÿ�д������ǵ����ģ�������ϵ����ǵݼ��ģ����д�����������ľ����в���ĳ�������Ƿ����
//Ҫ��ʱ�临�Ӷ�С��O(N);
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
//	//�Ҳ���
//	return 0;
//}
//
//int main()
//{
//	int arr[3][3] = { {1,2,3},{4,5,6},{7,8,9} };
//	int k = 7;
//	int ret = FindNum(arr, k, 3, 3);
//	if (ret == 1)
//		printf("�ҵ���\n");
//	else
//		printf("�Ҳ���\n");
//	return 0;
//}


//�ɷ����ҵ����ֵ��±�
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
	//�Ҳ���
	return 0;
}

int main()
{
	int arr[3][3] = { {1,2,3},{4,5,6},{7,8,9} };
	int k = 7;
	int a = 3;
	int b = 3;
	//�����Ͳ���
	int ret = FindNum(arr, k, &a, &b);
	if (ret == 1)
	{
		printf("�ҵ���\n");
		printf("�±��ǣ�%d %d\n", a, b);
	}
	else
		printf("�Ҳ���\n");
	return 0;
}