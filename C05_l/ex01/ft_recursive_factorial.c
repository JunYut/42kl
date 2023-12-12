/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjun-yu <tanjunyu8888@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 14:00:14 by tjun-yu           #+#    #+#             */
/*   Updated: 2023/08/10 14:00:16 by tjun-yu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb);

int	ft_recursive_factorial(int nb)
{
	int	catch;

	catch = 1;
	if (nb > 1)
		catch = ft_recursive_factorial(nb - 1);
	else if (nb <= 0)
		return (0);
	return (nb * catch);
}

/*
#include <stdio.h>

int main()
{
	printf("%d\n", ft_recursive_factorial(6));
}
*/