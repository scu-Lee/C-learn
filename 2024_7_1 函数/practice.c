#include<stdio.h>

//1.����һ������ֵ���޷��ţ�������˳���ӡ����ÿһλ�����磺���룺1234�������1 2 3 4

//void print(int n)
//{
//	if (n > 9)
//	{
//		print(n / 10);
//	}
//	printf("%d ", n % 10);	
//}
//
//int main()
//{
//	unsigned int num = 0;
//	scanf_s("%d", &num);
//	print(num);//�ݹ�
//	return 0;
//}


//2.��д����������������ʱ���������ַ����ĳ���

//ѭ��
//int my_strlen(char* str)
//{
//	int count = 0;//��������ʱ����
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}

//�ݹ�
//int my_strlen(char* str)
//{
//	if (*str != '\0')
//		return 1 + my_strlen(str + 1);
//	else
//		return 0;
//}
//
//int main()
//{
//	char arr[] = "Mercedes benz";
//	//int len = strlen(arr);//���ַ�������
//	int len = my_strlen(arr);//ģ��ʵ��strlen������arr�����飬���鴫�Σ�����ȥ�Ĳ����������飬���ǵ�һ��Ԫ�صĵ�ַ
//	printf("%d\n", len);
//	return 0;
//}


//3.��n�Ľ׳ˣ����������

//ѭ��
//int Factorial1(int n)
//{
//	int i = 0;
//	int ret = 1;
//	for (i = 1; i <= n; i++)
//	{
//		ret *= i;
//	}
//	return ret;
//}

//�ݹ�
//int Factorial2(int n)
//{
//	if (n <= 1)
//		return 1;
//	else
//		return n * Factorial2(n - 1);
//}

//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf_s("%d", &n);
//	ret = Factorial1(n);
//	printf("%d\n", ret);
//	return 0;
//}


//4.��쳲���������



//int fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (n > 2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//
int main()
{
	int n = 0;
	int ret = 0;
	scanf_s("%d", &n);
 //������������Test-Driven Development��TDD��
	ret = fib(n);
	printf("ret=%d\n", ret);
	//printf("count=%d\n", count);
	return 0;
}


int count = 0;
int fib(int n)
{
	if (n == 3)//���Ե�����쳲��������ļ������	
	{
		count++;
	}
	if (n <= 2)
		return 1;
	else
		return fib(n - 1) + fib(n - 2);
}


//3�㺺ŵ��
//#include <stdio.h>
//
//// ��������
//void hanoi(int n, char from_rod, char to_rod, char aux_rod);//����Ҫ���������������ᱨ��֮ǰ�и����벻������Ҳ�������У�Ϊʲô�أ�
//// ������
//int main() 
//{
//    int n = 3; // Բ�̵�����
//    hanoi(n, 'A', 'C', 'B');  // A��B �� C �ֱ���������
//    return 0;
//}
//// ��ŵ���ĵݹ麯��
//void hanoi(int n, char from_rod, char to_rod, char aux_rod)
//{
//    if (n == 1) 
//    {
//        printf("Move disk 1 from rod %c to rod %c\n", from_rod, to_rod);//%c�����ַ���%s�ַ���
//        return 0;
//    }
//    hanoi(n - 1, from_rod, aux_rod, to_rod);
//    printf("Move disk %d from rod %c to rod %c\n", n, from_rod, to_rod);
//    hanoi(n - 1, aux_rod, to_rod, from_rod);
//}