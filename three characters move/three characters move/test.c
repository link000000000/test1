#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"




//test.c-----test logic
//game.h-----Game related fuction declarations,symbol decalarations,header file guarantees
//game.c-----Game related fuction implementation.
void menu()
{
	printf("******************\n");
	printf("***   1.play    **\n");
	printf("***   0.exit    **\n");
	printf("******************\n");
	printf("******************\n");
}
void GAME()
{
	char board[ROW][COL];
	//initialization
	InitBoard(board,ROW,COL);
	//accomplishment
	DisplayBoard(board,ROW,COL);
	//print content

	char ret = 0;  //Receiving game state
	while (1)
	{
		// player action
		PlayerMove(board,ROW,COL);
		DisplayBoard(board, ROW, COL);
		//determine the winning or losing
												//player win   computer win   dogfall  game continue
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}

		//computer action
		ComputerMove(board,ROW,COL);
		DisplayBoard(board, ROW, COL);
		
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
	}
	if (ret=='*')
	{
		printf("player win\n");
	}
	else if(ret == '#')
	{
		printf("computer win\n");
	}
	else
	{
		printf("dogfall\n");

	}
	DisplayBoard(board, ROW, COL);
}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("please choose the option");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			GAME();
			printf("game start\n");
			break;
		case 0:
			printf("exit the game\n");
			break;
		default:
			printf("Incorrect selection please select again\n");
			break;
		}
	} while (input);


	return 0;
}

