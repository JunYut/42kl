/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjun-yu <tanjunyu8888@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 15:44:15 by tjun-yu           #+#    #+#             */
/*   Updated: 2023/08/14 15:44:18 by tjun-yu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>

/*
#define DEBUG 1
#if DEBUG == 1
	#define LOG_V(NAME, V) printf("%s: %d\n", NAME, V)
	#define LOG_A(NAME, I, V) printf("%s[%d]: %d\n", NAME, I, V)
#else
	#define LOG_V(NAME, V)
#endif
*/

int	*ft_range(int min, int max);

int	*ft_range(int min, int max)
{
	int	size;
	int	i;
	int	*arr;

	if (min >= max)
		return (NULL);
	size = max - min;
	arr = (int *)malloc(size * sizeof(int));
	i = 0;
	while (++i <= size)
		arr[i - 1] = min + i - 1;
	return (arr);
}

/*
int main()
{
	int min = 0;
	int max = 10;
	int size = max - min;	LOG_V("size", size);
	int i = -1;
	int* arr = ft_range(min, max);

	if (arr == NULL)
		printf("LMAO FCKING BOZO\n");
	else
		while (++i < size)
			LOG_A("arr", i, arr[i]);
	free(arr);
}
*/