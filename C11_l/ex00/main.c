#include "header.h"

int main(void)
{
	int arr[] = {1, 2, 4, 3, 5};
	int size = sizeof(arr) / sizeof(int);

	ft_foreach(arr, size, ft_putnbr);
}