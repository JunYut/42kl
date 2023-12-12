/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjun-yu <tanjunyu8888@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 10:22:28 by tjun-yu           #+#    #+#             */
/*   Updated: 2023/08/24 10:22:29 by tjun-yu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../include/header.h"

int	ft_atoi(char *str)
{
	int	i;
	int	p_or_n;
	int	num;

	num = 0;
	p_or_n = 1;
	i = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'
		|| str[i] == '\r' || str[i] == '\f' || str[i] == '\v')
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			p_or_n *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		num = (num * 10) + (str[i] - '0');
		i++;
	}
	return (num * p_or_n);
}
