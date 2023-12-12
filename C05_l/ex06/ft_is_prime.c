/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjun-yu <tanjunyu8888@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 10:51:12 by tjun-yu           #+#    #+#             */
/*   Updated: 2023/08/11 10:51:15 by tjun-yu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb);

int	ft_is_prime(int nb)
{
	int	divide;

	if (nb <= 1)
		return (0);
	divide = 2;
	while (divide < nb)
	{
		if (nb % divide == 0)
			return (0);
		divide++;
	}
	return (1);
}

/*
#include <stdio.h>

int main()
{
	printf("%d\n", ft_is_prime(2147483647));
}
*/