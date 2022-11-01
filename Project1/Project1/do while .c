#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<string.h>
#include<windows.h>
#include<stdlib.h>
#include<time.h>
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

//int main()
//{
//	int arr[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19};
//	int k = 21;//This is the number to look for
//	//Look for the value of k in the ordered array ARr
//	int sz = sizeof(arr) / sizeof(arr[0]);//数组的元素个数
//	int left = 0;
//	int right = sz - 1;
//	int mid = 0;
//	while (left<=right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			printf("This number is %d\n", mid);
//			break;
//		}
//	}
//	if (left>right)
//	{
//		printf("can't find it\n");
//	}
//	return 0;
//}


//int main()
//{
//	char arr1[] = "welcome to new york!!!";
//	char arr2[] = "####################";
//	int left = 0;
//	int right = strlen(arr1) - 1;
//	
//	while (left<=right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		Sleep(1000); 
//		printf("%s\n", arr2);
//		left++;
//		right--;
//	}
//
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int j = 0;
//	char S_password[20] = { 0 };
//	char STORE_password[20] = { 0 };
//	char STORE1_password[20] = { 0 };
//	printf("please set your password\n");
//	scanf("%s", STORE_password);
//	printf("please comfirm again\n");
//	scanf("%s", STORE1_password);
//	if (STORE1_password== STORE_password)
//	{
//		printf("The password has been set\n");
//		
//	}
//	else
//	{
//		printf("Two input has difference.please try again\n");
//	}
//	for (i = 0; i <= 3; i++)
//	{
//		printf("please input your password to login admin\n");
//		scanf("%s", S_password);
//		if (S_password == STORE1_password)
//		{
//			printf("successful login\n");
//			break;
//		}
//		else
//		{
//			printf("please try again\n");
//			scanf("%s", S_password);
//			if (S_password == STORE1_password)
//			{
//				printf("successful login\n");
//				break;
//			}
//			else
//			{
//				printf("please try again\n");
//				scanf("%s", S_password);
//				if (S_password == STORE1_password)
//				{
//					printf("successful login\n");
//					break;
//				}
//			}
//		}
//
//	}	return 0;
//}


//int main()
//{
//	int i = 0;
//	char password[20] = { 0 };
//	
//	for (i = 0; i <3; i++)
//	{
//		printf("please input the password\n");
//		scanf("%s", password);
//		if (strcmp(password,"zxy128679")==0)
//		{
//			printf("login successfully\n");
//			break;
//		}
//		else
//		{
//			printf("wrong password\n");
//		}
//		
//		}
//		if (i == 3)
//{
//	printf("The password is incorrect for three consecutive times\n");
//}
//	return 0;
//
//}

//写一个猜数字游戏
//1.自动产生一个1-100之间的随机数
//2.猜数字
// a.猜对了，就恭喜你,猜对了
// b.你猜错了,会告诉猜大了,还是小了，继续猜，直到猜对
//3.游戏一直玩,除非退出游戏。

//void menu()
//{
//	printf("******************\n");
//	printf("*****  1.Play  ***\n");
//	printf("*****  0.exit  ***\n");
//	printf("******************\n");
//	printf("******************\n");
//}
//
//void game()
//{
//	//时间戳一直在发生变换 srand内数字需要随机
//	int ret = rand() % 100 + 1;   
//	int guess = 0;
//	printf("game start\n");
//	while (1)
//	{
//		printf("please guess the number\n");
//		scanf("%d", &guess);
//		if (guess < ret)
//		{
//			printf("guess a little\N");
//
//		}
//		else if(guess>ret)
//		{
//			printf("guess a big\n");
//		}
//		else
//		{
//			printf("congratulation\n");
//			break;
//		}
//	}
//
//}
//
//int main()
//{
//	srand((unsigned int)time(NULL));
//	int input = 0;
//	do
//	{
//		menu();
//		printf("please input:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("exit the game");
//			break;
//		default:
//			printf("Incorrect selection, please re-enter\n");
//			break;
//		}
//	} while (input);	
//
//
//
//
//
//	return 0;
//}

