/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjun-yu <tanjunyu8888@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 11:00:01 by tjun-yu           #+#    #+#             */
/*   Updated: 2023/08/11 11:00:03 by tjun-yu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_find_next_prime(int nb);

int	ft_find_next_prime(int nb)
{
	int	divide;
	int	prime;

	if (nb <= 1)
		return (2);
	divide = 2;
	while (divide < nb && nb % divide != 0)
		divide++;
	if (divide == nb)
		return (nb);
	prime = nb + 1;
	divide = 2;
	while (divide < prime)
	{
		if (prime % divide == 0)
			prime++;
		divide++;
	}
	return (prime);
}

/*
#include <stdio.h>
#include <limits.h>

int main()
{
	printf("%d\n", ft_find_next_prime(INT_MAX));
}
*/