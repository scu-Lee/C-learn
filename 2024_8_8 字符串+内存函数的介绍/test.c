#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>
#include<assert.h>

//size_t == unsigned int - strlen �����޷����� size_t
 
 
//strlen

//int my_strlen(const char* str)
//{
//	int count = 0;
//	assert(str != NULL);
//	while (str != '\0')///while(*str)
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//
//int main()
//{
//	//int len = strlen("abcdef");
//	////����ʾ��
//	////char arr[] = { 'a','b','c','d','e','f','g','h'};
//	////int len = strlen(arr);
//	//printf("%d\n", len);
//	if (strlen("abc") - strlen("abcdef") > 0)
//	{
//		printf("hehe\n");
//	}
//	else
//	{
//		printf("haha\n");
//	}
//	return 0;
//}


//strcpy

//char* my_strcpy(char* dest,const char* src)
//{
//	assert(dest != NULL);
//	assert(src != NULL);
//	char* ret = dest;
//	//����srcָ����ַ�����destָ��Ŀռ䣬����'\0'
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	//����Ŀ�Ŀռ����ʼ��ַ
//	return ret;
//}
//
//int main()
//{
//	char arr1[] = "abcdef";
//	//char* arr1="abcdef";//error - �����ַ���
//	char arr2[] = "scu";
//	//char arr2[] = { 's','c','u' };//error - û��'\0'�ַ���scrָ���ҵ�ʱ������Խ�����
//	my_strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}


//strcat

//char* my_strcat(char* dest, const char* src)
//{
//	char* ret = dest;
//	assert(dest != NULL);
//	assert(src);
//	//1.�ҵ�Ŀ���ַ���'\0'
//	while (*dest != '\0')
//	{
//		dest++;
//	}
//	//2.׷��
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//
//int main()
//{
//	char arr1[30] = "scu";
//	char arr2[] = "Lee";
//	my_strcat(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}


//strcmp

//int main()
//{
//	//vs2019
//	// > 1
//	// = 0
//	// <-1
//
//	//linux-gcc
//	// > >0
//	// = =0
//	// < <0
//	char* p1 = "abc";
//	char* p2 = "abc";
//	//int ret = strcmp(p1, p2);
//	if (strcmp(p1, p2) > 0)
//	{
//		printf("p1>p2\n");
//	}
//	else if (strcmp(p1, p2) == 0)
//	{
//		printf("p1=p2\n");
//	}
//	else if(strcmp(p1, p2) < 0)
//	{
//		printf("p1<p2\n");
//	}
//	//printf("%d\n", ret);
//	return 0;
//}

//int my_strcmp(const char* str1, const char* str2)
//{
//	assert(str1 && str2);
//	//�Ƚ�
//	while (*str1 == *str2)
//	{
//		if (*str1 == '\0')
//		{
//			return 0;
//		}
//		str1++;
//		str2++;
//	}
//	return (*str1 - *str2);
//}
//
//int main()
//{
//	char* p1 = "abcdef";
//	char* p2 = "abqwe";
//	int ret = my_strcmp(p1, p2);
//	printf("ret = %d\n", ret);
//	return 0;
//}


//strcpy

//int main()
//{
//	char arr1[5] = "abc";
//	char arr2[] = "hello world";
//	strcpy(arr1, arr2);//strcpy���Ȳ������ƣ������У���������ȫ
//	printf("%s\n", arr1);
//	return 0;
//}

//int main()
//{
//	//char arr1[5] = "abc";
//	//char arr2[] = "hello world";
//	//strncpy(arr1, arr2, 4);//strncpy����\0
//
//	char arr1[10] = "abcdefgh";
//	char arr2[] = "scu";
//	strncpy(arr1, arr2, 6);//strncpy������\0
//
//	printf("%s\n", arr1);
//	return 0;
//}


//strncpy

//int main()
//{
//	const char* p1 = "abcdef";
//	const char* p2 = "abcghk";
//	//int ret = strcmp(p1, p2);
//	int ret = strncmp(p1, p2, 3);//3��ʾ�Ƚ�ǰ3���ַ���С
//	printf("%d\n", ret);
//	return 0;
//}


//strncat

//int main()
//{
//	//char arr1[30] = "hello\0xxxxxxxxxxx";
//	//char arr2[] = "world";
//	//strncat(arr1, arr2, 3);//׷��wor������\0
//
//	char arr1[30] = "hello\0xxxxxxxxxxx";
//	char arr2[] = "world";
//	strncat(arr1, arr2, 8);//����ֻ׷��world\0�����泤�Ĳ���Ҫ��׷����
//
//	printf("%s\n", arr1);
//	return 0;
//}


//strstr

//int main()
//{
//	char* p1 = "abcdefabcdef";
//	char* p2 = "def";
//	char* ret = strstr(p1, p2);//�����ظ����ִ������ص�һ���ִ��ĵ�ַ
//	if (ret == NULL)
//	{
//		printf("�ִ�������\n");
//	}
//	else
//	{
//		printf("%s\n", ret);
//	}
//	return 0;
//}

//�ַ�������ʵ�ֻ���KMP �㷨
// 
//char* my_strstr(const char* p1, const char* p2)
//{
//	assert(p1 != NULL);
//	assert(p2 != NULL);
//	char* s1 = NULL;
//	char* s2 = NULL;
//	char* cur = (char*)p1;
//	if (*p2 == '\0')
//	{
//		return (char*)p1;
//	}
//	while (*cur)
//	{
//		s1 = cur;
//		s2 = (char*)p2;
//		while ((*s1 != '\0') && (*s2 != '\0') && (*s1 == *s2))
//		{
//			s1++;
//			s2++;
//		}
//		if (*s2 == '\0')
//		{
//			return cur;//�ҵ��Ӵ�
//		}
//		if (*s1 == '\0')
//		{
//			return NULL;
//		}
//		cur++;
//	}
//	return NULL;//�Ҳ����Ӵ�
//}
//
//int main()
//{
//	char* p1 = "abbbcd";
//	char* p2 = "bbc";
//	char* ret = my_strstr(p1, p2);//�����ظ����ִ������ص�һ���ִ��ĵ�ַ
//	if (ret == NULL)
//	{
//		printf("�ִ�������\n");
//	}
//	else
//	{
//		printf("%s\n", ret);
//	}
//	return 0;
//}


//strtok

//int main()
//{
//	char arr[] = "scu_Lee@outlook.com";
//	char* p = "@.";
//	char buff[1024] = { 0 };
//	strcpy(buff, arr);
//	char* ret = strtok(arr, p);
//	//strcpy_s(buff, sizeof(buff), arr);
//	//char* pa = NULL;
//	//char* ret = strtok_s(arr, p, &pa);
//	//printf("%s\n", ret);
//	ret = strtok(NULL, p);
//	printf("%s\n", ret);
//	ret = strtok(NULL, p);
//	printf("%s\n", ret);
//	return 0;
//}

//int main()
//{
//	char arr[] = "scu_Lee@outlook.com";
//	char* p = "@.";
//	char buff[1024] = { 0 };
//	strcpy(buff, arr);
//	char* ret = NULL;
//	for (ret = strtok(arr, p); ret != NULL; ret = strtok(NULL, p))
//	{
//		printf("%s\n", ret);
//	}
//	return 0;
//}


//strerror

#include<errno.h>

//int main()
//{
//	//������ - ������Ϣ
//	//0      - No error
//	//1      - Operation not permitted
//	//2      - No such file of directory
//	//...
//	//errno��һ��ȫ�ֵĴ������������C���ԵĿ⺯����ִ�й����з����˴��󣬾ͻ�Ѷ�Ӧ�Ĵ����븳ֵ��errno��
//	char* str = strerror(errno);
//	printf("%s\n", str);
//	return 0;
//}

//int main()
//{
//	//���ļ�
//	FILE* pf = fopen("C ֪ʶ��.docx", "r");//"r" - ���ļ�
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		printf("open file successfully");
//	}
//	return 0;
//}


#include<ctype.h>

//int main()
//{
//	char ch = 'W';
//	int ret=islower(ch);
//	printf("%d\n", ret);
//	char a = '2';
//	ret = isdigit(a);
//	printf("%d\n", ret);
//	//ch = tolower('Q');
//	//putchar(ch);
//	ch = toupper('q');
//	putchar(ch);
//	return 0;
//}

//int main()
//{
//	char arr[] = "I am A STUDent";
//	int i = 0;
//	while (arr[i])
//	{
//		if (isupper(arr[i]))
//		{
//			arr[i] = tolower(arr[i]);
//		}
//		i++;
//	}
//	printf("%s\n", arr);
//	return 0;
//}


//memcpy

//struct S
//{
//	char name[20];
//	int age;
//};
//
//void* my_memcpy(void* dest, const void* src, size_t num)
//{
//	void* ret = dest;
//	assert(dest != NULL);
//	assert(src != NULL);
//	while (num--)
//	{
//		*(char*)dest = *(char*)src;
//		++(char*)dest;//((char*)dest)++; - ?
//		++(char*)src;
//	}
//	return ret;
//}
//
//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[5] = { 0 };
//	struct S arr3[] = { {"����",24},{"����",26} };
//	struct S arr4[3] = { 0 };
//	//memcpy(arr4, arr3, sizeof(arr3));
//	my_memcpy(arr4, arr3, sizeof(arr3));
//	my_memcpy(arr2, arr1, sizeof(arr1));
//	return 0;
//}


//memmove

//void* my_memmove(void* dest, const void* src, size_t count)
//{
//	void* ret = dest;
//	assert(dest != NULL);
//	assert(src != NULL);
//	if (dest < src)
//	{
//		//ǰ->��
//		while (count--)
//		{
//			*(char*)dest = *(char*)src;
//			++(char*)dest;
//			++(char*)src;
//		}
//	}
//	else
//	{
//		//��->ǰ
//		while (count--)
//		{
//			*((char*)dest+count) = *((char*)src+count);
//		}
//	}
//	return ret;
//}
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	my_memmove(arr + 2, arr, 20);
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


//memcmp

//int main()
//{
//	int arr1[] = { 1,2,3,4,5,6,7 };
//	int arr2[] = { 1,2,3,5,6,7,8 };
//	int ret = memcmp(arr1, arr2, 13);
//	printf("%d\n", ret);
//	return 0;
//}


//memset

//int main()
//{
//	//char arr[10] = "";
//	//memset(arr, '#', 10);
//	int arr[10] = { 0 };
//	memset(arr, 1, 10);//10���ֽ�
//	return 0;
//}