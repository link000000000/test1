#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>



//enumeration(ö��)
//
//enum COLOR {RED,YELLOW,GREEN};                                  //ö����һ���û�������������ͣ�{����0��...������n}  ���δ��㿪ʼ
//void f(enum COLOR c);
//
//int main()
//{
//	enum COLOR t = RED;
//
//	scanf("%d", &t);
//
//	f(t);
//
//	return 0;
//}
//
//void f(enum CLOLR c)
//{
//	printf("%d\n", c);
//}

//��·���Զ�������ö��


//enum color {
//	red,yellow,green,numcolors
//};
//
//int main(int argc,char const *argv[])
//{
//	int color = -1;
//	char* colornames[numcolors] = {
//		"red","yellow","green"
//	};
//	char* colorname = NULL;                    //��colors number�𵽼�������
//
//	printf("��������ϲ������ɫ");
//	scanf("%d", &color);
//	if (color>=0&&color<numcolors)
//	{
//		colorname = colornames[color];
//	}
//	else
//	{
//		colorname = "unknown";
//
//	}
//	printf("��ϲ������ɫ��%s\n", colorname);
//
//
//	return 0;
//}

//struct date
//{
//	int month;
//	int day;
//	int year;
//
//}today;    //�ṹ����
//
//
//int main(int argc,char const*argv[])
//{
//
//	/*today.month = 07;
//	today.day = 31;
//	today.year = 2023;*/
//	struct date today = { 07,31,2022 };
//	struct date thismonth = { .month = 7,.year = 2022 };   //��δ��ֵday�Զ���day��0
//
//
//	printf("Today's date is %i-%i-%i.\n",
//		today.year, today.month, today.day);
//	printf("thismonth's date is %i-%i-%i.\n",
//		thismonth.year, thismonth.month, thismonth.day);
//
//
//	return 0;
//}


//�ṹ��������� ������ֻ����һ���������ͣ����ṹ����ӵ�ж�����������
//���������ṹ����������ֵ������ȡ��ַ��Ҳ���Դ��ݸ���������
//p=(struct point){5,10};  //��5��10ͨ��ǿ������ת����ֵ��p�ṹ����
//p1=p2   //�൱��p1x=p2x;p1y=p2y ��������ĸ�ֵ�������޷�ʵ�ֵ�

//�����鲻ͬ���ṹ���������ֲ����ǽṹ�����ĵ�ַ������ʹ��&����������е�ַ�Ĳ���
//struct date*pDate = &today;

//struct date {
//	int month;
//	int day;
//	int year;
//
//};
//
//bool isleap(struct date d);
//int numberofdays(struct date d);
//
//int main()
//{
//	struct date today, tomorrow;
//
//	printf("Enter today's date:");
//	scanf("%i %i %i,&today.month,&today.day,&today.year");
//
//	if (today.day!=numberofdays(today))
//	{
//		tomorrow.day = today.day+1;
//		tomorrow.month = today.month;
//		tomorrow.year = today.year;
//	}
//	else if (today.month==12)
//	{
//		tomorrow.day = 1;
//		tomorrow.month = 1;
//		tomorrow.year = today.year + 1;
//
//	}
//	else
//	{
//		tomorrow.day = 1;
//		tomorrow.month = today.month + 1;
//		tomorrow.year = today.year;
//	}
//
//	printf("Tomorrow's date is %i-%i-%i,\n", tomorrow.year, tomorrow.month, tomorrow.day);
//	return 0;
//}
//
//int numberofdays(struct date d)
//{
//
//	int days;
//
//	const int dayspermonth[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
//
//	if (d.month==2&&isleap(d))
//	{
//		days = 29;
//	}
//	else
//	{
//		days = dayspermonth[d.month - 1];
//	}
//	return days;
//}
//
//
//bool isleap(struct date d)
//{
//
//	bool leap = false;
//}


//struct point {
//	int x;
//	int y;
//
//};
//
//struct point getStruct(void);
//void output(struct point);
//
//int main()
//{
//	struct point y = { 0,0 };
//	y = getStruct();                //Both of them are separated returning to the main where 
//	output(y);                    //It's clone instead of pointer
//	return 0;
//}
//
//struct point getStruct(void)
//{
//	struct point p;
//	scanf("%d", &p.x);
//	scanf("%d", &p.y);                      
//	printf("%d,%d\n", p.x, p.y);
//	return p;
//}
//
//void output(struct point p)
//{
//	printf("%d,%d\n", p.x, p.y);
//}





//struct date {
//	int month;
//	int day;
//	int year;
//}myday;
//
//struct date* p = &myday;
//
//int main()
//{
//	struct date* p = &myday;
//	p->month = 12;
//	printf("%i", p->month);
//}
//


//struct array:
//struct time {
//	int hour;
//	int minutes;
//	int seconds;
//};
//
//struct time timeUpdate(struct time now);
//
//int main(void)
//{
//	struct time testTimes[5] = {
//		{11,59,59},{12,0,0,},{1,29,26},{23,59,59},{19,57,57}
//	};
//	//The type of an array is a self-declared type.
//	int i;
//	for ( i = 0; i < sizeof(testTimes)/sizeof(testTimes[0]); i++)
//	{
//		printf("Time is %.2i:%.2i:%.2i",
//			testTimes[i].hour, testTimes[i].minutes, testTimes[i].seconds);
//		testTimes[i] = timeUpdate(testTimes[i]);
//
//		printf("...one second later it's %.2i:%.2i:%.2i\n",
//			testTimes[i].hour, testTimes[i].minutes, testTimes[i].seconds);
//
//	}
//
//	return 0;
//}
//
//struct time timeUpdate(struct time now)
//{
//	++now.seconds;
//	if (now.seconds==60)
//	{
//		now.seconds = 0;
//		++now.minutes;
//	}
//	if (now.minutes==60)
//	{
//		now.minutes = 0;
//		++now.hour;
//	}
//	if (now.hour==24)
//	{
//		now.hour = 0;
//	}
//
//};
//


//�Զ����������ͣ�typedef))   sypedef int Length;  ʹ��length��Ϊint���͵ı���
typedef struct Adate {
	int month;
	int day;
	int year;
}Date;


int main()
{
	Date d = { 9,1,2005 };


	return 0;
}








