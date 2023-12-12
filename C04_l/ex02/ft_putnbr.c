/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjun-yu <tanjunyu8888@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 10:50:34 by tjun-yu           #+#    #+#             */
/*   Updated: 2023/08/10 10:50:36 by tjun-yu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb);

void	ft_putnbr(int nb)
{
	char	num;

	if (nb == -2147483648)
		write (1, "-2147483648", 12);
	else
	{
		if (nb < 0)
		{
			write(1, "-", 1);
			nb *= -1;
		}
		if (nb >= 10)
			ft_putnbr(nb / 10);
		num = '0' + nb % 10;
		write(1, &num, 1);
	}
}

/*
#include <stdio.h>
#include <limits.h>

int main()
{
	printf("Range of int: %d to %d\n", INT_MIN, INT_MAX);
	ft_putnbr(2147483647);
}
*/