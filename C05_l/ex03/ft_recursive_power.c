/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjun-yu <tanjunyu8888@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 15:08:56 by tjun-yu           #+#    #+#             */
/*   Updated: 2023/08/10 15:08:58 by tjun-yu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power);

int	ft_recursive_power(int nb, int power)
{
	int	catch;

	catch = 1;
	if (power == 0)
		return (1);
	else if (power < 0)
		return (0);
	else
		catch = ft_recursive_power(nb, power - 1);
	return (catch * nb);
}

/*
#include <stdio.h>

int main()
{
	printf("%d\n", ft_recursive_power(3, 4));
}
*/