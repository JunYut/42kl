/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjun-yu <tanjunyu8888@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 17:39:31 by tjun-yu           #+#    #+#             */
/*   Updated: 2023/08/23 17:39:34 by tjun-yu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	*result;
	int	i;

	result = (int *)malloc(length * sizeof(int));
	if (result == NULL)
		return (NULL);
	i = -1;
	while (++i < length)
		result[i] = f(tab[i]);
	return (result);
}
