/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjun-yu <tanjunyu8888@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 10:24:30 by tjun-yu           #+#    #+#             */
/*   Updated: 2023/08/11 10:24:32 by tjun-yu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb);

int	ft_sqrt(int nb)
{
	long	num;

	if (nb <= 0)
		return (0);
	num = 1;
	while ((num * num) < nb)
		num++;
	if ((num * num) != nb)
		return (0);
	return (num);
}

/*
#include <stdio.h>

int main()
{
	printf("%d\n", ft_sqrt(2147483647));
}
*/