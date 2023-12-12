#include "header.h"
#include <stdio.h>

void fill_anchor(int** board, int* side_units, const int x)
{
	int unit = -1;
	int i = -1;
	int j = 0;

	// unit <= x
	while (++unit < x - 1)
	{
		if (side_units[unit] == 1)
			board[0][unit] = 4;
		else if (side_units[unit] == 4)
		{
			while (++i < x)
				board[i][unit] = ++j;
		}
	}

	// unit > x && unit <= 2*x
	i = x;
	j = 0;	
	while (++unit < 2*x - 1)
	{
		if (side_units[unit] == 1)
			board[x - 1][unit - x] = 4;
		else if (side_units[unit] == 4)
		{
			while (--i > -1)
				board[i][unit - x] = ++j;
		}
	}
	
	// unit > 2*x && unit <= 3*x
	i = -1;
	j = 0;
	while (++unit < 3*x - 1)
	{
		if (side_units[unit] == 1)
			board[unit - 2*x][0] = 4;
		else if (side_units[unit] == 4)
		{
			while (++i < x)
				board[unit - 2*x][i] = ++j;
		}
	}

	// unit > 3*x
	i = x;
	j = 0;
	while (++unit < 4*x - 1)
	{
		if (side_units[unit] == 1)
			board[unit - 3*x][x - 1] = 4;
		else if (side_units[unit] == 4)
		{
			while (--i > -1)
				board[unit - 3*x][i] = ++j;
		}
	}
}