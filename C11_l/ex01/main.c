#include <stdio.h>
#include <stdlib.h>
#include "header.h"

int main(void)
{
	int arr[] = {1, 3, 2, 5, 8, 9};
	int size = sizeof(arr) / sizeof(int);

	int* is_odd = ft_map(arr, size, ft_is_odd);
	for(int i = 0; i < size; i++)
	{
		printf("is_odd[%d]: %d\n", i, is_odd[i]);
	}

	free(is_odd);
}