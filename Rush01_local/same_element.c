#include "header.h"

int same_element(int** board, const int x)
{
	int i = 0;
	int j = -1;
	int sum = 0;
	int line_sum = 0;

	while (++i <= x)
		line_sum += i;

	i = -1;
	while (++i < x)
	{
		j = -1;
		while (++j < x)
			sum += board[i][j];
		if (sum != line_sum)
			return 1;
	}

	i = -1;
	while (++i < x)
	{
		j = -1;
		while (++j < x)
			sum += board[j][i];
		if (sum != line_sum)
			return 1;
	}

	return 0;	
}