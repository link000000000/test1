//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>


//int amount[] = { 1,5,10,25,50 };
//char * name[] = { "penny","nickel","dime","quarter","half-dollar" };
//
//
//
//int search(int key, int a[], int len)
//{
//	int ret = -1;
//	for (int i = 0; i < len; i++)
//	{
//		if (key == a[i])
//		{
//			ret = i;                   //一个变量对应一个且单一出口
//			break;
//		}
//	}
//	return ret;
//}                                   //simply linear search
//
//int main()
//{
//	int k = 10;
//
//	int r = search(k, amount, sizeof(amount) / sizeof(amount[0]));
//
//	if (r>-1)
//	{
//		printf("%s\n", name[r]);
//	}
//
//	return 0;
//}
//
//



//struct {	
//	int amount;
//	char *name;
//}	coins[] = {
//	{1,"penny"},
//	{5,"nickel"},
//	{10,"dime"},
//	{25,"quarter"},
//	{50,"half-dollar"}
//};
//
//
//int main()
//{
//	int k = 10;
//	
//	for (int i = 0; i <sizeof(coins)/sizeof(coins[0]); i++)
//	{
//		if (k == coins[i].amount) {
//			printf("%s\n", coins[i].name);
//				break;
//
//		}
//	}
//
//
//}


//二分搜索



//
//int search(int k, int a[], int len) {
//	int ret = -1;
//	int left = 0;
//	int right = len - 1;
//	while (right>=left)
//	{
//		int mid = (left + right) / 2;
//		if (a[mid]==k)
//		{
//			ret = mid;
//			break;
//
//		}
//		else if (a[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			left = mid + 1;
//
//		}
//	}
//	return ret;
//}
//
//int main()
//{
//	int amount[] = { 1,2,3,5,6,7,64,88,99,977,1085,3333,4444,5555,6666 };
//	int k = 7;
//	int r = search(k, amount, sizeof(amount) / sizeof(amount[0]));
//	
//	if (r>-1)
//	{
//		printf("%d\n", amount[r]);
//	}
//	return 0;
//}

//int max(int a[], int len)
//{
//	int maxid = 0;
//	for (int i = 0; i < len; i++)
//	{
//		if (a[i] > a[maxid])
//		{
//			maxid = i;
//		}
//	}
//	return maxid;
//}
//int main()
//{
//	int a[] = { 2,45,6,12,87,34,90,24,23,11,65 };
//	int len = sizeof(a) / sizeof(a[0]);
//	int maxid = max(a, sizeof(a) / sizeof(a[0]));
//	//swap a[maxid],a[len-1]
//	for (int i = len - 1;i>0; i--)
//	{                                  //Selective Sort
//		int maxid = max(a, i+1);
//		int t = a[maxid];
//		a[maxid] = a[i];
//		a[i] = t;
//
//	}
//	for (int i = 0; i < len; i++)
//	{
//		printf("%d  ", a[i]);
//	}
//	return 0;
//}