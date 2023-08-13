#include <unistd.h>
#include <stdlib.h>
#include "header.h"		//DEBUG here

#include <stdio.h>

int main(int argc, char* argv[])
{
	//_____________________________________________________
	//PART 1:	filter input
	if (argc != 2)
		{ write(1, "Error\n", 7);	return 0; }
	else if (count(argv[1]) % 4 != 0)
		{ write(1, "Error\n", 7);	return 0; }
	else if (only_num(argv[1]) == 0)
		{ write(1, "Error\n", 7);	return 0; }

	//_____________________________________________________
	//PART 2:	memory allocation
	const int side_num = count(argv[1]);
	const int x = side_num / 4;
	int* sides_units = (int*)malloc(side_num * sizeof(int));

	//_____________________________________________________
	//PART 3: filter input(again)
	if (valid_sum_of_sides(argv[1], sides_units, x) == 0)
		{ write(1, "Errorbro\n", 10);	return 0;}
	else if (valid_side_units(sides_units, side_num, x) == 0)
		{ write(1, "Error\n", 7);	return 0;}

	#if DEBUG == 2
		int i = -1;
		while (++i < side_num)
			printf("side_unit[%d]: %d\n", i, sides_units[i]);	
	#endif

	//_____________________________________________________
	//PART 4: memory allocation(again)
	int** board = create_board(x);
	fill_board(board, sides_units, x);
	display_board(board, x);
	

	free(sides_units);
	free_board(board, x);

	return 0;
}