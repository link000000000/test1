#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#define float_s "%f\n"
#define PI 3.14159
#define PI2 2*PI
#define PRT printf("%f\n",PI);\
			printf("%f\n",PI2);  //反斜杠表示define一个语句并未结束
#define cube(x)((x)*(x)*(x))


//#开头的是编译预处理指令  

int main()                
{
	/*printf(float_s,2*PI2);*/
	PRT;
	int i;
	scanf("%d", &i);
	printf("%d\n", cube(i+2));        //x被替换成5 并计算立方

	return 0;
}