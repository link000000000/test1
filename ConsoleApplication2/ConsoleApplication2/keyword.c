#include <stdio.h>
//Where can computer data be stored?
//Register, Cache, Memory ,disk, Web disk
//寄存器 高速缓存 内存 硬盘 网盘
//寄存器内存很小
//define include 是预处理指令而不是关键字
//typedef unsigned int u_int;   //类型重命名
//int main()
//{
//	unsigned int num = 100;
//	u_int num2 = 100;													//上下两式等价
//
//	return 0;
//}

//static 静态的
//1.Modifying local variables 
//2.Modifying global variables
//3.modifying function
//void test()
//{
//	static int a = 1;
//	a++;
//	printf("%d ", a);
//}
//
//
//int main()
//{
//	int i = 0;
//	while (i < 10);
//	{                                      //static改变了局部变量的生命周期，本质是改变了变量的储存类型
//		test();							//内存分为三个区域
//											//栈区 堆区 静态区
//											//静态区：全局变量 static修饰的静态变量
//											//堆区：动态内存分配的
//											//栈区存放：局部变量，函数的参数 
//		i++;
//	}
//	
//	return 0;
//}
//
//extern int g_val; //extern 声明外部符号
////外部文件的全局变量
////只需要注明类型和名称
//
//int main()
//{
//	printf("%d", g_val);
//
//	return 0;
//}
//而其他文件的全局变量被static修饰时，这个全局变量只能在本文件内使用而不能调用
//全局变量在别的文件可以使用，是因为具有外部链接属性
//但在被static修饰之后，就变成了内部连接属性


////调用别的文件的int add
//extern int add(int x, int y);
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = add(a, b);
//	printf("%d\n", sum);
//
//	return 0;
//}