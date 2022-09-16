#include <stdio.h>

//int main()
//{
//	printf("c:\test\test.c");  //转义字符：转变了原来的意思
//	运行生成 est est.c 而失去t
//
//		return 0;
//

//int main()
//{
//	printf("%s\n", "abc");
//	printf("%s\n", "a");
//	/*printf("%s\n", """);  */   //当出现三个双引号时，一个双引号无法解析，而导致报错
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


//特殊转义字符 \ddd ddd表示1-3个八进制数字。如 \130 X
//xdd dd表示2个十六进制数字，如：\x30 0

int main()
{
	printf("%c\n", '\130');   //<<<输出了X 八进制的130是 8^2+8^1*3+8^0<<88
	//X----------------ASCII码值88
	return 0;
}