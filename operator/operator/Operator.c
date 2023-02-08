#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

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
//
//int main()
//{
//	int a = 3;
//	int b = 5;
//	int c = 0;
//	int d = (c = 5, a = c + 3, b = a - 4, c += 5);   //由逗号隔开的就是逗号表达式
//
//	//逗号表达式--从左向右依次计算，整个表达式的结果取决于最后一个的结果
//
//
//	return 0;
//}



//下标引用，函数调用操作符:


//int main()
//{ 
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	//数组下标从0开始 1-0
//	printf("%d\n", arr[4]);  //[] -  下标引用操作符,通过下标寻找元素 两个的意义不同
//	//3+5; 两个操作数 []的操作数是两个 一个arr，一个4
//
//	
//
//	return 0;
//}

////函数的定义
//Add(int x, int y)
//{
//	return x + y;
//
//}
//void test()
//{
//
//}
//
//int main()
//{
//	//函数调用操作数
//	int a = 10;
//	int b = 20;
//
//	//函数调用
//	int ret = Add(a ,b);
//	//() - 函数调用操作符
//	test();      //只有test一个操作数
//
//
//	return 0;
//}



//结构成员操作符


//创建了一个自定义的类型
//struct Book
//{
//	char name[20];            //复杂的面向对象
//	char id[20];
//	float price;
//
//};


//int main()
//{
//	//结构成员访问操作符  .  ->
//	//复杂对象 例如书：书名，书号，出版社才能确定一个对象 而非int float
//	/*int num = 10;*/
//	//使用类型创建了一本书
//	struct Book b = {"C programming","c20202012",55};         //实例化对象
//
//	/*printf("书名：%s\n", b.name);
//
//	printf("书号: %s\n", b.id);*/    //b.XXX 用来索引结构体成员
//										//形式:结构体.成员名
//
//		
//	struct Book* pb = &b;      //字符指针
//
//	/*printf("书名：%s\n", (*pb).name);        
//
//	printf("书号: %s\n", (*pb).id);*/
//
//
//	printf("书名：%s\n", pb->name);        //pb指向了对象的name
//
//	printf("书号: %s\n", pb->id);
//
//	return 0;
//}







//隐式类型转换
//C的整形算数运算总是至少以缺整形类型的精度来进行的
//为了获得这个精度，表达式中的字符和操作数在使用之前被转换为普通整形，这种转换被称作整形提升。

//int main()
//{
//	char a = 3;
//	//00000000000000000000000000000011 放到a的类型发生截断 00000011-a
//
//	char b = 127;
//	//b发生截断 01111111-b
//
//
//	//整形提升是按照变量的数据类型的符号位进行提升的 正数0补0 负数1补1
//	//00000011  符号位为0表示正数
//	char c = a + b;
//	//发现a和b都是char类型，都没有达到int的大小，这里就会发生整形提升。
//	//00000000000000000000000011
//	//00000000000000011111111111        
//	
//	//10000010 - c截断
//
//	printf("%d\n", c);//结果为-126
//
//
//	return 0;
//}



//算数转换类型
//如果一个操作符的各个操作数属于各个类型,除非一个操作数转换成另一个操作数的类型不然无法进行运算。
//int float ->转换float
//long int int ->转换long int 
//转换向上转换


//int main()
//{
//	int a = 4;
//	float b = 4.5f;
//	float c = a + b;    //整形加小数类型 发生算数转换由范围小的转换到范围大的。
//
//
//	printf("%.2f", c);
//
//
//	return 0;
//
//}

int fun()
{

	static int count = 1;   //static修饰的不会被销毁
	return ++count;
}



int main()
{
	int answer;
	//2-3*4
	answer = fun() - fun() * fun();
	printf("%d\n", answer);

	return 0;

	
}