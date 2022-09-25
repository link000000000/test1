#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//	int age = 170;
//
//	if (age < 18)
//		printf("少年\n");
//	else if (age >= 18 && age < 26)
//		printf("teenager\n");
//	else if (age >= 26 && age < 40)
//		printf("中年\n");
//	else if (age > 40 && age < 100)
//		printf("老年\n");
//	else
//		printf("老不死\n");
//	
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 2;
//	if (a == 1)
//	{
//		if (b == 2)
//		{
//			printf("hehe\n");
//		}
//			else          ////else与最近的if匹配
//		{
//			printf("haha\n");
//		}
//	}
//
//	return 0;
//}

//int main()
//{
//	int a;
//	printf("please  inport a number ");
//	scanf("%d", &a);
//	
//	if (a%2  == 1)
//	{
//		printf("this number is odd number");
//	}
//	else
//	{
//		printf("It's not an odd number");
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	while (i<=100)
//	{
//		if (i%2 == 1)
//		{
//			int b = i;
//			printf("%d\n", b);
//			i++;
//		} 
//		else
//		{
//			i++;
//		}
//
//	}
//
//
//	return 0;
//}
//

//switch 用于多分支
//switch(整形表达式)
//{语句项}

//int main()
//{
//	int day = 0;
//	printf("please inport the  1-7");
//	scanf("%d", &day);
//	switch (day) //day决定switch的入口
//	{
//	case 1:
//		printf("monday\n");
//		break;
//	case 2:                       //case为入口 break为出口
//		printf("Tuesday\n");
//		break;
//	case 3:
//		printf("Wednesday\n");
//		break;
//	case 4:
//		printf("Thursday\n");
//		break;
//	case 5:
//		printf("Friday\n");
//		break;
//	case 6:
//		printf("saturday\n");
//		break;
//	case 7:
//		printf("sunday\n");
//  		break;
//	}
//
//
//
//	return 0;
//}


//int main()
//{
//	int day = 0;
//	printf("please inport the  1-7");
//	scanf("%d", &day);
//	switch (day) //day决定switch的入口
//	{
//	case 1:
//	case 2:                       //case为入口 break为出口	
//	case 3:
//	case 4:
//	case 5:
//		printf("This is work day\n");
//		break;
//	case 6:
//	case 7:
//		printf("this is leisure day\n");
//  		break;
//	default:
//		printf("input error, please try again");
//		break;
//	}
//	
//
//
//	return 0;
//}

//int main()
//{
//	int i = 1;				
//	while (i <= 10)
//	{
//		if (i == 5)
//		{
//			continue;          //continue的意义为跳过后面的代码
//									//到while语句进行再判断而导致死循环
//		}
//		printf("%d\n", i);
//		i++;
//	}
//
//	while (i<=10)
//	{
//		if(i==5)              
//		{
//			break;        //5后未打印 在while循环中,break用于永久的终止循环
//		}
//		printf("%d\n", i);
//		i++;
//	}
//	return 0;
//	
//}


//int main()
//{
//	int ch = 0;
//	while ((ch = getchar())!= EOF)     //！=EOF等于不出错误则继续运行循环
//	{
//		putchar(ch);
//	}
//	return 0;
//
//}
//
//int main()
//{
//	char password[20] = { 0 };
//	printf("please input the password in the window:>");
//	scanf("%s", password);          //scanf内的password为什么没取地址？
//								//因为password是一个数组 数组数组名就是个地址
//	//清理缓冲区
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

//int main()
//{
//	int ch = 0;
//	while ((ch=getchar())!=EOF)
//	{
//		if (ch < '0' || ch>'9')     //字母不打印 数字打印  因为ascii表
//			continue;
//
//		putchar(ch);
//	}
//
//
//	return 0;
//}

//int main()
//{
//	int i = 1;           //初始化
//	while (i<=10)            //判断部分
//	{
//		printf("%d\n", i);
//		i+=2;                    //循环变量的调整部分
//
//	}
//	
//
//
//	
//	return 0;
//}


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
//	//for (exp1;exp2;exp3)  exp1:initialization exp2:estimate exp3:adjustment
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