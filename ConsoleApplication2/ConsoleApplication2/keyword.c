#include <stdio.h>
//Where can computer data be stored?
//Register, Cache, Memory ,disk, Web disk
//�Ĵ��� ���ٻ��� �ڴ� Ӳ�� ����
//�Ĵ����ڴ��С
//define include ��Ԥ����ָ������ǹؼ���
//typedef unsigned int u_int;   //����������
//int main()
//{
//	unsigned int num = 100;
//	u_int num2 = 100;													//������ʽ�ȼ�
//
//	return 0;
//}

//static ��̬��
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
//	{                                      //static�ı��˾ֲ��������������ڣ������Ǹı��˱����Ĵ�������
//		test();							//�ڴ��Ϊ��������
//											//ջ�� ���� ��̬��
//											//��̬����ȫ�ֱ��� static���εľ�̬����
//											//��������̬�ڴ�����
//											//ջ����ţ��ֲ������������Ĳ��� 
//		i++;
//	}
//	
//	return 0;
//}
//
//extern int g_val; //extern �����ⲿ����
////�ⲿ�ļ���ȫ�ֱ���
////ֻ��Ҫע�����ͺ�����
//
//int main()
//{
//	printf("%d", g_val);
//
//	return 0;
//}
//�������ļ���ȫ�ֱ�����static����ʱ�����ȫ�ֱ���ֻ���ڱ��ļ���ʹ�ö����ܵ���
//ȫ�ֱ����ڱ���ļ�����ʹ�ã�����Ϊ�����ⲿ��������
//���ڱ�static����֮�󣬾ͱ�����ڲ���������


////���ñ���ļ���int add
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