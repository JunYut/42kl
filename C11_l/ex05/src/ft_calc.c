/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_do_ops.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjun-yu <tanjunyu8888@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 10:57:31 by tjun-yu           #+#    #+#             */
/*   Updated: 2023/08/24 10:57:33 by tjun-yu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../include/header.h"

int	calc(int a, int b, char operator)
{
	int	(*operation[5])(int, int);

	operation[0] = add;
	operation[1] = subtract;
	operation[2] = multiply;
	operation[3] = divide;
	operation[4] = modulus;
	if (operator == '+')
		return (operation[0](a, b));
	if (operator == '-')
		return (operation[1](a, b));
	if (operator == '*')
		return (operation[2](a, b));
	if (operator == '/')
		return (operation[3](a, b));
	if (operator == '%')
		return (operation[4](a, b));
	return (0);
}
