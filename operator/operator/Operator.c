#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//Arithmetic operator
//add, subtract,multiply,divide and remainder

//int main()
//{
	//float a = 6 / 5;           //Both ends of the number must have a decimal to convert the result to the decimal
	//printf("%f\n", a);
	//solution:
	//float a = 6.0 / 5;
	//printf("%f\n", a);       //The decimal of 1.2 is printed.
	//return 0;

//}

//int main()
//{
//	int a = 7 % 3;          //remainder opeartor can't use the decimal number
//	printf("%d\n", a); 
//	return 0;
//}






//Shift operator
//>>   <<

//int main()
//{
//
//	int a = 2;
//
//	int b = a << 1;           //Move the binary bit of a one bit to the left
//
//	printf("%d\n", b);
//
//
//	return 0;
//}

// but ">>" exist two conditions where are logical right shift and arithmetic right shift.



//Bit operation:The operand must be an integer.

//int main()
//{
//	int a = 3;
//	int b = 5;
//	// & - 按（二进制）位与
//	//两个二进制位都是1才补1,最后一位的1才是两个，所以C被赋值1.
//	int c = a & b;
//
//	int d = a | b;
//	//| - 按（二进制）位或
//	//两个二进制位 有1则填1,倒数三个都存在1，所以d被赋值7.
//
//	int e = a ^ b;
//	//^ - 对应的二进制位异或
//	//规则：相同为0，相异位1.所以为6.
//	printf("%d\n", c);
//
//	printf("%d\n", d);
//
//	printf("%d\n", e);
//	return 0;
//
//}

//赋值操作符   =  +=  -=  *= /= >>= <<= %=

//int main()
//{
//	int a = 10;
//	a = 100;
//	a = a + 100;  //1               //一个=是赋值 两个=是判断
//	a += 100;     //2
//	a = a >> 3; //1
// 	a >>= 3;	//2
//	return 0;
//
//} 



//单目操作符（！ - + & sizeof ~ ++ -- * ）

//int main()
//{
//	int flag = 5;
//	//flag为真，打印hehe
//	if (flag)
//	{
//		printf("hehe\n");
//	}
//	//flag为假，打印haha
//	if (!flag)
//	{
//		printf("haha\n");
//	}
//
//	return 0;
//}
//

//
//int main()
//{
//	int a = 10;
//	char arr[10] = { 0 };
//
//	printf("%d\n", sizeof(a));   //计算a的内存大小
//	printf("%d\n", sizeof(int));  //计算int的内存大小
//	printf("%d\n", sizeof a);          // 对于变量名可以省略括号 int则不行
//
//	//<<<<<证明sizeof是一个操作符 而不是一个函数
//	//如果sizeof是一个函数，后面的（）则不能够被省略
//
//	printf("%d\n", sizeof(arr));    //char[10]类型占10个内存大小 但是当int[10]则占40个   
//
//
//	return 0;
//
//}


//int main()
//{
//	int a = 10;
//	printf("%p\n", &a); //取出a的地址
//
//	int * pa = &a;  //pa用来存放地址，所以pa是一个指针变量 ,*说明pa是一个指针变量
//	*pa = 20;      //此时*为解引用操作符
//
//	printf("%d\n", a);
//
//
//	return 0;
//}

//int main()
//{
//	int a =(int)3.14;        //强制类型转换
//
//	printf("%d\n", a);
//
//	return 0;
//}
//



//int main()
//{
//	int a = 3;
//	int b = 5;
//	/*if (a == b);
//	if (a!=b);
//	if (a > b);
//	if (a < b);
//	if (a >= b);*/
//                        =赋值  ==判断相等   比较两个字符串相等不能使用==
//
//
//	return 0;
//}


//逻辑操作符 && ||
//int main()
//{
//	int a = 3;
//	int b = 0;        
//	if (a && b)         //a,b同时为真 为真  逻辑与
//	{
//		printf("123\n");
//	}
//
//	if (a||b)               //一个为真就是真 逻辑或
//	{
//		printf("456\n");
//	}
//
//	return 0;
//}





//条件操作符 exp1?exp2:exp3

//int main()
//{
//	int a = 3;
//	int b = 0;
//	if (a>5)
//	{
//		b = 1;
//
//	}
//	else
//	{
//		b = -1;
//	}
//	//等于下面语句
//
//	b = (a > 5 ? 1: -1);      //EXP1为真赋值EXP2否则则赋值EXP3  
//
//
//	return 0;
//}


//逗号表达式 EXP1,EXP2,EXP3,...EXPN

int main()
{
	int a = 3;
	int b = 5;
	int c = 0;
	int d = (c = 5, a = c + 3, b = a - 4, c += 5);   //由逗号隔开的就是逗号表达式

	//逗号表达式--从左向右依次计算，整个表达式的结果取决于最后一个的结果


	return 0;
}