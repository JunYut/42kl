/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjun-yu <tanjunyu8888@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 12:00:16 by tjun-yu           #+#    #+#             */
/*   Updated: 2023/08/10 12:00:18 by tjun-yu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str);

int	ft_atoi(char *str)
{
	int		num;
	int		n_or_p;
	char	*ptr;

	num = 0;
	n_or_p = 1;
	while (*str != 0 && !(*str >= '0' && *str <= '9'))
		str++;
	ptr = str;
	while (*(ptr - 1) == '-')
	{
		n_or_p *= -1;
		ptr--;
	}
	while (*str >= '0' && *str <= '9')
	{
		num = (num * 10) + (*str - '0');
		str++;
	}
	return (num * n_or_p);
}

/*
#include <stdio.h>

int main(int argc, char** argv)
{
	argc += 0;
	argv++;		argv--;

	char str[] = "	--+--+1234ab567";

	printf("%d\n", ft_atoi(str));
}
*/