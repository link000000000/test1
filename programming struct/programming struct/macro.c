#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#define float_s "%f\n"
#define PI 3.14159
#define PI2 2*PI
#define PRT printf("%f\n",PI);\
			printf("%f\n",PI2);  //��б�ܱ�ʾdefineһ����䲢δ����
#define cube(x)((x)*(x)*(x))


//#��ͷ���Ǳ���Ԥ����ָ��  

int main()                
{
	/*printf(float_s,2*PI2);*/
	PRT;
	int i;
	scanf("%d", &i);
	printf("%d\n", cube(i+2));        //x���滻��5 ����������

	return 0;
}