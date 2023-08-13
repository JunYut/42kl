#include "header.h"
#include <stdio.h>
#include <stdlib.h>

int count(char* str)
{
	int i = -1;
	int count = 0;

	while (str[++i] != 0)
		if (str[i] >= '0' && str[i] <= '9') { count++; }

	return count;
}

int only_num(char* str)
{
	int i = -1;
	char x = count(str) / 4 + '0';

	while (str[++i] != 0 && (str[i] == ' ' || (str[i] >= '1' && str[i] <= x))) {}
	if (str[i] == 0)
		return 1;
	else
		return 0;	
}

int ft_atoi(char c)
{
	return c - '0';
}

int valid_sum_of_sides(char* str, int* side_units, const int x)
{
	int sum = 0;
	int i = -1;
	int j = -1;

	while (str[++i] != 0)
		if (str[i] != ' ') { side_units[++j] = ft_atoi(str[i]); }
	i = -1;
	while (++i < x*4)
		sum += side_units[i];
	if (sum < (x * (x+4)) || sum > (x * (x+5)))
	{
		free(side_units);		
		return 0; 
	}
	else
		return 1;
}

int valid_side_units(int* side_units, int side_num, const int x)
{
	int up = -1;
	int down = x - 1;
	while ((++up < 2*x) && (++down < side_num))
	{
		int unit_sum = side_units[up] + side_units[down];
		if (unit_sum < 3 || unit_sum > x+1)
		{
			free(side_units);
			return 0;
		}	
	}

	return 1;
}
