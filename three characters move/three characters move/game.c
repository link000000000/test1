#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"


//initialization
void InitBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for ( i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			board[i][j] = ' ';

		} 
	}
}

void DisplayBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		int j = 0;
		for (j = 0; j < col; j++)
		{
			printf(" %c ", board[i][j]);
			if (j<col-1)
			{
				printf("|");
			}
		}
		printf("\n");
		if (i < row - 1)
		{
			int j = 0;
			for ( j = 0; j < col; j++)
			{
				printf("---");
				if (j<col-1)
				{
					printf("|");
				}
			}
			printf("\n");
		}
	}

}

void PlayerMove(char board[][COL], int row, int col)
{
	int x = 0;
	int y = 0;

	printf("please move>\n");

	printf("please input the coordinate");
	scanf("%d %d", &x, &y);

	//Determine the coordinate legitimacy.

	while (1)
	{
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			//determine whether it is occupied
			if (board[x-1][y-1]==' ')
			{
				board[x - 1][y - 1] = '*';
					break;
			}

		}

		else
		{
			printf("The coordinate is illegal,please retype it\n");
			break;
		}

	}

}

void ComputerMove(char board[][COL], int row, int col)
{
	printf("computer action\n");


	while (1)
	{
		int x = rand() % row;
		int y = rand() % col;
		if (board[x][y] == ' ')
		{
			board[x][y] = '#';
			break;

		}

	}

}

int IsFull(char board[ROW][COL], int row, int col)
{
	//determine if there is a blank
	int i = 0;
	int j = 0;

	for ( i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (board[i][j] == ' ')
			{
				return 0;
			}
		}
	}
	return 1;

}
char IsWin(char board[ROW][COL], int row, int col)
{
	//determine row
	int i = 0;
	for ( i = 0; i <row; i++)
	{
		if (board[i][0] == board[i][1] == board[i][2] && board[i][1] != ' ')
		{
			return board[i][1];// return successful character

		}
		
	}
	//determine column
	for ( i = 0; i < COL; i++)
	{
		if (board[0][i] == board[1][i] == board[2][i] && board[1][i] != ' ')
		{
			return board[1][i];
		}
	}
	//determine diagonal
	if (board[0][0]==board[1][1]==board[2][2] && board[1][1]!=' ')
	{
		return board[1][1];
	}
	//determine back-diagonal
	if (board[0][2] == board[1][1] == board[2][0] && board[1][1] != ' ')
	{
		return board[1][1];
	}
	

	//determine dogfall
	//return 1 if full, 0 otherwise
	int ret = IsFull(board,row,col);
	if (ret == 1)
	{
		return 'Q';

	}
	
	return 'C';
}


