#include <stdio.h>

//int main()
//{
//	printf("c:\test\test.c");  //ת���ַ���ת����ԭ������˼
//	�������� est est.c ��ʧȥt
//
//		return 0;
//

//int main()
//{
//	printf("%s\n", "abc");
//	printf("%s\n", "a");
//	/*printf("%s\n", """);  */   //����������˫����ʱ��һ��˫�����޷������������±���
//	
//								 //solution::::
//	printf("%s\n,", "\"");
//		//To convert double quotes with a slash to change the original meaning
//	//<<<< successfully print the "
//
//	//printf("ab\ncd");  // \+n 
//	//return 0;
//	return 0;
//}


//����ת���ַ� \ddd ddd��ʾ1-3���˽������֡��� \130 X
//xdd dd��ʾ2��ʮ���������֣��磺\x30 0

int main()
{
	printf("%c\n", '\130');   //<<<�����X �˽��Ƶ�130�� 8^2+8^1*3+8^0<<88
	//X----------------ASCII��ֵ88
	return 0;
}