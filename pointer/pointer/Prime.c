//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//
//#include<string.h>
//
//int isPrime(int x, int knownPrimes[], int number0fknownPrimes)
//{
//	int ret = 1;
//	int i;
//	for ( i = 0; i < number0fknownPrimes; i++)
//	{
//		if (x%knownPrimes[i]==0)
//		{
//			ret = 0;
//			break;
//
//		}
//	}
//	return ret;
//
//}
//
//int main(void)
//{
//	const int number = 10;
//	int prime[10] = { 2 };
//	int count = 1;
//	int i = 3;
//	{
//		int i;
//		printf("\t\t");
//		for ( i = 0; i < number; i++)
//		{
//			printf("%d\t", i);
//		}
//		printf("\n");
//	}
//	while (count<number)
//	{
//		if (isPrime(i, prime, count))
//		{
//			prime[count++] = i;
//
//		}
//		{
//			printf("i=%d\tcnt=%d\t", i, count);
//			{
//			int i;
//			for (i = 0; i < number; i++)
//			{
//				printf("%d\t", prime[i]);
//			}
//			}
//			printf("\n");
//		}
//		i++;
//	}
//
//	for ( i = 0; i < number; i++)
//	{
//		printf("%d", prime[i]);
//		if ((i + 1) % 5)printf("\t");
//		else printf("\n");
//	}
//
//
//	return 0;
//}