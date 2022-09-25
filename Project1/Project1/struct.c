#include<stdio.h>

//结构体可以让c语言创建新的类型

//struct stu
//{
//	char name[20];  //成员变量
//	int age;
//	double score;
//};
//
//int main()
//{
//	struct stu s = { "rick",20,85.5 };
//	printf("1:%s %d %lf\n", s.name, s.age, s.score);    //结构体变量 .为程序变量
//	struct stu* ps = &s;
//	printf("2:%s %d %lf\n", (*ps).name, (*ps).age, (*ps).score);
//	
//	printf("3:%s %d %lf\n", ps->name, ps->age, ps->score);
//	//// for grammar 
//    //for (exp1;exp2;exp3)  exp1:initialization exp2:estimate exp3:adjustment
//		// loop statement 循环语句
//	char password[20] = { 0 };
//	printf("please input the password in the window:>");
//	scanf("%s", password);          //scanf内的password为什么没取地址？
//	//因为password是一个数组 数组数组名就是个地址
////清理缓冲区
//	getchar();   //处理\n ，仅处理一个字符
//
//	int tmp = 0;
//	while ((tmp = getchar()) != '\n')      //处理\n，处理缓冲区内容
//	{
//		;
//	}
//	printf("Please confirm the password(Y/N):>");
//	int ch = getchar();
//
//	if (ch == 'Y')
//	{
//		printf("identify success\n");
//	}
//	else
//	{
//		printf("identify failure");
//	}
//	return 0;
//}