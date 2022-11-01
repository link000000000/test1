#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<windows.h>
#include<stdlib.h>
#include<time.h>


//void print(unsigned  int n)
//{
//	if (n>9)
//	{
//		print(n / 10);
//	}
//	printf("%d  ", n % 10);
//}
//
//int main()
//{
//	unsigned int num = 0;
//	scanf("%u", &num);       //1234
//
//	print(num);     //打印参数部分数字的每一位
//
//
//	return 0;
//}
//
//

//int my_strlen(char* str)
//{
//	int i = 0;
//	while (*str != '\0')
//	{
//		i++;
//		str++;
//	}
//	return i;
//
//}
//
//
//
//int main()
//{
//	char arr[] = "hello world";
//
//	printf("the array has %d character\n",my_strlen(arr));
//
//
//	return 0;
//}
//

//int my_strlen(char* str)
//{
//	if (*str != '\0')
//	{
//		return 1 + my_strlen(1 + str);
//
//	}
//	else
//	{
//		return 0;
//	}
//}
//
//
//int main()
//{
//	char arr[] = "hello world";
//
//	printf("This array has %d characters\n",my_strlen(arr));
//	return 0;
//}
//

//
//int main()
//{
//	int n = 0;
//	printf("what number do you want to calculate?\n");
//	scanf("%d", &n);
//	int i = 0;
//	unsigned long long int count = 1;
//	for ( i = 1; i <= n; i++)
//	{
//		count = count * i;
//	}
//	printf("%lld", count);
//	return 0;
// }
//int factorial(int x)
//{
//	if (x<=1)
//	{
//		return 1;
//	}
//	else
//	{
//		return x * factorial(x - 1);
//	}
//}
//
//
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//
//	printf("%d", factorial(n));
//
//
//
//	return 0;
//}



//求第N个斐波那契数
//unsigned long long int Fib(int x)
//{
//	int a = 1;
//	int b = 1;
//	unsigned long long int c = 1;
//	while (x>2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		x--;
//	}
//	return c;
//}
//
//int main()
//{
//	int wanna = 0;
//	printf("please input the number you want\n");
//	scanf("%d", &wanna);
//
//	printf("The computation result is %lld", Fib(wanna));
//
//
//	return 0;
//}



//汉诺塔递归实现


//int main()
//{
//	int count = 0;
//	int i = 0;
//	for ( i = 1; i <100; i++)
//	{
//		if (i % 10 == 9)
//		{
//			count++;
//		}
//		if (i/10 == 9)
//		{
//			count++;
//		}
//	}
//	printf("%d\n", count);
//
//	return 0;
//}
//
//
//
//int main()
//{
//	int i = 0;
//	double count = 0;
//	for ( i = 1; i < 100; i++)
//	{
//		count += (double)1 / i;
//	}
//	printf("%lf\n", count);																																																																																																																																																																																																																																																																																																																																																																																																																																																																																						\n", count);
//
//	return 0;
//}


//int main()
//{
//	int i = 1;
//	for ( i = 1; i < 9; i++)
//	{
//		int j = 0;
//		for (j = 1;  j<=i; j++)
//		{
//			printf("%d*%d=%d", i, j, i * j);
//		}
//		printf("\n");
//	}
//
//
//	return 0;
//}

//int main()
//{
//	int count = 0;
//	int j = 0;
//	int i = 0;
//	for (i = 100; i <=200; i++)
//	{
//		for (j = 2; j <= i; j++)
//		{
//			if (i%j==0)
//			{
//				break;
//			}
//		}
//		if (i==j)
//		{
//			count++;
//			printf("%d\n", i);
//		}
//	}
//	printf("%d", count);
//	return 0;
//}

//
//int main()
//{
//	int arr[10] = { 0 };
//
//	arr[4] = 5;    //The subscript refers to the operator
//
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for ( i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	for ( i = 0; i < 10; i++)
//	{
//		printf("&arr[%d] = %p \n",i, &arr[i]);   
//		//一维数组在内存中是连续存放的
//		//随着数组下标的增长，地址是由低地址到高地址变化的
//
//	return 0;
//}
//
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//
//	int* p = arr;
//	int  i = 0;
//	for ( i = 0; i < 10; i++)
//	{
//		printf("%d \n", *p);           //因为连续存放，++可以让所有的元素拿到。
//		p++;
//	}
//
//
//
//	return 0;
//}
//
//int main()
//{
//	//初始化：创建的同时进行赋值
//	//int arr[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};   //完全初始化
//	//int arr[3][4] = {1,2,3,4,5,6,7};   //不完全初始化 补0
//	//int arr[3][4] = { {1,2},{3,4},{5,6} };  // 1200 3400 5600 
//	//int arr[][4] =  { {1,2},{3,4},{5,6} };  //二维数组行可以省略 列不能省略
//
//	
//	return 0;
//}

//int main()
//{
//	int arr[][4] = { {1,2},{3,4},{5,6}, };
//	int i = 0;
//	int j = 0;
//	for ( i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}

//int main()
//{
//	{
//		int arr[][4] = { {1,2},{3,4},{5,6}, };
//		int i = 0;
//		int j = 0;
//		for (i = 0; i < 3; i++)
//		{
//			for (j = 0; j < 4; j++)
//			{
//				printf("&arr[%d][%d] = %p\n", i, j, &arr[i][j]);
//			}
//		}
//	}
//	return 0;
//}
//
//int main()
//{
//	int arr[][4] = { {1,2},{3,4},{5,6} };
//	int i = 0;
//	int j = 0;
//	int* p = &arr[0][0];
//	for ( i = 0; i < 12; i++)
//	{
//		printf("%d ", *p);
//		p++;
//	}
//
//
//	return 0;
//}


//冒泡排序
//void bubble_sort(int arr[],int sz )
//{
//	int i = 0;
//	for ( i = 0; i < sz-1; i++)
//	{
//		int j = 0;
//		for ( j = 0; j <sz - 1 - i ; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				//exchange
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//
//
//}
//
//
//int main()
//{
//	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr,sz);
//
//	return 0;
//}


int main()
{
	int n = 0;
	int i = 0;
	printf("请输入一个数\n");
	
	scanf("%d", &n);
	if (Fuction_number(n) == 1)
		printf("%d 是素数", n);
	else
		printf("%d 不是素数", n);


	return 0;
}

int Fuction_number(int n)
{
	int i = 0;
	for (i = 2; i < n; i++)
	{
	
		if (n % i == 0)
			return 0;
	}
	if (n == 1)
	{
		return 0;
	}
	return 1;

}
	