#include <stdio.h>

//int main()
//{
//	int a = 2;
//	int b = a << 1;  //移位操作符是移动的二进制位
//	//0000000000000000000000000000000000000000010<<<<00000000000000000000000000100
//	//2^1<<<<<<<2^2 结果输出未4
//
//	printf("%d\n", b);
//
//
//
//	return 0;
//}
//
//int main()
//{
	/*int a = 2;
	printf("%d\n", !a);*/

	//a=a+5 = a +=5
	// a= a%3 == a %=3
	//a = a -1 == a -=1
	//双目操作符：有两个操作数 如3+3
	//单目操作符: 只有一个操作数  

	//一个元素为4个字节
//	int arr[10] = { 0 };
//	printf("%d\n", sizeof(arr)); //数组的总大小 单位是字节
//
//	printf("%d\n", sizeof(arr[0])); //第一个元素的大小是4字节
//
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	printf("%d\n", sz);  //得到10   数组的数量结果
//
//	return 0;
//
//}

//
//int main()
//{
//	int a = 0;
//	printf("%d\n", ~a);   //~ 按位取反的操作符  
//	//输出结果为-1 

	//二进制位取法            把二进制的1变成0 0变成1
	//一个整数=4个字节=32个比特
	//0000000000000000000000000000000000000000000000000000000
	//~将32个0全部变成1
	//整数在内存中存储的是补码
	//一个整数的二进制表示有三种:
	//1：原码       2：反码       3：补码  
	 
	
	//比如  -1：1（表示负数）0*31 1（-1的原码）
	//符号位置不变 按位取反 1*32 0  (反码)
	//二进制数字加1等于补码 1*33
	                //内存中储存的补码！！！！！！！！！

	//正整数:原码，反码，补码 全部相同
	//000000000000000000000000000000000
	//~取反后得到 1111111111111111111111111111
	//以%d打印得到-1


//int main()
//{
//	//int a = 10;
//	//int b = ++a; //前置++ ， 先++ 后使用 b= a(10+1)
//
//	int a = 10;
//	int b = a++; //后置++ ，先使用后++
//
//	printf("%d\n", a); 
//	printf("%d\n", b);
//	
//
//	return 0;
//}
//
//int main()
//{
//	//int a = 3.14;  //赋值给int 丢失精度
//	int a = (int)3.14;  //强制转换 输出为3
//	printf("%d\n", a);
//
//
//	return 0;
//}


//*********************Relation operator**************

//**********************Logic operator****************


//&& 逻辑与 ||逻辑或
//int main()
//{
	/*int a = 3;
	int b = 5;*/
	/*int c = a && b;       */     //0为假其他为真 输出1为真 ab一个为0c为0
	
//	int a = 3;
//	int b = 0;
//
//	int c = a || b;               //ab中一个为真即c为真
//
//
//
//	printf("%d\n", c);
//}

//**************************condition operator***********************
//又名三目操作符 exp1?exp2:exp3

//If  expression1 establish <<<expression2 calculate
//the construction of the whole expression<<<result of the expresstion2

//if the expression1 can't establish , expression 3 calculate
//the construction of the whole expression<<<result of the expression3

//int main()
//{
//	int a = 0;
//		int b = 3;
//		int max = 0;
//
//		if (a > b)
//			max = a;
//		else
//		
//			max = b;
//
//		printf("%d", max);
//
//		
//		return 0;
//}

//如何使用三目操作符代替上述操作？
//int main()
//{
//	int a = 0;
//	int b = 3;
//	int max = 0;
//
//	max = a > b ? a : b;
//	printf("%d", max);
//
//}

//逗号表达式
//int  main()
//{
//	int a = 0;
//	int b = 3;
//	int c = 5;
//	int d = (a = b + 2, c = a - 4, b = c + 2);  //逗号表达式从左到右计算 结果为最后一个
//
//	printf("%d\n", d); 
//	return 0;
//}




//下标引用,函数调用和结构成员
//int main()
//{
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//	printf("%d\b",arr[5]);     //[]下标引用操作符
//
//	return 0;
//
//}

//int main()
//{
//		
//	printf("hehe\n"); //调用函数的时候 函数名后面的（）就是函数调用操作符
//	printf("%d",100);
//
//		return 0;
//}







int main()
{

}