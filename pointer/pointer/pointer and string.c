#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<stdlib.h>
#include<string.h>

//	int p;
//	
//	printf("%p\n", &i);           //i和p在地址紧挨着存放在stack
//	printf("%p\n", &p);           
//
//
//
//	return 0;
//}

//int main()
//{
//	int a[10];
//	
//	printf("%p\n", &a);
//	printf("%p\n", a);
//	printf("%p\n", &a[0]);     
//	printf("%p\n", &a[1]);
//   /*000000CBFCF7FC68
//	 000000CBFCF7FC68      //The address units of adjacent arrays always differ by 4
//	 000000CBFCF7FC68
//	 000000CBFCF7FC6C*/
//
//
//	return 0;
//}

//int *p,q      p是指针，q是int型的变量

// int *const q=&i      意思是q固定i的地址不能指向别的地址
// const int *q=&i 意思是i是普通变量p是指针 p指向了i i和q仍然是可变的，但不能通过p进行赋值
//指针不可修改和不能通过指针修改


//int main()
//{
//
//	typedef struct {
//		int x;
//		int y;
//	} Point;
//	Point pos;
//	Point* pPos = &pos;
//	(*pPos).x = 15;
//	pPos->y = 20;
//	printf("%d,%d", pos.x, pos.y);
//
//	return 0;
//}

//
//int main()
//{
//	char ac[] = { 0,1,2,3,4,5,6,7,8,9 };
//	char* p = &ac[0];
//	char* p1 = &ac[4];
//	printf("%p\n", p);            
//	printf("%p\n", p+1);
//	printf("%d\n", p1-p);       
//	//两个指针作差，结果是两个地址的差除以数组的sizeof类型大小
//	int ai[]= { 0,1,2,3,4,5,6,7,8,9 };
//	int* q = ai;
//	int* q1 = &ai[6];
//	printf("%p\n", q);              
//	printf("%p\n", q1);
//	printf("%d\n", q1-q);
//
//
//
//
//
//	return 0;
//}


//int main()
//{
//	char ac[] = { 0,1,2,3,4,5,6,7,8,9 ,-1};
//	int ai[] = { 0,1,2,3,4,5,6,7,8,9 ,-1};
//	char* p = &ac[0];
//	int* q = &ai[0];
//
//	//for ( i = 0; i < sizeof(ac)/sizeof(ac[0]); i++)
//	//{
//	//	printf("%d\n", ac[i]);                 //数组遍历的第一种方法
//
//	//}
//
//	while (*p!=-1)
//	{
//		printf("%d\n", *p++);
//	}
//	
//	int i;
//	int* zero = &i;
//	*zero = NULL;
//	printf("%d\n", i);
//
//
//	return 0;
//}

//
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9 };
//	char c[5];
//	printf("%d\n", &arr[9] - &c[0]);        //指针相减得前提是两个指针指向同一块空间
//
//
//
//
//
//	return 0;
//}




//int main()
//{
//	void* p;
//	int cnt = 0;
//	while ((p=malloc(100*1024*1024)))
//	{
//		cnt++;
//	}
//
//	printf("分配了%d00MB的空间\n", cnt);
//
//
//	return 0;
//}


//
//int main()
//{
//	int ch;
//
//	while ((ch=getchar())!=EOF)
//	{
//		putchar(ch);
//	}                 //procedure and user's windows exist a intermediary that be called "shell", which act as the equivalent of a stack and be stored.
//	getchar一个接着一个从shell里面读取
//	printf("EOF\n");
//	return 0;
//}


//int Readmonth()
//{
//	int mouth;
//	while (scanf("%d",&mouth)==1)
//	{
//		if (mouth > 0 && mouth < 13)
//		{
//			return mouth;
//
//		}
//		else
//		{
//			printf("please try again\n");
//		}	
//	}
//}
//
//
//
//
//
//int main()
//{
//	int month;
//	char months[][10] = { "January","February","March","April","May","June","July","August","September","October","November","December" };
//	printf("请输入月份:\n");
//
//	month = Readmonth();
//		
//	printf("%s", months[month - 1]);
//
//	return 0;
//}
//
//

//int My_strlen(const char* s)
//{
//	int cnt = 0;
//	int idx = 0;
//
//	while (s[idx]!='\0')
//	{
//		idx++;
//		cnt++;
//
//
//
//	}
//	
//	return cnt;
//
//}
//
//
//
//int main()
//{
//	char line[] = { "hello" };
//	printf("strlen=%lu\n", My_strlen(line));
//	printf("sizeof=%lu\n", sizeof(line));
//
//
//
//
//	return 0;
//}


//strcap函数 string compare
//0:S1==S2
//1:S1>S2
//-1:S2<S1


//int my_strcmp(const char* s1, const char* s2)
//{
//	int idx = 0;
//	while (s1[idx]==s2[idx]&&s1[idx]!='\0')
//	{
//		idx++;
//	}     //数组遍历索引进行比较
//	return s1[idx] - s2[idx];
//	
//	while (*s1==*s2&&*s1!='\0')
//	{
//		s1++;                         
//		s2++;
//		//指针指向进行比较
//	}
//	return *s1 - *s2;
//}
//
//
//int main(int argc,char const *argv[])
//{
//	char s1[] = "abc";
//	char s2[] = "abc";
//
//	printf("%d\n", my_strcmp(s1, s2));
//	              //If both are equal, return 0
//
//	if (my_strcmp(s1,s2)==0)
//	{
//		printf("%s", s1);
//	}
//
//
//	return 0;
//}

//char * my_strcpy(char* dst, const char* src)
//{
//	/*int index = 0;
//	while (src[index])
//	{
//		dst[index] = src[index];
//		             数组遍历版本
//
//		index++;
//	}
//	dst[index] = '\0';*/
//	
//	char* ret = dst;
//
//	while (*src)
//	{
//		*dst = *src;
//		src++;
//		dst++;
//	}
//	*dst = '\0';
//	return ret;
//
//}
//
//int main()
//{
//	//strcpy char*strcap(char *restrict dst,const char*restrict src)  restrict fuction:表明src和dst不重叠
//	//scr拷贝到dst 返回dst    B-->A returns B
//	char src[] = "abcdef";
//	char dst[] = "eeeeee";
//
//
//	my_strcpy(dst, src);
//	printf("%s", dst);
//
//
//	return 0;
//}





int main()
{
	char s[] = "hello";

	char* p = strchr(s, 'l');

	p = strchr(p + 1, 'l');     //+1跳过上一次找到的l的地址寻找第二个l

	char c = *p;        //终止符插入到了s里面进行copy
	*p = '\0';
	
	char* t = (char*)malloc(strlen(s) + 1);
	strcpy(t, s);
	printf("%s\n", t);

	free(t);
	return 0;
}






