#include "../include/header.h"

int is_alpha(char* str)
{
	int i = -1;

	while (str[++i] != 0)
		if (!(str[i] >= 'A' && str[i] <= 'Z') && !(str[i] >= 'a' && str[i] <= 'z'))
			return (0);
	return (1);
}

int is_num(char* str)
{
	while (*str >= '0' && *str <= '9' && *str != 0)
		str++;
	if (*str == 0)
		return (1);
	else
		return (0);
}
