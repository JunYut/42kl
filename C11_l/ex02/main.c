#include <stdio.h>
#include "include/header.h"

int main(void)
{
	char* strs[] = {"Hello World", "123456 7890", "LESGOOOOOOOOOO", 0};

	printf("ft_any: %d\n", ft_any(strs, is_num));
}