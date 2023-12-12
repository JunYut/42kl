/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjun-yu <tanjunyu8888@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 10:46:13 by tjun-yu           #+#    #+#             */
/*   Updated: 2023/08/10 10:46:15 by tjun-yu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putstr(char *str);

void	ft_putstr(char *str)
{
	while (*str != 0)
		write(1, str++, 1);
}

/*
#include <stdio.h>

int main()
{
	ft_putstr("Hello world!");
}
*/