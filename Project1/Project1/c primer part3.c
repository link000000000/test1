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

//void butler(void);    //��1���Ǻ���ԭ�ͣ�prototype������֪�������ڳ�����Ҫʹ�øú�����
////����ԭ�ͻ�ָ���˺��������ԡ����磬butler()����ԭ���еĵ�1��void����
////butler()����û�з���ֵ��ͨ����������������������������һ��ֵ������ bulter()����û�С�
//int main()
//{
//	printf("i will summon the butler fuction\n");
//
//	butler();          //�� 2 ���Ժ������ã�function call������ʽ
//
//
//	printf("yes,bring me some tea and writeable dvds.\n");
//
//
//
//	return 0;
//}
//
//void butler(void) {
//	printf("you rang,sir?\n");           //���һ�γ����ں������壨function definition���У��������弴�Ǻ��������Դ���롣
//}
//                               //output:I will summon the butler function.
//							 //You rang, sir ?
//							//Yes.Bring me some tea and writeable DVDs.

//int main()
//{
//	int age = 0;
//	printf("please input your age in the windows\n");
//	scanf("%d", &age);
//
//	int day = 0;
//	day = age * 365;
//
//	printf("you lived %d day.\n",day);
//
//
//
//	return 0;
//}


//
//void jolly(void);
//
//void deny(void);
//
//int main()
//{
//	jolly();
//	jolly();
//	jolly();
//
//	deny();
//
//	
//	return 0;
//}
//
//void jolly(void)
//{
//	printf("for he's a jolly good fellow\n");
//
//
//}
//
//void deny(void)
//{
//
//
//	printf("which nobody can deny!\n");
//}
//
//int main()
//{
//	int toes = 10;
//
//	printf("%d\n", toes);
//	printf("%d\n", toes*toes);
//	printf("%d\n", toes * 2);
//
//
//
//
//	return 0;
//}

//void haha(void);
//
//int main()
//{
//	haha();
//	haha();
//	haha();
//	printf("\n");
//	haha();
//	haha();
//	printf("\n");
//	haha();
//
//
//
//	return 0;
//}
//
//
//void haha(void)
//{
//
//	printf("smile");
//}

//void one_three(void);
//
//void two(void);
//
//int main()
//{
//	printf("starting now:\n");
//
//	one_three();
//
//	printf("done\n");
//
//	return 0;
//}
//
//void one_three(void)
//{
//	printf("one\n");
//	two();
//	printf("three\n");
//}
//
//void two(void)
//{
//
//	printf("two\n");
//}



//int main()
//{
//	char password[20] = { 0 };
//	printf("please input the password in the windows");
//	scanf("%s", password);
//
//	int tmp = 0;
//	while ((tmp = getchar()) != '\n')
//	{
//		;
//	}
//	printf("please confirm the password and input the(Y/N)into the window");
//	int ch = getchar();
//	
//		if (ch == 'Y')
//		{
//			printf("identify success\n");
//
//		}
//		else
//		{
//			printf("indentify failure\n");
//
//		}
//	return 0;
//}

//int main()
//{
//	char password[20] = { 0 };
//	printf("please input the password in the window:>");
//	scanf("%s", password);          //scanf�ڵ�passwordΪʲôûȡ��ַ��
//								//��Ϊpassword��һ������ �������������Ǹ���ַ
//	//��������
///*	getchar();*/   //����\n ��������һ���ַ�
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
//	int ten = 10;
//	int two = 2;
//
//	printf("Doing it right:");
//
//	printf("%d minus %d is %d \n", ten, 2, ten - two);
//
//	printf("Doing it wrong:");
//	
//	printf("%d minus %d is %d\n", ten);  //��©��������
//	//two '%d' hasn't receive any number to outport in
//	//so they type the random number in the internal stroage
//
//	
//
//
//
//	return 0;
//}

//
//int main()
//{
//	int x = 100;
//
//	printf("dec = %d; octal = %o;hex = %x\n", x, x, x );
//	
//	printf("dec = %d; octal = %#o;hex = %#x\n", x, x, x );
////���벢���иó���������£�
//	//dec = 100; octal = 144; hex = 64
//		//dec = 100; octal = 0 144; hex = 0x 64
//	//ע�⣬���Ҫ�ڰ˽��ƺ�ʮ������ֵǰ��ʾ0��0xǰ׺��
//	//Ҫ�ֱ���ת��˵���м���#��
//
//	return 0;
//}
//
//#include <stdio.h>
//#include <time.h>
//
//void delay(const double second);
//
//int main(void)
//{       
//    double n;
//
//    printf("please enter a number (<0 or q to quit): ");
//    while (scanf("%lf", &n) == 1)
//    {
//        delay(n);
//        printf("You can enter again (<0 or q to quit): ");
//    }
//    puts("Done.");
//
//    return 0;
//}
//
//void delay(const double second)
//{
//    clock_t start = clock();
//    clock_t end = clock();
//
//    while (((double)(end - start) / CLOCKS_PER_SEC) < second)
//    {
//        end = clock();
//    }
//    printf("Delay %g seconds.\n", (double)(end - start) / CLOCKS_PER_SEC);
//    return;
//}
//
//int main()
//{
//	int i = 2147483647;
//	unsigned int j = 4294967295;
//	        outport:
//			 2147483647 -2147483648 -2147483647
//	         4294967295      0         1
//	printf("%d %d %d \n", i, i + 1, i + 2);
//
//	printf("%u %u %u \n", j, j + 1, j + 2);
//
//	unsigned int ���͵ı��� j �� 0��ʼ��
//	��int���͵ı���i���?2147483648��ʼ��
//
//
//	return 0;
//}




//
//int main()
//{
//	char ch;
//	printf("please input the character in the window");
//	scanf("%c", &ch);
//
//	printf("The code is %c for the %d\n",ch, ch);
//
//	
//	
//
//
//
//	return 0;
//}

//
//int main()
//{
//	float aboat = 32000.0;
//	double abet = 2.14e9;
//	long double dip = 5.32e-5;
//
//	printf("%f can be written  %e\n ", aboat, aboat);
//
//	printf("and is %a in hex ,powers of 2 notation\n");
//	
//	printf("%f can be written %e\n", abet, abet);
//
//	printf("%lf can be written %Le\n", dip, dip);
//
//
//
//
//	return 0;
//
//}


//
//int main()
//{
//	float toobig = 3.4E38 * 100.0f;
//
//	printf("%e\n", toobig);         //The garbage has the overflow to result the answer that is infinity
//
//
//
//
//
//	return 0;
//}


//
//int main()
//{
//	float a, b;
//	b = 2.0e20 + 1.0;
//	a = b - 2.0e20;
//	printf("%f \n", a);                 //�������������
//
//
//
//	return 0;
//}

//c���Ը����͵Ĵ�С

//int main()
//{
//	printf("Type int has a size of %zd bytes.\n", sizeof(int));
//	
//	printf("Type char has a size of %zd bytes.\n", sizeof(char));
//	
//	printf("Type long has a size of %zd bytes.\n", sizeof(long));
//	
//	printf("Type long long has a size of %zd bytes.\n", sizeof(long long));
//	
//	printf("Type long double has a size of %zd bytes.\n", sizeof(long double));
//	printf("Type double has a size of %zd bytes.\n", sizeof(double));
//
//	//	Type int has a size of 4 bytes.
//	//	Type char has a size of 1 bytes.
//	//	Type long has a size of 4 bytes.
//	//	Type long long has a size of 8 bytes.
//	//	Type long double has a size of 8 bytes.
//	//	Type double has a size of 8 bytes.
//
//}


//������������ 

//int main()
//{
//	int n = 4;
//	int m = 6;
//	float f = 9.0f;
//	float g = 5.0f;
//
//	printf("%d\n", n, m);    //����̫��
//
//	printf("%d%d%d\n", n);     //����̫��
//
//	printf("%d%d\n", f, g);    //ֵ�����Ͳ�ƥ��
//
//	return 0;
//}

//int main(void)
//{
//	float salary;
//	printf("\aEnter your desired monthly salary:"); /* 1 */
//	printf(" $_______\b\b\b\b\b\b\b"); /* 2 */
//	scanf("%f", &salary);
//	printf("\n\t$%.2f a month is $%.2f a year.", salary,
//		salary * 12.0); /* 3 */
//	printf("\rGee!\n"); /* 4 */
//	return 0;
//}

//
//int main()
//
//{
//	int imate = 2;
//	long shot = 53456;
//	char grade = 'A';
//	float log = 2.71828;
//
//	printf("The odds against the %d were %ld to 1.\n",
//		imate, shot);
//	printf("A score of %f is not an %c grade.\n", log,
//		grade);
//	
//	return 0;
//}

//
//int main()
//{
//	char ch;
//	ch = '\r';
//	ch = 13;
//	ch = '\015';
//	ch = '\xd';
//
//	printf("%c", ch);
//
//
//	return 0;
//}


//int main()
//{
//	float f_flow;
//	
//	scanf("%f", &f_flow);
//
//	printf("%f\n", f_flow);
//
//
//	return 0;
//}

//int main()
//{
//	int ch = 0;
//
//	printf("please you enter a ASCII value");
//
//	scanf("%d", &ch);
//
//	printf("AsCII %d is %c\n", ch, ch);
//
//
//	return 0;
//}

//int main()
//{
//	printf("\a");
//
//	printf(" Startled by the sudden sound, Sally shouted,By the Great Pumpkin, what was that!\n");
//
//	return 0;
//}


//int main()
//{
//	float f_number;
//	printf("please enter a folat-point value");
//	scanf("%f", &f_number);
//
//	printf("fixed-point nonation %f\n", f_number);
//
//	printf("%e\n", f_number);
//
//	printf("%a\n", f_number);
//
//
//	return 0;
//}


//int main()
//{
//	int year;
//
//
//	printf("how old are you?");
//	scanf("%d", &year);
//
//	float second = 3.156e7f;
//	
//	double d_second = year * second;
//
//	printf("you have been  on this earth for %.2f seconds ", d_second);
//
//	return 0;
//}
//#define MASS_WATER 3.0e-23
//#define MASS_QUART 950
//
//int main()
//{
//	double quart, molecules;
//	printf("please enter a quart for water");
//	scanf("%lf", &quart);
//
//	molecules = quart * MASS_QUART / MASS_WATER;
//
//	printf("%g quart water includes %e water molecules\n", quart, molecules);
//
//
//
//
//
//	return 0;
//}


//#define TALL_C  2.54
//
//int main()
//{
//	float f_tallf;
//	printf("please inter inch in the windows");
//
//	scanf("%f", &f_tallf);
//
//	float f_tall_centimeterf;
//
//	f_tall_centimeterf = f_tallf * TALL_C;
//
//	printf("your height is %.1f cm\n", f_tall_centimeterf);
//
//	
//
//
//
//	return 0;
//}

