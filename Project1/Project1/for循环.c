#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
// for grammar
//for (exp1;exp2;exp3)   exp1:initialization exp2:estimate exp3:adjustment
//   loop statement ѭ�����
//1.������forѭ�������޸�ѭ����������ֹforѭ��ʧȥ����
//2.2.����for����ѭ�����Ʊ�����ȡֵ����"ǰ�պ�����"��д��
//int main()
//{
//	int i = 0;   
//	for (i = 1; i <= 10; i++)        
//	{
//		printf("%d\n", i);
//
//	}
//
//
//	return 0;
//}

//1.������forѭ�������޸�ѭ����������ֹforѭ��ʧȥ����
//2.2.����for����ѭ�����Ʊ�����ȡֵ����"ǰ�պ�����"��д��

//Case 1:

/*
int main()
{
	int i = 0;
	for (i = 1; i <= 10; i++)
	{
		printf("%d", i);           ���Ϊ����ѭ����6
		i = 5;              

	}


	return 0;
}
*/

//Case 2��

//int main()
//{
//	int arr[10] = { 0 };
//	//�����±��Ǵ�0��ʼ��
//	int i = 0;
//	for ( i = 0; i < 10; i++)              //����ҿ� 0Ϊ��һλ ������ѭ��10��
//	{
//		printf("%d ", arr[i]);
//	}
//
//
//
//
//	return 0;
// }


//int main()
//{
//	//�жϲ��ֵ�ʡ�ԡ����жϲ��ֺ�Ϊ��
//	for (;;)
//	{
//		printf("hehe\n");
//	}
//
//
//
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int j = 0;
//	for ( i = 0; i <3; i++)
//	{
//		for (j = 0; j < 3; j++)           //ѭ����3*3=9��(ѭ��Ƕ��)
//		{
//			printf("hehe\n");
//		}
//	}
//
//
//	return 0;
//}

