#include<stdio.h>
#include<stdlib.h>

//int main()
//{
//	int i = 0;
//	for (i = 0; i < 101; i++)
//	{
//		printf("%d ", i);
//	}
//	system("pause");
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	scanf_s("%d", &a);
//	int i = 0;
//	int ret = 1;
//	int sum = 0;
//	for (i = 1; i <= a; i++)
//	{
//		int j = 0;
//		int ret = 1;
//		for (j = 1; j <= i; j++)
//		{
//			ret *= j;
//		}
//		sum += ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	for (i = 0; i <= 12; i++)
//	{
//		printf("E300l\n");
//		arr[i] = 0;//��ѭ����i��arr[12]��ַһ��
//	}
//	return 0;
//}

//void my_strcpy(char* dest, char* src)//����10�֣�6��
//{
//	while (*src != '\0')
//	{
//		*dest = *src;
//		src++;
//		dest++;
//	}
//	*dest = *src;
//}

//void my_strcpy(char* dest, char* src)//����10�֣�7��
//{
//	while (*dest++ = *src++)
//	{
//		;
//	}
//}

//int main()
//{
//	char arr1[] = "***************";
//	char arr2[] = "scu";
//	my_strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}

//void my_strcpy(char* dest, char* src)//����10�֣�8��
//{
//	if (dest != NULL && src != NULL)
//	{
//		while (*dest++ = *src++)
//		{
//			;
//		}
//	}
//}

//#include<assert.h>
//void my_strcpy(char* dest,const char* src)//����10�֣�9��
//{
//	assert(dest != NULL);
//	assert(src != NULL);
//	while (*src++ = *dest++)
//	{
//		;
//	}
//}
//
//int main()
//{
//	char arr1[] = "***";
//	char arr2[] = "scu";
//	my_strcpy(arr1, NULL);
//	printf("%s\n", arr1);
//	return 0;
//}

//int main()
//{
//	const num = 10;
//	int n = 100;
//	      int*      p = &num;
//    //const����ָ�������*���ʱ(const int* p)�����ε���*p��Ҳ����˵������ͨ��p���ı�*p(num)��ֵ
//	//const����ָ�������*�ұ�ʱ(int* const p)�����ε���ָ�����p����p���ܱ��ı���
//	*p = 20;
//	p = &n;
//	printf("%d\n", num);
//	return 0;
//}

//#include<assert.h>
//char* my_strcpy(char* dest,const char* src)//����10�֣�10��
//{
//	char* ret = dest;
//	assert(dest != NULL);//����
//	assert(src != NULL);//����
//	//��srcָ����ַ���������destָ��Ŀռ䣬����'\0'�ַ�
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//
//int main()
//{
//	char arr1[] = "***";
//	char arr2[] = "scu";
//	printf("%s\n", my_strcpy(arr1, arr2));
//	return 0;
//}

#include<assert.h>
int my_strlen(const char* x)
{
	assert(x != NULL);
	int count = 0;
	while (*x != '\0')
	{
		x++;
		count++;
	}
	return count;
}

int main()
{
	char arr[] = "abcdef";
	int ret = my_strlen(arr);
	printf("%d\n", ret);
	return 0;
}