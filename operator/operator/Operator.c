#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

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

int main()
{
	int a = 3;
	int b = 5;
	int c = 0;
	int d = (c = 5, a = c + 3, b = a - 4, c += 5);   //�ɶ��Ÿ����ľ��Ƕ��ű��ʽ

	//���ű��ʽ--�����������μ��㣬�������ʽ�Ľ��ȡ�������һ���Ľ��


	return 0;
}