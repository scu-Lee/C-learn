#include<stdio.h>
//#include<string.h>

//int main()
//{
//	//����һ������-�������-10��
//	//int arr1[10] = { 1,2,3 };//����ȫ��ʼ����ʣ�µ�Ԫ��Ĭ�ϳ�ʼ��Ϊ0
//	//char arr2[5] = { 'a',98 };//�ַ�'b'��ASCII��ֵΪ98
//	//char arr3[5] = "ab";//����ok
//	char arr4[] = "abcdef";//[]δ�����ַ����������ݺ��ʵ���ַ������Զ�ȷ��Ϊ7��
//	printf("%d\n", sizeof(arr4));
//	//sizeof����arr4��ռ�ܴ�ռ�Ĵ�С
//	//7��Ԫ��-char*7 7*1=7
//	printf("%d\n", strlen(arr4));
//	//strlen���ַ����ĳ���-'\0'֮ǰ���ַ�����
//	//[a b c d e f \0]
//	//6
//	//int n = 5;
//	//char ch[n];//error
//	return 0;
//}

//1.strlen��sizeofûʲô����
//2.strlen�����ַ������ȵ�-ֻ������ַ����󳤶�-�⺯��-ʹ�õ���ͷ�ļ�
//3.sizeof������������顢���͵Ĵ�С-��λ���ֽ�-������


//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("&arr[%d] = %p\n", i, &arr[i]);//%p�Ե�ַ��ʽ��ӡ
//	}
//	return 0;
//}


//int main()
//{
//	int arr[3][4] = { {1,2,3},{4,5} };
//	//1 2 3 0
//	//4 5 0 0
//	//0 0 0 0
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	//char arr[5][6];
//	//int arr[] = { 1,2,3,4 };
//	//int arr[][5] = { {1,2,3,9,4},{5,1,3,4,7} };
//	return 0;
//}

//int main()
//{
//	int arr[3][4] = { {1,2,3},{4,5} };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)
//		{
//			printf("&arr[%d][%d]= %p\n", i, j, &arr[i][j]);
//		}
//	}
//	return 0;
//}


//ð������

//void bubble_sort(int arr[], int sz)
//{
//	//ȷ��ð����������
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int flag = 1;//������һ��Ҫ���������������
//		//ÿһ��ð������
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//				flag = 0;//���������������ʵ����ȫ����
//			}
//		}
//		if (flag == 1)
//		{
//			break;
//		}
//	}
//}
//
//int main()
//{
//	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	//��arr�����ų�����
//	//arr�����飬���Ƕ�����arr���д��Σ�ʵ���ϴ���ȥ��������arr��Ԫ�صĵ�ַ &arr[0]
//	bubble_sort(arr, sz);//ð��������
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


//int main()
//{
//	int arr[] = { 12,45,4,6,77,9 };
//	printf("%p\n", arr);
//	printf("%p\n", arr + 1);
//	printf("%p\n", &arr[0]);
//	printf("%p\n", &arr[0] + 1);
//	printf("%p\n", &arr);
//	printf("%p\n", &arr + 1);//ע������

//	//int sz=sizeof(arr)/sizeof(arr[0]);
//	//1.sizeof(������)-��������ʾ�������飬sizeof(������)���������������Ĵ�С����λ���ֽ�
//	//2.&�������������������������飬&��������ȡ��������������ĵ�ַ
//
//	//printf("%p\n", arr);
//	//printf("%p\n", &arr[0]);
//	//printf("%d\n", *arr);//*�����ò�����-����ָ��ָ��Ķ����ֵ-12
////	return 0;
//}


//�ҳ�������ֻ����һ�ε���
//int main()
//{
//	int arr[] = { 1,2,3,4,1,2,3,4 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < sz; i++)
//	{
//		j = j ^ arr[i];
//	}
//	printf("������%d\n", j);
//	return 0;
//}
//˼�������û��ֻ����һ�ε����ֻ����ж��ֻ����һ�ε������أ�


//����һ���������飬��ɶ�����Ĳ���
//1.ʵ�ֺ���Init������ʼ������Ϊȫ��
//2.ʵ��Print������ӡ�����ÿ��Ԫ��
//3.ʵ��Reverse���������������Ԫ�ص�����
void Init(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		arr[i] = 0;
		printf("%d ", arr[i]);
	}
}

void Print(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}

void Reverse(int arr[], int sz)
{
	int left = 0;
	int right = sz-1;
	int tmp = arr[left];
	while (left < right)
	{
		int tmp = arr[left];
		arr[left] = arr[right];
		arr[right] = tmp;
		left++;
		right--;
	}
}
int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	Print(arr, sz);
	//Init(arr, sz);
	printf("\n");
	Reverse(arr, sz);
	Print(arr, sz);
	return 0;
}


//������A�е����ݺ�����B�е����ݽ��н���������һ����
//int main()
//{
//	int A[] = { 1,3,5,7,9 };
//	int B[] = { 2,4,6,8,0 };
//	int tmp = 0;
//	int sz = sizeof(A) / sizeof(A[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		tmp = A[i];
//		A[i] = B[i];
//		B[i] = tmp;
//		printf("%d %d\n", A[i], B[i]);
//	}
//	return 0;
//}


//�����������Ľ����
//int main()
//{
//	int arr[] = { 1,2,3,4,5 };
//	short* p = (short*)arr;//(short*)ָ��ǿ������ת��
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		*(p + i) = 0;
//	}
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


//�������
//#include<stdio.h>
//int i;//iʹȫ�ֱ���������ʼ��Ĭ��Ϊ0
//int main()
//{
//	i--;
//	if (i > sizeof(i))//sizeof����- �������/������ռ�ڴ�Ĵ�С >=0 �޷��������޷������������Ƚ�i��-1����Ĭ��Ϊ�޷�����
//	{
//		printf(">\n");
//	}
//	else
//	{
//		printf("<\n");
//	}
//	return 0;
//}


//�������
//int main()
//{
//	int a, b, c;
//	a = 5;
//	c = ++a;
//	b = ++c, c++, ++a, a++;
//	b += a++ + c;
//	printf("a=%d b=%d c=%d\n", a, b, c);
//	return 0;
//}