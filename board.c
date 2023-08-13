#include "header.h"
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int** create_board(const int x)
{
	int** board = (int**)malloc(x * sizeof(int*));
	int i = -1;

	while(++i < x)
		board[i] = (int*)malloc(x * sizeof(int));

	return board;
}

void free_board(int** board, const int x)
{
	int i = -1;

	while(++i < x)
		free(board[i]);

	free(board);
}

//FOCUS HERE___________________________________________________________________
void fill_1_or_x(int* board, int side_units, const int x)
{
	LOG("side_unit", side_units);
	if (side_units == 1 || side_units == x)
		*board = side_units;
	else
		*board = 0;
}

void fill_board(int** board, int* side_units, const int x)
{
	int row = -1;

	while (++row < x)
	{
		int column = -1;
		while (++column < x)
			fill_1_or_x(&(board[row][column]), side_units[row], x);	
	}
		
}
//_____________________________________________________________________________

void display_board(int** board, const int x)
{
	int row = -1;
	char num;

	while (++row < x)
	{
		int column = -1;
		while (++column < x)
		{
			num = board[row][column] + '0';
			write(1, &num, 1);
			write(1, " ", 1);
		}
		write(1, "\n", 2);
	}
}