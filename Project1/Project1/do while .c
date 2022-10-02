#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//do while 先执行再判断
//while 判断再执行
//int main()
//{
//	int i = 1;
//	do
//	{
//		if (i==5)
//		{
//			break;
//		}
//		printf("%d\n", i);
//		i++;
//	} while (i<=10);
//
//
//	return 0;
//}
//1!+2!+3!+....10!=?
//int main()
//{	
//	int sum = 0;
//	int a = 0;
//	int ret=1 ;
//	for (a=1;a<=10;a++ )
//	{
//		ret *= a;
//		sum += ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//
//}

int main()
{
	int arr[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19};
	int k = 21;//This is the number to look for
	//Look for the value of k in the ordered array ARr
	int sz = sizeof(arr) / sizeof(arr[0]);//数组的元素个数
	int left = 0;
	int right = sz - 1;
	int mid = 0;
	while (left<=right)
	{
		int mid = (left + right) / 2;
		if (arr[mid] < k)
		{
			left = mid + 1;
		}
		else if (arr[mid] > k)
		{
			right = mid - 1;
		}
		else
		{
			printf("This number is %d\n", mid);
			break;
		}
	}
	if (left>right)
	{
		printf("can't find it\n");
	}
	return 0;
}