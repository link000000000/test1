#include<stdio.h>

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
//    //for (exp1;exp2;exp3)  exp1:initialization exp2:estimate exp3:adjustment
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