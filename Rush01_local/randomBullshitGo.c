#include "header.h"

void randomBullshitGo(int** board, const int x)
{
	int i = -1;

	while (same_element(board, x))
	{
		while (++i < x)
		{
			int j = -1;
			while (++j < x)
			{
				if (board[i][j] == 0)
					board[i][j]++;		
			}

		}
	}
	
}