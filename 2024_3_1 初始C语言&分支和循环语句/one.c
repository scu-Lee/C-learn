//#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


//int main()
//{
//	int i = 1;
//	do//do while ѭ�����ٱ�ִ��һ��
//	{
//		if (5 == i)
//			continue;
//		printf("%d ",i);
//		i++;
//	} 
//	while (i <= 10);
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (; i < 10; i++)
//	{
//		for (; j < 10; j++)
//		{
//			printf("hehe\n");
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	//10��ѭ��
//	//10�δ�ӡ
//	//10��Ԫ��
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	//   ��ʼ�� �ж�    ���� 
//	for (i = 1 ;i <= 10 ;i++)
//	{
//		if (5 == i)
//			continue;//����break
//		printf("%d ", i);
//	}
//	return 0;
//}


//int main()
//{
//	int i = 0;//��ʼ��
//	while (i < 10)//�ж�
//	{
//		;
//		i++;//����
//	}
//	return 0;
//}


//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch < '0' || ch > '9')
//			continue;
//		putchar(ch);
//	}
//	return 0;
//}


//int main()
//{
//	int ret = 0;
//	int ch = 0;
//	char password[20] = { 0 };
//	printf("����������:>");
//	scanf_s ("%s", password,sizeof(password));//scanf_s����sizeof()���������룬�������password������
//	//��������ʣһ����\n��
//	//��ȡһ�¡�\n'
//	//ch = getchar();
//	while ((ch = getchar() != '\n'))
//	{
//		;
//	}
//	printf("��ȷ��(Y/N):>");
//	ret = getchar();//getchar�ǵ����ַ�
//	if (ret == 'Y')
//	{
//		printf("ȷ�ϳɹ�\n");
//	}
//	else
//	{
//		printf("����ȷ��\n");
//	}
//	return 0;
//}


//int main()
//{
//	int ch = 0;
//	//ctrl + z
//	//EOF - end of file -> -1
//	while ((ch = getchar()) != EOF)
//	{
//		putchar(ch);
//	}
//	//int ch = getchar();
//	//putchar(ch);
//	//printf("%c\n", ch);
//	return 0;
//}


//��ѭ������
//int main()
//{
//	int i = 1;
//	while (i<=10)
//	{
//		if (5 == i)
//		continue;//continue��ֹ����ѭ������Ĵ���
//		printf("%d ", i);
//		i++;
//	}
//	return 0;
//}


//int main()
//{
//	int n = 1;
//	int m = 2;
//	switch (n)
//	{
//	case 1:
//		m++;//3
//	case 2:
//		n++;//2
//	case 3:
//		switch (n)//switch����Ƕ��ʹ��
//		{
//		case 1:
//			n++;
//		case 2:
//			m++;//4
//			n++;//3
//			break;
//		}
//		case 4:
//			m++;
//			break;
//		default:
//			break;
//		}
//		printf("m = %d,n = %d\n", m, n);
//	return 0;
//}

//int main()
//{
//	int day = 0;
//	int n = 1;
//	scanf_s("%d", &day);
//	switch (day)
//	{
//	/*default://switch����ڵ����ͳ������ʽû��˳�򣬿�������˳���д�����default��д�ڿ�ʼ
//		printf("�������\n");
//		break;*/
//	case 1:
//		if (n == 1)
//			printf("�Ǻ�\n");//switch�����Լ���if���
//	case 3:
//	case 4:
//	case 5:
//		printf("������\n");
//		break;
//	case 6:
//	case 7:
//		printf("��Ϣ��\n");
//		break;
//	default:
//		printf("�������\n");
//		break;
//	}
//	return 0;
//}


//int main()
//{
//	int day = 0;
//	int n = 1;//nΪ����
//	scanf_s("%d", &day);
//	switch (day)//������Ϊ���ͱ��ʽ
//	{
//	//case n��//nΪ����������
//	case 1://case����Ϊ���ͳ������ʽ�����粻��Ϊ1.0������Ϊ1+0
//		printf("����һ\n");
//		break;
//	case 2:
//		printf("���ڶ�\n");
//		break;
//	case 3:
//		printf("������\n");
//		break;
//	case 4:
//		printf("������\n");
//		break;
//	case 5:
//		printf("������\n");
//		break;
//	case 6:
//		printf("������\n");
//		break;
//	case 7:
//		printf("������\n");
//		break;
//	}
//	return 0;
//}


//int main()
//{
//	int day = 0;
//	scanf_s ("%d", &day);//vs2019 scanf��scanf_s��д
//	if (1 == day)
//		printf("����һ\n");
//	else if (2 == day)
//		printf("���ڶ�\n");
//	else if (3 == day)
//		printf("������\n");
//	else if (4 == day)
//		printf("������\n");
//	return 0;
//}

//int main()
//{
//	int a, b, c, d;
//	a = 0;
//	b = 1;
//	c = 2;
//	d = 3;
//	printf("%d", a+++b+c+++d++);//��C�����У�++��������ҽ�ϵ�,�öδ���Ϊa++ + b + c++ + d++
//	return 0;
//}

//int main()
//{
//	int num = 0;
//	while (num < 100)
//	{
//		if (num % 2 == 1)
//		{
//			printf("num=%d\n", num);
//		}
//		num++;
//	}
//	return 0;
//}
//��������ķ�ʽ
//int main()
//{
//	int i = 1;
//	while (i < 100)
//	{
//		printf("%d\n", i);
//		i = i + 2;//��i+=2
//	}
//	return 0;
//}

//int main()//while��ѭ����䣬�����������ѭ��
//{
//	int a = 5;
//	while (a % 2 == 1)
//	printf("%d ", a);
//	return 0;
//}


//int main()
//{
//	int num = 4;
//	if( 5 == num )//�������ͳ�����λ�ÿ��Է�ֹ�ٸ���=���������������������Ǵ��
//	{
//		printf("�Ǻ�\n");
//	}
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 2;
//	if (a == 1)
//		if (b == 2)
//			printf("hehe\n");
//	else//else�ͽ�ԭ����δƥ���ifƥ�䡣������{}���д����ָ�
//		printf("haha\n");
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	;//��һ�������
//	return 0;
//}

//�ṹ��-���Ӷ���-�Լ����������һ������

//����һ���ṹ������
//struct Book
//{
//	char name[20];//C���Գ������
//	short price;//55
//};//;����ר�Ž���������Ͷ���ģ�����ȱ��
//
//int main()
//{
//	//���ýṹ�����ʹ���һ�������͵Ľṹ�����
//	struct Book b1={"C���Գ������",55};
//	strcpy (b1.name, "C++");//strcpy-string copy-�ַ�������-�⺯��-string.h
//	printf("%s\n", b1.name);
//	//struct Book* pb = &b1;
//	//����pb��ӡ���ҵ������ͼ۸�
//	//.    �ṹ�����.��Ա
//	//->   �ṹ��ָ��->��Ա
//	//printf("%s\n", pb->name);
//	//printf("%d\n", pb->price);
//
//	//printf("%s\n", (*pb).name);
//	//printf("%d\n", (*pb).price);
//	
//	/*printf("������%s\n", b1.name);
//	printf("�۸�%dԪ\n", b1.price);
//	b1.price = 15;
//	printf("�ı��ļ۸�%dԪ\n", b1.price);*/
//	return 0;
//}

//int main()//�Լ�д��
//{
//	printf("������C���Գ������\n");
//	printf("�۸�55Ԫ\n");
//	return 0;
//}

//int main()
//{
//	printf("%d\n", sizeof(char*));
//	printf("%d\n", sizeof(short*));
//	printf("%d\n", sizeof(int*));
//	printf("%d\n", sizeof(double*));

	//double d = 3.14;
	//double* pd = &d;
	//*pd = 5.5;
	//printf("%d\n", sizeof (pd));//32-4  64-8
	//printf("%lf\n", d);
	//printf("%lf\n", *pd);
	
	//int a = 10;//������4���ֽڵĿռ�
	////printf("%p\n", &a);
	//int* p = &a;//p��һ������-ָ�����
	////printf("%p\n", p);
	//*p = 20;//�����ò�����/��ӷ��ʲ�����
	//printf("a=%d\n", a);
	//return 0;
//}
//int main()
//{
//	int a = 2;
//	printf("%d\n", &a);
//	return 0;
// }
 

//int main()
//{
//	int arr[10] = {0};
//	printf("%d\n",sizeof (arr));
//	//int a = 10;
//	//printf("%d\n", sizeof(a));
//	//printf("%d\n", sizeof a);//�����ģ�������ʡ�ԣ��������������ԣ�����a��int��
//	//printf("%d\n", sizeof(int));
//	//printf("%d\n", sizeof (float));
//	return 0;
//}


//int Add(int x, int y)
//{
//	int z = x + y;
//	return z;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = 0;
//	sum = a + b;
//	sum = Add(a, b);
//	printf("%d\n", sum);
//	return 0;
// }


//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };//����һ��10������Ԫ�ص����飬�±�Ĭ�ϴ�0��ʼ��
//	int i = 0;
//	while (i < 10)
//	{
//		printf("%d ", arr[i]);
//		i++;
//	}
//	return 0; 
//}


//int num = 10;
//int main()
//{
//	int num = 1;
//	printf("num=%d\n", num);//ȫ�ֱ����;ֲ�����ͬ��ʱ���ֲ���������ʹ�á�
//	return 0;
//}


//int main()
//{
//	//�ַ�������־����\0��
//	//'0'-ת���ַ�-0
//	//0-����0
//	//'0'-48
//	//EOF-end of file-�ļ�������־--1
//	return 0;
//}


//#include <string.h>
//
//int main()
//{
//	char arr[] = {'b','i','t',0};//'\0'����0���С�
//	printf("%d\n", strlen(arr));
//    return 0;
//}


//int main()
//{
//	char ch[10] = "hello bit";
//	int i = 0;
//	while (i < 10)
//	{
//		printf("%d\n", ch[i]);
//		i++;
//	}
//	return 0;
//}


//int MAX(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y; 
//}
//	
//int main()
//{
//	int num1 = 10;
//	int num2 = 20;
//	int max = 0;
//	max = MAX(num1, num2);
//	printf("max=%d\n", max);
//	return 0;
//}


//int main()
//{
//	int a = 0;
//	int b = ~a;//b���з����������ͣ�~�Ƕ�����λ��λȡ�����������ڴ��д洢���ǲ��롣ԭ��->���루���λ���䣬����λ��λȡ����->���루����+1����
//	printf("%d\n", b);//��ӡʹ�õ����������ԭ�롣
//	return 0;
//}
