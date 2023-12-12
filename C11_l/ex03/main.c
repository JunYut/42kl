#include <stdio.h>
#include "include/header.h"

int main(void)
{
	char* strs[] = {"HelloWorld", "1234567890", "HOWAREYOU"};

	printf("ft_count_if: %d\n", ft_count_if(strs, 3, is_alpha));
}