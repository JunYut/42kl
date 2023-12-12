/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_funcs.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjun-yu <tanjunyu8888@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 09:45:58 by tjun-yu           #+#    #+#             */
/*   Updated: 2023/08/24 09:45:59 by tjun-yu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include "../include/header.h"

int	is_operator(char *arg2)
{
	char	*operators;
	int		i;

	i = 0;
	while (arg2[i] != 0)
		i++;
	if (i != 1)
		return (0);
	operators = "+-/*%%";
	i = -1;
	while (operators[++i] != 0)
		if (*arg2 == operators[i])
			return (1);
	return (0);
}

void	ft_putnbr(int result)
{
	char	num;

	if (result == -2147483648)
		write(1, "-2147483648", 11);
	else
	{
		if (result < 0)
		{
			write(1, "-", 1);
			result *= -1;
		}
		if (result >= 10)
			ft_putnbr(result / 10);
		num = (result % 10) + '0';
		write(1, &num, 1);
	}
}
