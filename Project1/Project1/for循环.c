#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
// for grammar
//for (exp1;exp2;exp3)   exp1:initialization exp2:estimate exp3:adjustment
//   loop statement 循环语句
//1.不可在for循环体内修改循环变量，防止for循环失去控制
//2.2.建议for语句的循环控制变量的取值采用"前闭后开区间"的写法
//int main()
//{
//	int i = 0;   
//	for (i = 1; i <= 10; i++)        
//	{
//		printf("%d\n", i);
//
//	}
//
//
//	return 0;
//}

//1.不可在for循环体内修改循环变量，防止for循环失去控制
//2.2.建议for语句的循环控制变量的取值采用"前闭后开区间"的写法

//Case 1:

/*
int main()
{
	int i = 0;
	for (i = 1; i <= 10; i++)
	{
		printf("%d", i);           结果为无限循环的6
		i = 5;              

	}


	return 0;
}
*/

//Case 2：

//int main()
//{
//	int arr[10] = { 0 };
//	//数组下标是从0开始的
//	int i = 0;
//	for ( i = 0; i < 10; i++)              //左闭右开 0为第一位 意义在循环10次
//	{
//		printf("%d ", arr[i]);
//	}
//
//
//
//
//	return 0;
// }


//int main()
//{
//	//判断部分的省略——判断部分恒为真
//	for (;;)
//	{
//		printf("hehe\n");
//	}
//
//
//
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int j = 0;
//	for ( i = 0; i <3; i++)
//	{
//		for (j = 0; j < 3; j++)           //循环了3*3=9次(循环嵌套)
//		{
//			printf("hehe\n");
//		}
//	}
//
//
//	return 0;
//}

