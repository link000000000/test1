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

void butler(void);    //��1���Ǻ���ԭ�ͣ�prototype������֪�������ڳ�����Ҫʹ�øú�����
//����ԭ�ͻ�ָ���˺��������ԡ����磬butler()����ԭ���еĵ�1��void����
//butler()����û�з���ֵ��ͨ����������������������������һ��ֵ������ bulter()����û�С�
int main()
{
	printf("i will summon the butler fuction\n");

	butler();          //�� 2 ���Ժ������ã�function call������ʽ


	printf("yes,bring me some tea and writeable dvds.\n");



	return 0;
}

void butler(void) {
	printf("you rang,sir?\n");           //���һ�γ����ں������壨function definition���У��������弴�Ǻ��������Դ���롣
}
                               //output:I will summon the butler function.
							 //You rang, sir ?
							//Yes.Bring me some tea and writeable DVDs.