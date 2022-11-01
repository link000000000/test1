#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<string.h>
#include<windows.h>
#include<stdlib.h>
#include<time.h>


//int main()
//{
//	char arr1[40] = { 0 };
//	char arr2[] = { "hello world" };   
//
//	strcpy(arr1, arr2);  //usage:  strcpy(char * destination, const char * source)
//
//	printf("%s\n", arr1);
//
//
//	return 0;
//}



//自定义函数的构成(返回类型，函数名，函数参数）

//int get_max(int x, int y)
//{
//	int z = 0;
//	if (x>y)
//	{
//		z = x;
//	}
//	else
//	{
//		z = y;
//	}
//	return z;   //返回最大值
//}
//
//
//
//int main()
//{
//	int a = 100;
//	int b = 20;
//	int max = get_max(a, b);
//
//	printf("max = %d\n", max);
//
//
//	return 0;
//}


//交换两个整形的内容
//void Swap(int*pa, int*pb)
//{
//	int z = 0;
//	z = *pa;
//	*pa = *pb;
//	*pb = z;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("a=%d b=%d\n", a, b);
//	Swap(&a, &b);
//	printf("a=%d b=%d\n", a, b);
//	return 0;
//}
//int is_prime(int x)
//{
//	
//	int j = 0;
//	for (j = 2; j < x; j++)
//	{
//		if (x%j==0)
//		{
//			return 0;
//		}
//	}
//	return 1;
//}
//
//
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for ( i = 100; i <= 200; i++)
//	{
//		if (is_prime(i) == 1)
//		{
//			count++;
//			printf("%d\n", i);
//		}
//	}
//	printf("There are %d prime numbers\n",count);
//
//	return 0;
//}

//int is_leap_year(int a)
//{	
//	return((a % 4 == 0 && a % 100 != 0) || (a % 400 == 0));
//}
//
//int main()
//{
//	int t = 0;
//	int y = 0;
//	for (y = 1000; y<=2000; y++)
//	{
//		if (is_leap_year(y) == 1)
//		{
//			t++;
//			printf("%d\n", y);
//		}
//
//	}
//	printf("There are %d leap years\n",t);
//
//	return 0;
//}


//int array_find(int arr[], int b, int c)
//{
//	int left = 0;
//	int right = c - 1;
//	while (left<=right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid]<b)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid]>b)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			return mid;
//		}
//
//	}
//	return -1;
//}
//
//
//int main()
//{
//	int arr1[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19};
//	//If find successfully,return the subscript of position
//	//If not,return '-1'
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	int k = 3;
//	int ret = array_find(arr1,k,sz);
//	if (-1 == ret)
//	{
//		printf("can't find it\n");
//	}
//	else
//	{
//		printf("%d\n", ret);
//	}
//
//	return 0;
//}



//int array_find(int arr1[], int k, int s)
//{
//	int left = 0;
//	int right = s;
//	while (left<=right)
//	{
//		int mid = (left + right) / 2;	
//		if (arr1[mid]<k)
//		{
//			left = mid + 1;
//		}
//		else if (arr1[mid]>k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			return mid;
//
//		}
//	}
//	return -1;
//}
//
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//		
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int key = 10;
//	int ret = array_find(arr, key, sz);
//
//	if (ret==-1)
//	{
//		printf("can't find it\n");
//	}
//	else
//	{
//		printf("%d\n", ret);
//	}
//
//	return 0;
//}

//void add(int* p)
//{
//	(*p)++;
//}
//
//
//
//int main()
//{
//	int num = 0;
//	add(&num);
//	printf("%d\n", num);
//
//
//
//	add(&num);
//	printf("%d\n", num);
//
//
//	add(&num);
//	printf("%d\n", num);
//
//	
//	return 0;
//}

//函数的嵌套调用和链式访问
//void test3()
//{
//	printf("hehe\n");
//}
//
//int test2()
//{
//
//	test3();
//	return 0;
//}
//
//
//int main()
//{
//	test2();
//	return 0;
//}


//
//int main()
//{
//	int len = strlen("abc");
//
//	printf("%d\n", len);
//
//	//链式访问 把一个函数的返回值作为另一个函数的参数
//	printf("%d\n", strlen("abc"));
//	return 0;
//}

//int main()
//{
//	char arr1[20] = { 0 };
//	char arr2[] = { "hello world" };
//	printf("%s\n", strcpy(arr1, arr2));  //链式访问
//
//	return 0;
//}

//int main()
//{
//	printf("%d", printf("%d", printf("%d", 43);
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = 20;
//
//	int Add(int x,int y); //声明函数
//	
//	int c = Add(a, b);
//	printf("%d\n", c);
//	return 0;
//}
//
//int Add(int x, int y)
//{
//	return x + y;
//}

