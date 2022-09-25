#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int main()
//{
//	int num = 1;
//	printf("i am a simple ");
//	printf("computer\n");
//
//	printf("My favorite number is %d because it's first.\n", num);
//
//
//
//	return 0;
//}

void butler(void);    //第1次是函数原型（prototype），告知编译器在程序中要使用该函数；
//函数原型还指明了函数的属性。例如，butler()函数原型中的第1个void表明
//butler()函数没有返回值（通常，被调函数会向主调函数返回一个值，但是 bulter()函数没有。
int main()
{
	printf("i will summon the butler fuction\n");

	butler();          //第 2 次以函数调用（function call）的形式


	printf("yes,bring me some tea and writeable dvds.\n");



	return 0;
}

void butler(void) {
	printf("you rang,sir?\n");           //最后一次出现在函数定义（function definition）中，函数定义即是函数本身的源代码。
}
                               //output:I will summon the butler function.
							 //You rang, sir ?
							//Yes.Bring me some tea and writeable DVDs.