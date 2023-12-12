/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjun-yu <tanjunyu8888@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 08:03:05 by tjun-yu           #+#    #+#             */
/*   Updated: 2023/08/15 08:03:11 by tjun-yu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>

/*
#define DEBUG 1
#if DEBUG == 1
	#define LOG_V(NAME, V) printf("%s: %d\n", NAME, V)
	#define LOG_A(NAME, I, V) printf("%s[%d]: %d\n", NAME, I, V)
	#define LOG_S(STR) printf("%s\n", STR)
	#define LOG_D printf("DEBUG\n")
#else
	#define LOG_V(X, Y)
	#define LOG_A(X, Y, Z)
	#define LOG_S(X);
	#define LOG_D
#endif
*/

int	ft_ultimate_range(int **range, int min, int max);

int	ft_ultimate_range(int **range, int min, int max)
{
	int	size;
	int	i;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	size = max - min;
	*range = (int *)malloc(size * sizeof(int));
	i = -1;
	while (++i <= size)
	{
		(*range)[i - 1] = min + i - 1;
	}
	return (size);
}

/*
int main()
{
	int min = 9;
	int max = 11;
	int* range = NULL;
	int size = ft_ultimate_range(&range, min, max);

	if (size == 0)
	{
		LOG_V("size", size);
		printf("RIP BOZO\n");
		return 0;
	}
	
	int i = -1;
	LOG_V("size", size);
	while (++i < size)
		printf("range[%d]: %d\n", i, range[i]);
}
*/