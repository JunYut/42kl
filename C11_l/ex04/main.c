#include <stdio.h>
#include "include/header.h"

int main(void)
{
	int arr[] = {9, 8, 7, 6, 5, 4};
	int length = sizeof(arr) / sizeof(int);

	printf("ft_is_sort: %d\n", ft_is_sort(arr, length, intcmp));
}