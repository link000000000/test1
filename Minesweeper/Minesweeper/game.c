#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"

void menu()
{
	printf("***********************\n");
	printf("******  1.play    *****\n");
	printf("******  0.exit    *****\n");
	printf("***********************\n");
	printf("***********************\n");
}




int main()
{
	int input = 0;
	do
	{
		menu(); 
		printf("ÇëÑ¡Ôñ£º>");
		scanf("%d",& input);
		switch (input)
		{
		case 1:
			printf("game start\n");
			break;
		case 0:
			printf("exit the game\n");
			break;
		default:
			printf("input error,please try again\n");
			break;
		}
	} while (input);


	return 0;
}