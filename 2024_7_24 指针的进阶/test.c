#include <stdio.h>

//void test(int arr[])
//{
//	int sz = 0;
//	sz = sizeof(arr) / sizeof(arr[0]);
//	printf("%d\n", sz);
//}
//
//int main()
//{
//	int arr[10] = { 0 };
//	test(arr);
//	return 0;
//}


//int main()
//{
//	char ch = "w";
//	char* pc = &ch;
//	return 0;
//}


//int main()
//{
//	char arr[] = "abcdef";
//	char* pc = arr;
//	printf("%s\n", arr);
//	printf("%s\n", pc);
//	return 0;
//}


//int main()
//{
//	const char* p = "abcdef";//"abcdef"�����ַ���
//	//*p = 'w';
//	printf("%c\n", *p);
//	printf("%s\n", p);
//	return 0;
//}


//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "abcdef";
//	const char* p1 = "abcdef";
//	const char* p2 = "abcdef";
//	if (p1 == p2)
//	{
//		printf("hehe\n");
//	}
//	else
//	{
//		printf("haha\n");
//	}
//	if (arr1 == arr2)
//	{
//		printf("hehe\n");
//	}
//	else
//	{
//		printf("haha\n");
//	}
//	return 0;
//}


//int main()
//{
//	int a = 10, b = 20, c = 30, d = 40;
//	int* arr[4] = { &a,&b,&c,&d };
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		printf("%d ", *(arr[i]));
//	}
//	return 0;
//}


//int main()
//{
//	int arr1[] = { 1,2,3,4,5,6 };
//	int arr2[] = { 2,3,4,5,6,7 };
//	int arr3[] = { 3,4,5,6,7,8 };
//	int* parr[] = { arr1,arr2,arr3 };//ָ������
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			printf("%d ", (*parr[i] + j));
//		}
//		printf("\n");
//	}
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int(*p)[10] = &arr;//����ĵ�ַҪ������
//	//�����p��������ָ��
//	return 0;
//}


//int main()
//{
//	char* arr[5];
//	char* (*pa)[5] = &arr;
//
//	int arr2[10] = { 0 };
//	int(*pa2)[10] = &arr2;
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;
//	//1.
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	//2.
//	int(*pa)[10] = &arr;
//	int j = 0;
//	for (j = 0; j < 10; j++)
//	{
//		printf("%d ", *(*pa + j));//*pa == arr
//	}
//	//3.
//	//int(*pa)[10] = &arr;
//	int k = 0;
//	for (k = 0; k < 10; k++)
//	{
//		printf("%d ", (*pa)[k]);
//	}
//	return 0;
//}


////�������������ʽ
//void print1(int arr[3][5], int x, int y)
//{
//	int i = 0;
//	for (i = 0; i < x; i++)
//	{
//		int j = 0;
//		for (j = 0; j < y; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//
////������ָ�����ʽ
//void print2(int(*p)[5], int x, int y)
//{
//	int i = 0;
//	for (i = 0; i < x; i++)
//	{
//		int j = 0;
//		for (j = 0; j < y; j++)
//		{
//			printf("%d ", p[i][j]);
//			//printf("%d ", *(p[i] + j));
//			//printf("%d ", *(*(p + i) + j));
//			//printf("%d ", (*(p + i))[j]);
//		}
//		printf("\n");
//	}
//}
//
//int main()
//{
//	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };
//	print1(arr, 3, 5);
//	print2(arr, 3, 5);
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	int* p = arr;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));
//		printf("%d ", *(arr + i));
//		printf("%d ", p[i]);
//		printf("%d ", arr[i]);//arr[i] == p[i] == *(arr+i) == *(p+i)
//	}
//	return 0;
//}

//int arr[5];//arr��һ��5��Ԫ�ص�����
//int* parr1[10];//parr1��һ�����飬������10��Ԫ�أ�ÿ��Ԫ�ص�������int*��parr1��ָ������
//int(*parr2)[10];//parr2��һ��ָ�룬��ָ��ָ����һ�����飬������10��Ԫ�أ�ÿ��Ԫ��������int��parr2������ָ��
//int(*parr3[10])[5];//parr3��һ�����飬��������10��Ԫ�أ�ÿ��Ԫ����һ������ָ�룬������ָ��ָ���������5��Ԫ
//                   //�أ�ÿ��Ԫ����int����


//void test1(int* p)
//{
//
//}
//
//void test2(char* p)
//{
//
//}
//
//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	test1(&a);//ok
//	test1(pa);//ok
//
//	char ch = 'w';
//	char* pc = &ch;
//	test2(&ch);//ok
//	test2(pc);//ok
//	return 0;
//}


//void test(int** p)
//{
//
//}
//
//int main()
//{
//	int* ptr;
//	int** pp = &ptr;
//	test(&ptr);
//	test(pp);
//	int* arr[10];
//	test(arr);//ָ������Ҳ����
//	return 0;
//}


//����ָ�� - ָ�������ָ��
//����ָ�� - ָ������ָ��


//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int arr[10] = { 0 };
//	int(*p)[10] = &arr;
//	printf("%d\n", Add(a, b));
//
//	//&������ �� ������ ���Ǻ����ĵ�ַ
//	printf("%p\n", Add);
//	printf("%p\n", &Add);
//
//	int (*pa)(int, int) = Add;
//	printf("%p\n", pa);
//	printf("%d\n", (*pa)(2, 3));
//	return 0;
//}


//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int (*pa)(int, int) = Add;
//	printf("%d\n", pa(2, 3));
//	printf("%d\n", Add(2, 3));
//	printf("%d\n", (*pa)(2, 3));//���ֵȼ�
//	//printf("%d\n", *pa(2, 3));//error
//	return 0;
//}


//void Print(char* str)
//{
//	printf("%s\n", str);
//}
//
//int main()
//{
//	void(*p)(char*) = Print;
//	(*p)("Is this your handbag?");
//	return 0;
//}


//����1
//(*(void(*)())0)()//��0ǿ������ת���ɣ�void(*)()����ָ������ - 0����һ�������ĵ�ַ
                   //����0��ַ���ĸú���
//����2
//void(*     signal(int, void(*)(int))     )(int);//void(*)(int) - ����ָ�룻void(*      )(int) - ����ָ��
//signal��һ����������
//signal�����Ĳ�����������һ�������ͣ�һ���Ǻ���ָ�����ͣ��ú���ָ��Ĳ���������int������������void
//signal�����ķ�������Ҳ��һ������ָ�룬�ú���ָ��Ĳ���������int������������void

//void(*signal(int, void(*)(int)))(int)
//typedef void(*pfun_t)(int);
//pfun_t signal(int, pfun_t);
//typedef unsigned int u_int;


//int Add(int x, int y)
//{
//    int z = 0;
//    z = x + y;
//    return z;
//}
//
//int Sub(int x, int y)
//{
//    int z = 0;
//    z = x - y;
//    return z;
//}
//
//int Mul(int x, int y)
//{
//    int z = 0;
//    z = x * y;
//    return z;
//}
//
//int Div(int x, int y)
//{
//    int z = 0;
//    z = x / y;
//    return z;
//}
//
//int main()
//{
//    //��Ҫһ�����飬��������ܴ��4�������ĵ�ַ - ����ָ������
//    int (*p)(int, int) = Add;//Sub/Mul/Div
//    int(*parr[4])(int, int) = { Add,Sub,Mul,Div };//����ָ������
//    int i = 0;
//    for (i = 0; i < 4; i++)
//    {
//        printf("%d\n", parr[i](2, 3));//5 -1 6 0
//        //printf("%d\n", (*parr[i])(2, 3));//�ȼ�
//    }
//    return 0;
//}


//char* my_strcpy(char* dest, const char* src);
//1.дһ������ָ�� pf,�ܹ�ָ��my_strcpy
//2.дһ������ָ������ pfArr���ܹ����4��my_strcpy�����ĵ�ַ
//1. char* (*pf)(char*, const char*);
//2. char* (*pfArr[4])(char*, const char*);// = { my_strcpy };


//������

//void menu()
//{
//    printf("      1.Add      2.Sub      \n");
//    printf("      3.Mul      4.Div      \n");
//    printf("      5.Xor      0.exit     \n");
//}
//
//int Add(int x, int y)
//{
//    int z = 0;
//    z = x + y;
//    return z;
//}
//
//int Sub(int x, int y)
//{
//    int z = 0;
//    z = x - y;
//    return z;
//}
//
//int Mul(int x, int y)
//{
//    int z = 0;
//    z = x * y;
//    return z;
//}
//
//int Div(int x, int y)
//{
//    int z = 0;
//    z = x / y;
//    return z;
//}
//
//int Xor(int x, int y)
//{
//    int z = 0;
//    z = x ^ y;
//    return z;
//}

//��һ�֣�
//int main()
//{
//    int input = 0;
//    int x = 0;
//    int y = 0;
//    do
//    {
//        menu();
//        printf("��ѡ��:>\n");
//        scanf_s("%d", &input);
//        switch (input)
//        {
//        case 1:
//            printf("����������������:>");
//            scanf_s("%d%d", &x, &y);
//            printf("%d\n", Add(x, y));
//            break;
//        case 2:
//            printf("����������������:>");
//            scanf_s("%d%d", &x, &y);
//            printf("%d\n", Sub(x, y));
//            break;
//        case 3:
//            printf("����������������:>");
//            scanf_s("%d%d", &x, &y);
//            printf("%d\n", Mul(x, y));
//            break;
//        case 4:
//            printf("����������������:>");
//            scanf_s("%d%d", &x, &y);
//            printf("%d\n", Div(x, y));
//            break;
//        case 5:
//            printf("����������������:>");
//            scanf_s("%d%d", &x, &y);
//            printf("%d\n", Xor(x, y));
//            break;
//        case 0:
//            printf("�˳�\n");
//            break;
//        default:
//            printf("ѡ�����\n");
//            break;
//        }
//    } while(input);
//    return 0;
//}

//�ڶ���:
//int main()
//{
//    int input = 0;
//    int x = 0;
//    int y = 0;
//    int(*pfArr[6])(int, int) = { 0,Add,Sub,Mul,Div,Xor };//pfArr��һ������ָ������ - ת�Ʊ�
//    do
//    {
//        menu();
//        printf("��ѡ��:>");
//        scanf_s("%d", &input);
//        if (input >= 1 && input <= 5)
//        {
//            printf("����������������:>");
//            scanf_s("%d%d", &x, &y);
//            int ret = pfArr[input](x, y);
//            printf("%d\n", ret);
//        }
//        else if (input == 0)
//        {
//            printf("�˳�\n");
//        }
//        else
//        {
//            printf("�������������ѡ��\n");
//        }
//    } while (input);
//    return 0;
//}

//�����֣�

//void calc(int(*pf)(int, int))
//{
//    int x = 0;
//    int y = 0;
//    printf("����������������:>");
//    scanf_s("%d%d", &x, &y);
//    printf("%d\n", pf(x, y));
//}
//
//int main()
//{
//    int input = 0;
//    do
//    {
//        menu();
//        printf("��ѡ��:>\n");
//        scanf_s("%d", &input);
//        switch (input)
//        {
//        case 1:
//            calc(Add);
//            break;
//        case 2:
//            calc(Sub);
//            break;
//        case 3:
//            calc(Mul);
//            break;
//        case 4:
//            calc(Div);
//            break;
//        case 5:
//            calc(Xor);
//            break;
//        case 0:
//            printf("�˳�\n");
//            break;
//        default:
//            printf("ѡ�����\n");
//            break;
//        }
//    } while(input);
//    return 0;
//}


//int Add(int x, int y)
//{
//    return x + y;
//}
//
//int main()
//{
//    int arr[10] = { 0 };
//    int(*p)[10] = &arr;//ȡ������ĵ�ַ
//
//    int(*pf)(int, int);//����ָ��
//    int(*pfArr[4])(int, int);//pfArr��һ������ - ����ָ�������
//    int(*(*ppfArr)[4])(int, int) = &pfArr;
//    //ppfArr��һ��ָ�򣨺���ָ�����飩��ָ��
//    //ppfArr��һ������ָ�룬ָ��ָ���������4��Ԫ��
//    //ָ��������ÿ��Ԫ�ص�������һ������ָ��int(*)(int,int)
//    return 0;
//}


//�ص�����
//void Print(char* p)
//{
//    printf("Ki-Fung:%s", p);
//}
//
//void test(void(*p)(char*))
//{
//    printf("Li:what?\n");
//    p("pardon?");
//}
//
//int main()
//{
//    test(Print);
//    return 0;
//}


//int Add(int x, int y)
//{
//    return x + y;
//}
//
//int main()
//{
//    //ָ������
//    int* arr[10];
//    //����ָ��
//    int*(*pa)[10] = &arr;
//    //����ָ��
//    int(*pAdd)(int, int) = Add;//&Add
//    int sum = (*pAdd)(1, 2);
//    int sum = pAdd(1, 2);
//             //Add(1,2)
//    printf("sum = %d\n", sum);
//    //����ָ�������
//    int(*pArr[5])(int, int);
//    //ָ����ָ�������ָ��
//    int(*(*ppArr)[5])(int, int) = &pArr;
//    return 0;
//}


//int main()
//{
//    int a = 10;
//    //int* pa = &a;
//    //char* pc = &a;
//    //char ch = 'w';
//    void* p = &a;
//    //*p = 0;//error
//    //p++;error
//    //p = &ch;
//    //void* ���͵�ָ����Խ����������͵ĵ�ַ
//    //void* ���͵�ָ�벻���Խ��н����ò���
//    //void* ���͵�ָ�벻���Խ���+-�����Ĳ���
//    return 0;
//}


//ð������int��
//void bubble_sort(int arr[],int sz)
//{
//    int i = 0;
//    for (i = 0; i < sz - 1; i++)
//    {
//        int j = 0;
//        for (j = 0; j < sz - 1 - i; j++)
//        {
//            if (arr[j] > arr[j + 1])
//            {
//                int tmp = arr[j+1];
//                arr[j + 1] = arr[j];
//                arr[j] = tmp;
//            }
//        }
//    }
//}
//
////struct stu
////{
////    char name[20];
////    short age;
////};
//
//int main()
//{
//    int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
//    int sz = sizeof(arr) / sizeof(arr[0]);
//
//    //struct stu n[3] = { {"zhangsan",22},{"lisi",23},{"wangwu",24} };//int����ð�������Ų���
//    //float f[] = { 0.1,0.2,0.3,0.4,0.5 };//int����ð�������Ų���
//
//    bubble_sort(arr,sz);
//    int i = 0;
//    for (i = 0; i < 10; i++)
//    {
//        printf("%d ", arr[i]);
//    }
//    return 0;
//}


//ð�������Ż�������������������

//struct stu
//{
//    char name[20];
//    int age;
//};
//
//int cmp_int(const void* e1, const void* e2)
//{
//    //�Ƚ���������ֵ
//    return *(int*)e1 - *(int*)e2;//e1-e2Ϊ�������У�e2-e1Ϊ��������
//}
//
//int cmp_stu_by_age(const void* e1, const void* e2)
//{
//    return ((struct stu*)e1)->age - ((struct stu*)e2)->age;
//}
//
//void swap(char* buf1, char* buf2, int width)
//{
//    int i = 0;
//    for (i = 0; i < width; i++)
//    {
//        char tmp = *buf1;
//        *buf1 = *buf2;
//        *buf2 = tmp;
//        buf1++;
//        buf2++;
//    }
//}
//
//void bubble_sort(void* base, int sz, int width, int(*cmp)(void* e1, void* e2))
//{
//    int i = 0;
//    //����
//    for (i = 0; i < sz - 1; i++)
//    {
//        //ÿһ�˱Ƚ϶���
//        int j = 0;
//        for (j = 0; j < sz - 1 - i; j++)
//        {
//            //����Ԫ�رȽ�
//            if (cmp((char*)base+j*width,(char*)base+(j+1)*width)>0)
//            {
//                //����
//                swap((char*)base + j * width, (char*)base + (j + 1) * width,width);
//            }
//        }
//    }
//}
//
//void test1()
//{
//    int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
//    int sz = sizeof(arr) / sizeof(arr[0]);
//    bubble_sort(arr, sz,sizeof(arr[0]),cmp_int);
//    int i = 0;
//    for (i = 0; i < sz; i++)
//    {
//        printf("%d ", arr[i]);
//    }
//    printf("\n");
//}
//
//void test2()
//{
//    struct stu mate[3] = { {"zhangsan",22},{"lisi",23},{"wangwu",24} };
//    int sz = sizeof(mate) / sizeof(mate[0]);
//    bubble_sort(mate, sz, sizeof(mate[0]), cmp_stu_by_age);
//    int i = 0;
//    for (i = 0; i < sz; i++)
//    {
//        printf("%s ", mate[i].name);
//        printf("%d ", mate[i].age);
//    }
//    printf("\n");
//}
//
//int main()
//{
//    test1();
//    test2();
//    return 0;
//}


//�⺯��qsort����
////void qsort( void *base, size_t num, size_t width, int (__cdecl *compare )(const void *elem1, const void *elem2 ) );
////��һ���������������������Ԫ�ص�ַ
////�ڶ��������������������Ԫ�ظ���
////�����������������������ÿ��Ԫ�صĴ�С - ��λ���ֽ�
////���ĸ��������Ǻ���ָ�룬�Ƚ�����Ԫ�ص����ú����ĵ�ַ - �������ʹ�����Լ�ʵ��
////            ����ָ������������ǣ����Ƚ�����Ԫ�صĵ�ַ


//#include<stdlib.h>
//int cmp_int(const void* e1, const void* e2)
//{
//    return *(int*)e1 - *(int*)e2;//e1-e2Ϊ�������У�e2-e1Ϊ��������
//}
//
//int main()
//{
//    int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
//    int sz = sizeof(arr) / sizeof(arr[0]);
//    //struct stu n[3] = { {"zhangsan",22},{"lisi",23},{"wangwu",24} };//int����ð�������Ų���
//    float f[] = { 0.1,0.2,0.3,0.4,0.5 };//int����ð�������Ų���
//    qsort(arr, sz, sizeof(arr[0]), cmp_int);//qsort - �⺯��
//    int i = 0;
//    for (i = 0; i < 10; i++)
//    {
//        printf("%d ", arr[i]);
//    }
//    return 0;
//}


//#include<stdlib.h>
//#include<string.h>
//
//int cmp_int(const void* e1, const void* e2)
//{
//    return *(int*)e1 - *(int*)e2;//e1-e2Ϊ�������У�e2-e1Ϊ��������
//}
//
//void test1()
//{
//    int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
//    int sz = sizeof(arr) / sizeof(arr[0]);
//    qsort(arr, sz, sizeof(arr[0]), cmp_int);
//    int i = 0;
//    for (i = 0; i < 10; i++)
//    {
//        printf("%d ", arr[i]);
//    }
//    printf("\n");
//}
//
//int cmp_float(const void* e1, const void* e2)
//{
//    if (*(float*)e1 == *(float*)e2)
//        return 0;
//    else if (*(float*)e1 < *(float*)e2)
//        return -1;
//    else
//        return 1;
//    //return ((int)(*(float*)e1 - *(float*)e2));//Ҳ������return (int)(*(float*)e1 - *(float*)e2);����ǿ������ת����ʧ���ȣ�����5.1��5.3��5.2��������
//}
//
//void test2()
//{
//    float f[] = { 2.0,1.5f,7.8f,5.9f,5.6f,5.2f,9.9f };//�������float����Ϊ2.0��3.0�Ȳ��ᱨ������2.2��3.5���ֻᱨ��������Ĭ��Ϊdouble���ͣ�float����дΪ2.2f��3.5f���ᱨ��
//    int sz = sizeof(f) / sizeof(f[0]);
//    qsort(f, sz, sizeof(f[0]), cmp_float);
//    int i = 0;
//    for (i = 0; i < sz; i++)
//    {
//        printf("%f ", f[i]);
//    }
//    printf("\n");
//}
//
//
//struct stu
//{
//    char name[20];
//    int age;
//};//���λ�ò��ᱨ��
//
//int cmp_stu_by_age(const void* e1, const void* e2)
//{
//    return ((struct stu*)e1)->age - ((struct stu*)e2)->age;
//}
//
//void test3()
//{
//    struct stu mate[3] = { {"zhangsan",26},{"lisi",28},{"wangwu",24} };
//    int sz = sizeof(mate) / sizeof(mate[0]);
//    qsort(mate, sz, sizeof(mate[0]), cmp_stu_by_age);//���ʣ�ΪʲôF10ֱ������qsort���Ǽ���������ʾ������mate[]������F11�����qsort��returnѭ���õ����η���ֵ�󣬺���ĳ���ִ��ֱ�����������������������Ļ�ϴ�ӡ�������ĳ�������
//    int i = 0;
//    for (i = 0; i < sz; i++)
//    {
//        printf("%s ", mate[i].name);
//        printf("%d\n", mate[i].age);
//    }
//    printf("\n");
//}
//
//int cmp_stu_by_name(const void* e1, const void* e2)
//{
//    //�Ƚ����־��ǱȽ��ַ���
//    //�ַ����Ƚϲ���ֱ����><=���Ƚϣ�Ӧ����strcmp����
//    return strcmp(((struct stu*)e1)->name,((struct stu*)e2)->name);
//}
//
//void test4()
//{
//    struct stu mate[3] = { {"zhangsan",22},{"lisi",23},{"wangwu",24} };
//    int sz = sizeof(mate) / sizeof(mate[0]);
//    qsort(mate, sz, sizeof(mate[0]), cmp_stu_by_name);
//    int i = 0;
//    for (i = 0; i < sz; i++)
//    {
//        printf("%s ", mate[i].name);
//        printf("%d\n", mate[i].age);
//    }
//    printf("\n");
//}
//
////struct stu
////{
////    char name[20];
////    short age;
////};//�ṹ�庯�����ܶ�������������;�ڵ���test3��4ʱ���ṹ�庯�������λ�ûᱨ��
//
//int main()
//{
//    test1();
//    printf("\n");
//    test2();
//    printf("\n");
//    test3();
//    printf("\n");
//    test4();
//    printf("\n");
//    return 0;
//}