#include<stdio.h>

//int main()
//{
//	double a = 5 % 2;//��2��1
//	printf("a = %lf", a);
//	return 0;
//}

//int main()
//{
//	int a = 16;
//	//>>--���Ʋ�����
//	//�ƶ����Ƕ�����λ
//	int b = a >> 2;
//	printf("b = %d", b);
//	return 0;
//}

//int main()
//{
//	int a = -1;
//	int b = a >> 1;
//	printf("%d\n", b);
//	return 0;
//}

//int main()
//{
//	int a = 5;
//	int b = a << 1;
//	printf("b = %d\n", b);
//	return 0;
//}

//��д����ʵ�֣���һ�������洢���ڴ��еĶ�������1�ĸ���
//��һ�֣�
//int main()
//{
//	int a = 0;
//	int count = 0;
//	scanf_s("%d", &a);//-1?
//	while (a)
//	{
//		if (a % 2 == 1)
//			count++;
//		a = a / 2;
//	}
//	printf("count = %d\n", count);
//	return 0;
//}

//�ڶ��֣�
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int count = 0;
//	int i = 0;
//	scanf_s("%d", &a);
//	for (i = 0; i < 32; i++)
//	{
//		b = a >> i;
//		if (1 == (b & 1))
//			count++;
//		
//	}
//	printf("count = %d\n", count);
//	return 0;
//}

//int main()
//{
//	int a = 20;
//	int* p = &a;
//	*p = 99;
//	printf("%d\n", *p);
//	return 0;
//}

//int main()
//{
//	int a = 4;//int - 4 bite
//	char b = 'a';//char - 1 bite
//	char* p = &b;//char* - 4 bite
//	int arr[10] = { 0 };//int - 4 bite * 10 = 40 bite
//	printf("%d\n", sizeof(a));//a�����ſ���ȥ��
//	printf("%d\n", sizeof(int));//int�����Ų���ȥ��
//
//	printf("%d\n", sizeof(b));
//	printf("%d\n", sizeof(char));
//
//	printf("%d\n", sizeof(p));
//	printf("%d\n", sizeof(char*));
//
//	printf("%d\n", sizeof(arr));
//	printf("%d\n", sizeof(int[10]));
//	return 0;
//}

//int main()
//{
//	short s = 0;
//	int a = 10;
//	printf("%d\n", sizeof(s = a + 5));
//	printf("%d\n", s);
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	printf("%d\n", a++);//����++����ʹ�ã���++
//	printf("%d\n", ++a);//ǰ��++����++����ʹ��
//	return 0;
//}

//int main()
//{
//	int a = (int)3.14;//(����)ǿ������ת����int a = int (3.14)//error
//	printf("%d\n", a);
//	return 0;
//}

//int main()
//{
//	int i = 0, a = 0, b = 2, c = 3, d = 4;
//	//i = a++ && ++b && d++;//a++Ϊ�٣���߲�������
//	//i = a++ || ++b || d++;//a++Ϊ�棬��߲�������
//
//	/*i = a++ && ++b || d++;
//	printf("i = %d\n", i);*///�Լ���˼��-Ӧ������ĳһ���߼�����߼������һ��ֱ�Ϊ�ٺ��棬��һ��㲻������
//
//	printf("a = %d \nb = %d \nc = %d \nd = %d \n", a, b, c, d);
//	return 0;

//int main()
//{
//	int a = 2;
//	int b = 3;
//	int max = 0;
//	max=(a > b ? 3 : 2);//exp ? exp1 : exp2 ��Ŀ��������exp������ȡexp1������ȡexp2
//	/*if (a > b)
//		max = a;
//	else
//		max = b;*/
//	printf("max = %d\n", max);
//	return 0;
//}

//struct Stu 
//{
//	char name[10];
//	int age;
//	char id[20];
//};

//int main()
//{
//	//ʹ��struct Stu������ʹ�����һ��ѧ������s1������ʼ��
//	struct Stu s1 = { "scu_Lee",24,"2023222055185" };
//	struct Stu* ps = &s1;
//
//	printf("%s\n", ps->name);//��һ��
//	printf("%d\n", ps->age);
//	printf("%s\n", ps->id);
//
//	printf("%s\n", (*ps).name);//�ڶ���
//	printf("%d\n", (*ps).age);
//	printf("%s\n", (*ps).id);
//
//	printf("%s\n", s1.name);//������
//	printf("%d\n", s1.age);
//	printf("%s\n", s1.id);
//	//�ṹ�����.��Ա��
//	return 0;
//}

//��ʽ��������-��������
//int main()
//{
//	char a = 3;
//	//00000000000000000000000000000011
//	//00000011 - a
//	char b = 127;
//	//00000000000000000000000001111111
//	//01111111 - b
//
//	//a��b������
//	//00000000000000000000000000000011
//	//00000000000000000000000001111111
//	//00000000000000000000000010000010
//	char c = a + b;
//	//10000010 - c
//	//11111111111111111111111110000010 - ����
//	//11111111111111111111111110000001 - ����
//	//10000000000000000000000001111110 - ԭ��
//	//-126
//	printf("%d\n", c);//%d��ӡ���ͣ�c��Ҫ����������
//	return 0;
//}

//int main()
//{
//	char a = 0xb6;//10110110
//	short b = 0xb600;
//	int c = 0xb6000000;
//	if (a == 0xb6)
//		printf("a");//�����������������ԣ�=������ӡ��bͬ��
//	if (b == 0xb600)
//		printf("b");
//	if (c == 0xb6000000)
//		printf("c");
//	return 0;
//}

//int main()
//{
//	char c = 1;
//	printf("%u\n", sizeof(c));//1
//	printf("%u\n", sizeof(+c));//+c���������㣬������Ҫ������������Ϊ4
//	printf("%u\n", sizeof(!c));//�߼����㣨&& || �������ᷢ������������
//	//������������� +��-��*��/ �ȣ�
//	//�Ƚ���������� == ��<��> �ȣ�
//	//λ��������� & �� | �� ^ �� << �� >> �ȣ�
//	//����������ᷢ����������
//	return 0;
//}

//int main()
//{
//	int a = 1;
//	a = a + --a;
//	printf("%d\n", a);//����
//	return 0;
//}

//int main()
//{
//	int i = 10;
//	i = i-- - --i * (i = -3) * i++ + ++i;
//	printf("i = %d\n", i);//����
//	return 0;
//}