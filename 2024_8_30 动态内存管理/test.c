#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

//struct S
//{
//	char name[20];
//	int age;
//};
//
//int main()
//{
//	int n = 0;
//	scanf_s("%d", &n);
//	struct S arr[50];//50��struct S ���͵�����
//	//30����
//	//60�˷�
//	return 0;
//}

//C�����ǿ��Դ����䳤����� - C99��������

//malloc

#include <stdlib.h>
#include <string.h>
#include <errno.h>

//int main()
//{
//	//���ڴ�����10�����͵Ŀռ�
//	int* p = (int*)malloc(10 * sizeof(int));//INT_MAX / 10*sizeof(int) / sizeΪ0��׼δ���壬ȡ���ڱ�����
//	if (p == NULL)
//	{
//		//��ӡ����ԭ���һ����ʽ
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		//����ʹ��
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			*(p + i) = i;
//			printf("%d ", *(p + i));
//		}
//	}
//	//����̬����Ŀռ䲻��ʹ�õ�ʱ�򣬾�Ӧ�û�������ϵͳ
//	free(p);//free���������ͷŶ�̬���ٵĿռ�  /  ����ָ��ֵ����ı�
//	p = NULL;
//	return 0;
//}


//calloc

//int main()
//{
//	//malloc(10 * sizeof(int))
//	int* p = (int*)calloc(10, sizeof(int));//calloc���ٳ�ʼ��Ϊ0�Ŀռ䣬malloc����δ��ʼ���Ŀռ�
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ", *(p + i));
//		}
//	}
//	//�ͷſռ�
//	free(p);
//	p = NULL;
//	return 0;
//}


//realloc
//������̬�����ڴ�ռ�Ĵ�С

//int main()
//{
//	int* p = (int*)malloc(20);//20�ֽ�
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		int i = 0;
//		for (i = 0; i < 5; i++)
//		{
//			*(p + i) = i;
//		}
//	}
//	//ʹ��malloc����20�ֽڵĿռ䲻��ʹ�ã���Ҫ40�ֽڵĿռ䣬����realloc��������̬���ٵ��ڴ�
//	//reallocʹ��ע�����
//	//1.���pָ��Ŀռ�֮�����㹻���ڴ�ռ�������ӣ���ֱ��׷�ӣ��󷵻�p
//	//2.���pָ��Ŀռ�֮��û���㹻���ڴ�ռ�������ӣ���realloc������������һ���µ��ڴ����򿪱�
//	//  һ����������Ŀռ䣬���Ұ�ԭ���ڴ��е����ݿ����������ͷžɵ��ڴ�ռ䣬��󷵻��¿��ٵ��ڴ��ַ
//	//3.����һ���µı���������realloc�����ķ���ֵ
//	int* ptr = realloc(p, INT_MAX);
//	if (ptr != NULL)
//	{
//		p = ptr;
//		int i = 0;
//		for (i = 5; i < 10; i++)
//		{
//			*(p + i) = i;
//		}
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ", *(p + i));
//		}
//	}
//	//�ͷ��ڴ�
//	free(p);
//	p = NULL;
//	return 0;
//}


//int main()
//{
//	int* p = (int*)malloc(40);
//	if (p == NULL)
//	{
//		return 0;
//	}
//	int* p2 = realloc(p, 80);
//	if (p2 != NULL)
//	{
//		p = p2;
//	}
//
//	//int* p = realloc(NULL, 40);//malloc(40)
//	return 0;
//}


#include <windows.h>
//int main()
//{
//	//1.��NULL���н����ò���
//	//int* p = (int*)malloc(40);
//	////����mallocʧ���ˣ�p�ͱ���ֵΪNULL
//	//*p = 0;//error
//	//int i = 0;
//	//for (i = 0; i < 10; i++)
//	//{
//	//	*(p + i) = i;
//	//}
//	//free(p);
//	//p = NULL;
//
//	//2.�Զ�̬�����ڴ��Խ�����
//	//int* p = (int*)malloc(5 * sizeof(int));
//	//if (p == NULL)
//	//{
//	//	return 0;
//	//}
//	//else
//	//{
//	//	int i = 0;
//	//  //Խ�����
//	//	for (i = 0; i < 10; i++)//10
//	//	{
//	//		*(p + i) = i;
//	//	}
//	//}
//	//free(p);
//	//p = NULL;
//
//	//3.�Զ�̬�����ڴ��free
//	//int a = 10;
//	//int* p = &a;
//	//*p = 20;
//	//free(p);
//	//p = NULL;
//
//	//4.ʹ��free�ͷŶ�̬�����ڴ��һ����
//	//int* p = (int*)malloc(40);
//	//if (p == NULL)
//	//{
//	//	return 0;
//	//}
//	//int i = 0;
//	//for (i = 0; i < 5; i++)
//	//{
//	//	*p++ = i;
//	//}
//	////���տռ�
//	////ʹ��free�ͷŶ�̬�����ڴ��һ����,p�Ѿ�����
//	//free(p);
//	//p = NULL;
//
//	//5.��ͬһ�鶯̬�ڴ�Ķ���ͷ�
//	//int* p = (int*)malloc(40);
//	//if (p == NULL)
//	//{
//	//	return 0;
//	//}
//	////ʹ��
//	////�ͷ�
//	//free(p);
//	////...//дΪp = NULL�ɱ��������
//	//free(p);
//
//	//6.��̬�����ڴ������ͷ�(�ڴ�й©)
//	//while (1)
//	//{
//	//	malloc(1);
//	//}
//	return 0;
//}



//��Ŀ1��

//���´�����ڵ�����
//1.���д������ֱ���������
//2.��������ڴ�й¶������
// str��ֵ���ݵ���ʽ��p��p��GrtMemory�������βΣ�ֻ�ܺ����ڲ���Ч,��GetMemory
// �������غ󣬶�̬�����ڴ���δ�ͷŲ����޷��ҵ������Ի�����ڴ�й¶

//void GetMemory(char* p)
//{
//	p = (char*)malloc(100);
//}
//
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(str);//��ֵ
//	strcpy(str, "hello world");
//	printf(str);
//}
//
//int main()
//{
//	Test();
//
////	char* str = "abcdef";
////	printf("%s\n", str);
////	printf(str);
////	printf("abcdef");
//
//	return 0;
//}

//����1:
//void GetMemory(char** p)
//{
//	*p = (char*)malloc(100);
//}
//
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(&str);//��ַ
//	strcpy(str, "hello world");
//	printf(str);
//	free(str);
//	str = NULL;
//}
//
//int main()
//{
//	Test();
//	return 0;
//}

//����2:
//char* GetMemory(char* p)
//{
//	p = (char*)malloc(100);
//	return p;
//}
//
//void Test(void)
//{
//	char* str = NULL;
//	str = GetMemory(str);//��ֵ
//	strcpy(str, "hello world");
//	printf(str);
//	free(str);
//	str = NULL;
//}
//
//int main()
//{
//	Test();
//	return 0;
//}


//��Ŀ2��

//char* GetMemory(void)
//{
//	char p[] = "abcdef";
//	return p;//����ջ�ռ��ַ��������p�����Ѿ���������
//}
//
//void Test(void)
//{
//	char* str = NULL;
//	str = GetMemory();
//	printf(str);//�Ƿ������ڴ�
//}
//
//int main()
//{
//	Test();
//	return 0;
//}

//���¿���

//1.
//int* Test(void)
//{
//	static int a = 10;//��̬�� - ��ʱ��static���Σ����������ӳ��������ھ�̬��
//	//int a = 10;//ջ��
//	return &a;
//}
//
//int main()
//{
//	int* p = Test();
//	*p = 20;
//	printf("%d\n", *p);
//	return 0;
//}

//2.
//int* test()
//{
//	int* ptr = malloc(100);//malloc���ٵĿռ��ڶ�����ֻ��ͨ��free�ͷ�
//	return ptr;
//}
//
//int main()
//{
//	int* p = test();
//	return 0;
//}


//��Ŀ3��

//void GetMemory(char** p, int num)
//{
//	*p = (char*)malloc(num);
//}
//
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(&str, 100);
//	strcpy(str, "hello");
//	printf(str);//�ڴ�й¶��û���ͷŶ�̬�ڴ濪�ٵĿռ�
//	//��
//	free(str);
//	str = NULL;
//}
//
//int main()
//{
//	Test();
//	return 0;
//}


//��Ŀ4��

//void Test(void)
//{
//	char* str = (char*)malloc(100);
//	strcpy(str, "hello");
//	free(str);//free�ͷ�strָ��Ŀռ�󣬲������str��ΪNULL
//	//��
//	str = NULL;
//	if (str != NULL)
//	{
//		strcpy(str, "world");
//		printf(str);//�Ƿ������ڴ�
//	}
//}
//
//int main()
//{
//	Test();
//	return 0;
//}


//��������

//struct S
//{
//	int n;
//	int arr[];//δ֪��С�� - ���������Ա - ����Ĵ�С�ǿ��Ե�����
//};

//struct S
//{
//	int n;
//	int arr[0];//δ֪��С��
//};
//
//int main()
//{
//	//struct S s;
//	//printf("%d\n", sizeof(s));//4
//	struct S* ps = (struct S*)malloc(sizeof(struct S) + 5 * sizeof(int));
//	ps->n = 100;
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		ps->arr[i] = i;//0,1,2,3,4
//	}
//	struct S* ptr = realloc(ps, 44);
//	if (ptr != NULL)
//	{
//		ps = ptr;
//	}
//	for (i = 5; i < 10; i++)
//	{
//		ps->arr[i] = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", ps->arr[i]);
//	}
//	//�ͷ�
//	free(ps);
//	ps = NULL;
//	return 0;
//}


//struct S
//{
//	int n;
//	int* arr;
//};
//
//int main()
//{
//	struct S* ps = (struct S*)malloc(sizeof(struct S));
//	ps->arr = malloc(5 * sizeof(int));
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		ps->arr[i] = i;
//	}
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", ps->arr[i]);
//	}
//	//������С
//	int* ptr = realloc(ps->arr, 10 * sizeof(int));
//	if (ptr != NULL)
//	{
//		ps->arr = ptr;
//	}
//	for (i = 5; i < 10; i++)
//	{
//		ps->arr[i] = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", ps->arr[i]);
//	}
//	//�ͷ��ڴ�
//	free(ps->arr);
//	ps->arr = NULL;
//	free(ps);
//	ps = NULL;
//	return 0;
//}