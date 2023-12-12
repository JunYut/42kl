/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_do_op.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjun-yu <tanjunyu8888@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 10:22:47 by tjun-yu           #+#    #+#             */
/*   Updated: 2023/08/24 10:22:49 by tjun-yu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../include/header.h"

int	add(int a, int b)
{
	return (a + b);
}

int	subtract(int a, int b)
{
	return (a - b);
}

int	multiply(int a, int b)
{
	return (a * b);
}

int	divide(int a, int b)
{
	if (b == 0)
		return (0);
	return (a / b);
}

int	modulus(int a, int b)
{
	if (b == 0)
		return (0);
	return (a % b);
}
