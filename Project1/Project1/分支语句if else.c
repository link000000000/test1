#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//	int age = 170;
//
//	if (age < 18)
//		printf("����\n");
//	else if (age >= 18 && age < 26)
//		printf("teenager\n");
//	else if (age >= 26 && age < 40)
//		printf("����\n");
//	else if (age > 40 && age < 100)
//		printf("����\n");
//	else
//		printf("�ϲ���\n");
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
//			else          ////else�������ifƥ��
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

//switch ���ڶ��֧
//switch(���α��ʽ)
//{�����}

//int main()
//{
//	int day = 0;
//	printf("please inport the  1-7");
//	scanf("%d", &day);
//	switch (day) //day����switch�����
//	{
//	case 1:
//		printf("monday\n");
//		break;
//	case 2:                       //caseΪ��� breakΪ����
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
//	switch (day) //day����switch�����
//	{
//	case 1:
//	case 2:                       //caseΪ��� breakΪ����	
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
//			continue;          //continue������Ϊ��������Ĵ���
//									//��while���������ж϶�������ѭ��
//		}
//		printf("%d\n", i);
//		i++;
//	}
//
//	while (i<=10)
//	{
//		if(i==5)              
//		{
//			break;        //5��δ��ӡ ��whileѭ����,break�������õ���ֹѭ��
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
//	while ((ch = getchar())!= EOF)     //��=EOF���ڲ����������������ѭ��
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
//	scanf("%s", password);          //scanf�ڵ�passwordΪʲôûȡ��ַ��
//								//��Ϊpassword��һ������ �������������Ǹ���ַ
//	//��������
//	getchar();   //����\n ��������һ���ַ�
//
//	int tmp = 0;
//	while ((tmp = getchar()) != '\n')      //����\n��������������
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
//		if (ch < '0' || ch>'9')     //��ĸ����ӡ ���ִ�ӡ  ��Ϊascii��
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
//	int i = 1;           //��ʼ��
//	while (i<=10)            //�жϲ���
//	{
//		printf("%d\n", i);
//		i+=2;                    //ѭ�������ĵ�������
//
//	}
//	
//
//
//	
//	return 0;
//}


//�ṹ�������c���Դ����µ�����

//struct stu
//{
//	char name[20];  //��Ա����
//	int age;
//	double score;
//};
//
//int main()
//{
//	struct stu s = { "rick",20,85.5 };
//	printf("1:%s %d %lf\n", s.name, s.age, s.score);    //�ṹ����� .Ϊ�������
//	struct stu* ps = &s;
//	printf("2:%s %d %lf\n", (*ps).name, (*ps).age, (*ps).score);
//
//	printf("3:%s %d %lf\n", ps->name, ps->age, ps->score);
//	//// for grammar 
//	//for (exp1;exp2;exp3)  exp1:initialization exp2:estimate exp3:adjustment
//		// loop statement ѭ�����
//	char password[20] = { 0 };
//	printf("please input the password in the window:>");
//	scanf("%s", password);          //scanf�ڵ�passwordΪʲôûȡ��ַ��
//	//��Ϊpassword��һ������ �������������Ǹ���ַ
////��������
//	getchar();   //����\n ��������һ���ַ�
//
//	int tmp = 0;
//	while ((tmp = getchar()) != '\n')      //����\n��������������
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