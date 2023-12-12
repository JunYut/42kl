/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjun-yu <tanjunyu8888@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 15:43:07 by tjun-yu           #+#    #+#             */
/*   Updated: 2023/08/10 15:43:08 by tjun-yu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index);

int	ft_fibonacci(int index)
{
	int	catch;
	int	num;

	if (index < 0)
		return (-1);
	else if (index == 0)
		return (0);
	else if (index == 1)
		return (1);
	catch = 1;
	if (index > 0)
		catch = ft_fibonacci(--index);
		num = ft_fibonacci(--index);
	return (catch + num);
}

/*
#include <stdio.h>

int main()
{
	printf("%d\n", ft_fibonacci(4));
}
*/