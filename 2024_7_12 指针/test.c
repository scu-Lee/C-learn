#include<stdio.h>

//int main()
//{
//	int a = 10;
//	int* p = &a;//pΪָ�������ָ����������ĵ�ַ����ָ����ǵ�ַ;int* pҲ����дΪint *p
//	printf("%d\n", *p);
//	return 0;
//}

//int main()
//{
//	//printf("%d\n", sizeof(int*));
//	//printf("%d\n", sizeof(char*));
//	//printf("%d\n", sizeof(short*));
//	//printf("%d\n", sizeof(double*));//���н����Ϊ4���ǲ�ָͬ��������ʲô�����أ�
//
//	int a = 0x11223344;
//	//int* pa = &a;
//	//*pa = 0;
//
//	//char* pb = &a;
//	//*pb = 0;
//
//	//ָ�����;�����ָ����н����ò�����ʱ���ܹ����ʿռ�Ĵ�С
//	//int* p    : *p�ܷ���4���ֽڵĴ�С
//	//char* p   : *p�ܷ���1���ֽڵĴ�С
//	//double* p : *p�ܷ���8���ֽڵĴ�С
//	return 0;
//}

//int main()
//{
//	int a = 0x11223344;
//	int* pa = &a;
//	char* pb = &a;
//	printf("%p\n", pa);
//	printf("%p\n", pa + 1);
//	printf("%p\n", pb);
//	printf("%p\n", pb + 1);//ָ�����;�����ָ��һ���߶�Զ��ָ��Ĳ�����	
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	//int* p = arr;//������-��Ԫ�ص�ַ
//	char* p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = 1;
//	}
//	return 0;
//}

//int main()
//{
//	//int a;//�ֲ���������ʼ����Ĭ�������ֵ
//	int* p;//�ֲ�ָ�벻��ʼ�����ͱ���ʼ��Ϊ���ֵ
//	*p = 20;
//	return 0;
//}

//int main()
//{
//	int* p = 5;//���д��벻׼ȷ��ָ��������뱻��ʼ��Ϊһ����Ч���ڴ��ַ��������һ������ֵ����Ϊ��int a=10; int* p=&a;
//	*p = 20;
//	return 0;
//}

//ָ��ָ��Ŀռ��ͷ�--��̫����
//int* test()
//{
//	int a = 10;
//	return &a;
//}
//int main()
//{
//	int* p = test();
//	*p = 20;
//	return 0;
//}

//int main()
//{
//	int b = 0;
//	int a = 10;
//	int* pa = &a;//��ʼ��
//	int* p = NULL;//NULL - ������ʼ��ָ�룬��ָ�븳ֵ
//	int a = 10;
//	int* pa = &a;
//	*pa = 20;
//
//	pa = NULL;
//
//	if (pa != 0)
//	{
//
//	}
//
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int* p = arr;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *p);
//		p = p + 1;//���� p++;
//	}
//	return 0;
//}

//int my_strlen(char* str)
//{
//	char* start = str;
//	char* end = str;
//	while (*end != '\0')
//	{
//		end++;
//	}
//	return end - start;
//}
//
//int main()
//{
//	//strlen���ַ�������
//	//�ݹ� - ģ��ʵ����strlen - �������ķ�ʽ1���ݹ�ķ�ʽ2
//	char arr[] = "Mercedes Benz";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	printf("%p\n", arr);//��ַ - ��Ԫ�ص�ַ
//	printf("%p\n", arr+1);
//
//	printf("%p\n", &arr[0]);
//	printf("%p\n", &arr[0]+1);
//
//	printf("%p\n", &arr);
//	printf("%p\n", &arr+1);
//	//1.&arr - &������ - ������������Ԫ�ص�ַ - ��������ʾ�������� - &��������ȡ��������������ĵ�ַ
//	//2.sizeof(arr) - sizeof(������) - ��������ʾ���������� - sizeof(������)���������������Ĵ�С
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = i;
//		printf("%d ", *(p + i));
//	}
//	//for (i = 0; i < 10; i++)
//	//	printf("%d ", *(p + i));
//	//for (i = 0; i < 10; i++)
//	//	printf("%p === %p\n", p + i, &arr[i]);
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int * pa = &a;
//	int* * ppa = &pa;//ppa�Ƕ���ָ��
//	**ppa = 20;
//	printf("%d\n", **ppa);
//	printf("%d\n", a);
//	//int** * pppa = &ppa;//pppa������ָ��
//	return 0;
//}

//ָ������ - ָ�� - ���ָ�������
//����ָ�� - ����

//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	int* pa = &a;
//	int* pb = &b;
//	int* pc = &c;
//	//�������� - ����
//	//�ַ����� - �ַ�
//	//ָ������ - ָ��
//	//int arr[10];
//	int* arr2[3] = { &a,&b,&c };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		printf("%d ", *(arr2[i]));
//	}
//	return 0;
//}