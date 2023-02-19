#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include"test.h"

//void f(int i)
//{
//	printf("%d\n", i);
//}
//
//int main()
//{
//	int i = 0;
//	int a[] = { 1,2 };
//	printf("%p\n", &i);
//	printf("%p\n", main);
//	printf("%p\n", f);                      //函数的地址
//
//	void(*pf)() = f;  //定义一个pf的变量，类型是指向f函数的指针
//
//	f(10); 
//	(*pf)(20);           //使用函数指针调用函数f
//
//	return 0;
//}

void f(int i)
{

	printf("%d\n", i);
}
void g(int i)
{

	printf("%d\n", i);
}

int main()
{
	int i = 0;
	void(*fa[])(int) = { f,g };
	scanf("%d", &i);
	if (i >= 0 && i < sizeof(fa) / sizeof(fa[0]))
	{
		(*fa[i])(0);
	}


	return 0;
}