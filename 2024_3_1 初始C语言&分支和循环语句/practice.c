//#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//1.计算n的阶乘。
//2.计算1！+2！+3！+...+n!。
 
// 自己答案：
//int main()
//{
//	//int n = 1,sum = 1,ch = 0;//两种定义变量的方法
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

//参考答案：
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


//3.在一个有序数组中查找具体的某个数字n。编写int binsearch(int x,int y[],int n);
//功能：在v[0]<=v[1]<=v[2]...<=v[n-1]的数组中查找x。
// 
//参考答案
// 
//第一种：有序数组
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	//写一个代码，在arr数组（有序的）找到7
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		if (k == arr[i])
//		{
//			printf("找到了，下标是：%d\n", i);
//			break;
//		}
//	}
//	if (i == sz)
//		printf("找不到\n");
//	return 0;
//}

//第二种:折半查找算法/二分查找算法
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);//计算元素个数
//	int left = 0;//左下标
//	int right = sz - 1;//右下标
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
//			printf("找到了，下标是：%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("没找到\n");
//	}
//	return 0;
//}


//4.编写代码，演示多个字符从两端移动，向中间汇聚。

//参考答案

//#include<string.h>//strlen的头文件
//#include<windows.h>//Sleep的头文件
//#include<stdlib.h>//system的头文件
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
//	//int right = sizeof(arr1) / sizeof(arr1[0]) - 2;//-1->error,-2正确
//	int right = strlen(arr1) - 1;
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		//停留，休息一秒
//		Sleep(1000);//单位是ms
//		system("cls");//执行系统命令的一个函数-cls-清空屏幕,pause-暂停
//		left++;
//		right--;
//	}
//	printf("%s\n", arr2);
//	return 0;
//}


//5.编写代码实现，模拟用户登录情景，并且只能登陆三次。
//（只允许输入三次密码，如果密码正确则提示登陆成功，如果三次均输入错误，则退出程序。）

//参考答案

//int main()
//{
//	int i = 0;
//	char password[20] = { 0 };
//	for (i = 0; i < 3; i++)
//	{
//		printf ("请输入密码:>");
//		scanf_s("%s", password, sizeof(password));//或者加#define _CRT_SECURE_NO_WARNINGS用这个代码scanf("%s", password);
//		//if (password == "123456")不能用来比较两个字符串是否相等,应该使用一个库函数-strcmp
//		if(strcmp(password,"123456")==0)
//		{
//			printf("登陆成功\n");
//			break;
//		}
//		else
//		{
//			printf("密码错误\n");
//		}
//	}
//	if (i == 3)
//	{
//		printf("三次密码错误，退出程序\n");
//	}
//	return 0;
//}