//#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//1.����n�Ľ׳ˡ�
//2.����1��+2��+3��+...+n!��
 
// �Լ��𰸣�
//int main()
//{
//	//int n = 1,sum = 1,ch = 0;//���ֶ�������ķ���
//	int n = 1;
//	int sum = 1;
//	int ch = 0;
//	int sum1 = 0;
//	scanf_s("%d",&ch);
//	for (n = 1; n <= ch; n++)
//	{
//		sum = sum * n;
//		sum1 = sum1 + sum;
//	}
//	printf("sum=%d\n", sum);
//	printf("sum1=%d\n", sum1);
//	return 0;
//}

//�ο��𰸣�
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int ret = 1;
//	int sum = 0;
//	for (n = 1; n <= 3; n++)
//	{
//		ret = ret * n;
//		sum = sum + ret;
//	}
//	printf("sum = %d\n", sum);
//	return 0;
//}


//3.��һ�����������в��Ҿ����ĳ������n����дint binsearch(int x,int y[],int n);
//���ܣ���v[0]<=v[1]<=v[2]...<=v[n-1]�������в���x��
// 
//�ο���
// 
//��һ�֣���������
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	//дһ�����룬��arr���飨����ģ��ҵ�7
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		if (k == arr[i])
//		{
//			printf("�ҵ��ˣ��±��ǣ�%d\n", i);
//			break;
//		}
//	}
//	if (i == sz)
//		printf("�Ҳ���\n");
//	return 0;
//}

//�ڶ���:�۰�����㷨/���ֲ����㷨
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);//����Ԫ�ظ���
//	int left = 0;//���±�
//	int right = sz - 1;//���±�
//
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			printf("�ҵ��ˣ��±��ǣ�%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("û�ҵ�\n");
//	}
//	return 0;
//}


//4.��д���룬��ʾ����ַ��������ƶ������м��ۡ�

//�ο���

//#include<string.h>//strlen��ͷ�ļ�
//#include<windows.h>//Sleep��ͷ�ļ�
//#include<stdlib.h>//system��ͷ�ļ�
//int main()
//{
//	//welcome to SCU!!!!!!
//	//####################
//	//w##################!
//	//we################!!
//	//...
//	//welcome to SCU!!!!!!
//	//
//	//char arr[] = "abc";
//	//[a b c \0]
//	// 0 1 2 3
//	//4-2
//	char arr1[] = "welcome to SCU and Mercedes Benz!!!!!!";
//	char arr2[] = "####################";
//	int left = 0;
//	//int right = sizeof(arr1) / sizeof(arr1[0]) - 2;//-1->error,-2��ȷ
//	int right = strlen(arr1) - 1;
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		//ͣ������Ϣһ��
//		Sleep(1000);//��λ��ms
//		system("cls");//ִ��ϵͳ�����һ������-cls-�����Ļ,pause-��ͣ
//		left++;
//		right--;
//	}
//	printf("%s\n", arr2);
//	return 0;
//}


//5.��д����ʵ�֣�ģ���û���¼�龰������ֻ�ܵ�½���Ρ�
//��ֻ���������������룬���������ȷ����ʾ��½�ɹ���������ξ�����������˳����򡣣�

//�ο���

//int main()
//{
//	int i = 0;
//	char password[20] = { 0 };
//	for (i = 0; i < 3; i++)
//	{
//		printf ("����������:>");
//		scanf_s("%s", password, sizeof(password));//���߼�#define _CRT_SECURE_NO_WARNINGS���������scanf("%s", password);
//		//if (password == "123456")���������Ƚ������ַ����Ƿ����,Ӧ��ʹ��һ���⺯��-strcmp
//		if(strcmp(password,"123456")==0)
//		{
//			printf("��½�ɹ�\n");
//			break;
//		}
//		else
//		{
//			printf("�������\n");
//		}
//	}
//	if (i == 3)
//	{
//		printf("������������˳�����\n");
//	}
//	return 0;
//}