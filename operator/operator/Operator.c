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
//	// & - ���������ƣ�λ��
//	//����������λ����1�Ų�1,���һλ��1��������������C����ֵ1.
//	int c = a & b;
//
//	int d = a | b;
//	//| - ���������ƣ�λ��
//	//����������λ ��1����1,��������������1������d����ֵ7.
//
//	int e = a ^ b;
//	//^ - ��Ӧ�Ķ�����λ���
//	//������ͬΪ0������λ1.����Ϊ6.
//	printf("%d\n", c);
//
//	printf("%d\n", d);
//
//	printf("%d\n", e);
//	return 0;
//
//}

//��ֵ������   =  +=  -=  *= /= >>= <<= %=

//int main()
//{
//	int a = 10;
//	a = 100;
//	a = a + 100;  //1               //һ��=�Ǹ�ֵ ����=���ж�
//	a += 100;     //2
//	a = a >> 3; //1
// 	a >>= 3;	//2
//	return 0;
//
//} 



//��Ŀ���������� - + & sizeof ~ ++ -- * ��

//int main()
//{
//	int flag = 5;
//	//flagΪ�棬��ӡhehe
//	if (flag)
//	{
//		printf("hehe\n");
//	}
//	//flagΪ�٣���ӡhaha
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
//	printf("%d\n", sizeof(a));   //����a���ڴ��С
//	printf("%d\n", sizeof(int));  //����int���ڴ��С
//	printf("%d\n", sizeof a);          // ���ڱ���������ʡ������ int����
//
//	//<<<<<֤��sizeof��һ�������� ������һ������
//	//���sizeof��һ������������ģ������ܹ���ʡ��
//
//	printf("%d\n", sizeof(arr));    //char[10]����ռ10���ڴ��С ���ǵ�int[10]��ռ40��   
//
//
//	return 0;
//
//}


//int main()
//{
//	int a = 10;
//	printf("%p\n", &a); //ȡ��a�ĵ�ַ
//
//	int * pa = &a;  //pa������ŵ�ַ������pa��һ��ָ����� ,*˵��pa��һ��ָ�����
//	*pa = 20;      //��ʱ*Ϊ�����ò�����
//
//	printf("%d\n", a);
//
//
//	return 0;
//}

//int main()
//{
//	int a =(int)3.14;        //ǿ������ת��
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
//                        =��ֵ  ==�ж����   �Ƚ������ַ�����Ȳ���ʹ��==
//
//
//	return 0;
//}


//�߼������� && ||
//int main()
//{
//	int a = 3;
//	int b = 0;        
//	if (a && b)         //a,bͬʱΪ�� Ϊ��  �߼���
//	{
//		printf("123\n");
//	}
//
//	if (a||b)               //һ��Ϊ������� �߼���
//	{
//		printf("456\n");
//	}
//
//	return 0;
//}





//���������� exp1?exp2:exp3

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
//	//�����������
//
//	b = (a > 5 ? 1: -1);      //EXP1Ϊ�渳ֵEXP2������ֵEXP3  
//
//
//	return 0;
//}


//���ű��ʽ EXP1,EXP2,EXP3,...EXPN
//
//int main()
//{
//	int a = 3;
//	int b = 5;
//	int c = 0;
//	int d = (c = 5, a = c + 3, b = a - 4, c += 5);   //�ɶ��Ÿ����ľ��Ƕ��ű��ʽ
//
//	//���ű��ʽ--�����������μ��㣬�������ʽ�Ľ��ȡ�������һ���Ľ��
//
//
//	return 0;
//}



//�±����ã��������ò�����:


//int main()
//{ 
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	//�����±��0��ʼ 1-0
//	printf("%d\n", arr[4]);  //[] -  �±����ò�����,ͨ���±�Ѱ��Ԫ�� ���������岻ͬ
//	//3+5; ���������� []�Ĳ����������� һ��arr��һ��4
//
//	
//
//	return 0;
//}

////�����Ķ���
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
//	//�������ò�����
//	int a = 10;
//	int b = 20;
//
//	//��������
//	int ret = Add(a ,b);
//	//() - �������ò�����
//	test();      //ֻ��testһ��������
//
//
//	return 0;
//}



//�ṹ��Ա������


//������һ���Զ��������
//struct Book
//{
//	char name[20];            //���ӵ��������
//	char id[20];
//	float price;
//
//};


//int main()
//{
//	//�ṹ��Ա���ʲ�����  .  ->
//	//���Ӷ��� �����飺��������ţ����������ȷ��һ������ ����int float
//	/*int num = 10;*/
//	//ʹ�����ʹ�����һ����
//	struct Book b = {"C programming","c20202012",55};         //ʵ��������
//
//	/*printf("������%s\n", b.name);
//
//	printf("���: %s\n", b.id);*/    //b.XXX ���������ṹ���Ա
//										//��ʽ:�ṹ��.��Ա��
//
//		
//	struct Book* pb = &b;      //�ַ�ָ��
//
//	/*printf("������%s\n", (*pb).name);        
//
//	printf("���: %s\n", (*pb).id);*/
//
//
//	printf("������%s\n", pb->name);        //pbָ���˶����name
//
//	printf("���: %s\n", pb->id);
//
//	return 0;
//}







//��ʽ����ת��
//C������������������������ȱ�������͵ľ��������е�
//Ϊ�˻��������ȣ����ʽ�е��ַ��Ͳ�������ʹ��֮ǰ��ת��Ϊ��ͨ���Σ�����ת������������������

//int main()
//{
//	char a = 3;
//	//00000000000000000000000000000011 �ŵ�a�����ͷ����ض� 00000011-a
//
//	char b = 127;
//	//b�����ض� 01111111-b
//
//
//	//���������ǰ��ձ������������͵ķ���λ���������� ����0��0 ����1��1
//	//00000011  ����λΪ0��ʾ����
//	char c = a + b;
//	//����a��b����char���ͣ���û�дﵽint�Ĵ�С������ͻᷢ������������
//	//00000000000000000000000011
//	//00000000000000011111111111        
//	
//	//10000010 - c�ض�
//
//	printf("%d\n", c);//���Ϊ-126
//
//
//	return 0;
//}



//����ת������
//���һ���������ĸ������������ڸ�������,����һ��������ת������һ�������������Ͳ�Ȼ�޷��������㡣
//int float ->ת��float
//long int int ->ת��long int 
//ת������ת��


//int main()
//{
//	int a = 4;
//	float b = 4.5f;
//	float c = a + b;    //���μ�С������ ��������ת���ɷ�ΧС��ת������Χ��ġ�
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

	static int count = 1;   //static���εĲ��ᱻ����
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