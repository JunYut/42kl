/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjun-yu <tanjunyu8888@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 13:53:56 by tjun-yu           #+#    #+#             */
/*   Updated: 2023/08/10 13:53:58 by tjun-yu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb);

int	ft_iterative_factorial(int nb)
{
	int	num;
	int	sub;

	num = 1;
	sub = nb;
	while (sub != 0)
		num *= sub--;
	return (num);
}

/*
#include <stdio.h>

int main()
{
	printf("%d\n", ft_iterative_factorial(5));
}
*/