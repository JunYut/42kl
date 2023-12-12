/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do-op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjun-yu <tanjunyu8888@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 09:40:05 by tjun-yu           #+#    #+#             */
/*   Updated: 2023/08/24 09:40:06 by tjun-yu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include "include/header.h"

int	main(int argc, char *argv[])
{
	int	result;

	if (argc - 1 != 3)
		return (0);
	if (!is_operator(argv[2]))
	{
		write(1, "0\n", 2);
		return (0);
	}
	if (*argv[2] == '/' && *argv[3] == '0')
	{
		write(1, "Stop : division by zero\n", 24);
		return (0);
	}
	if (*argv[2] == '%' && *argv[3] == '0')
	{
		write(1, "Stop : modulo by zero\n", 22);
		return (0);
	}
	result = calc(ft_atoi(argv[1]), ft_atoi(argv[3]), *argv[2]);
	ft_putnbr(result);
	write(1, "\n", 1);
}
