/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjun-yu <tanjunyu8888@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 10:32:46 by tjun-yu           #+#    #+#             */
/*   Updated: 2023/08/10 10:32:48 by tjun-yu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str);

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (*str != 0)
	{
		count++;
		str++;
	}
	return (count);
}

/*
#include <stdio.h>

int main()
{
	char str0[] = "Hello world!";
	char str1[] = "";

	printf("%s: %d\n", str0, ft_strlen(str0));
	printf("%s: %d\n", str1, ft_strlen(str1));
}
*/