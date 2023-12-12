/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjun-yu <tanjunyu8888@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 10:20:27 by tjun-yu           #+#    #+#             */
/*   Updated: 2023/08/22 10:20:29 by tjun-yu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include "ft_stock_str.h"

struct s_stock_str	*ft_strs_to_tab(int ac, char **av);

void	putnbr(int num)
{
	char	c;

	if (num >= 10)
		putnbr(num / 10);
	c = '0' + num % 10;
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str != 0)
		write(1, str++, 1);
	write(1, "\n", 1);
}

void	ft_show_tab(struct s_stock_str *par)
{
	int	i = -1;
	while (par[++i].str != 0)
	{
		ft_putstr(par[i].str);
		putnbr(par[i].size);
		write(1, "\n", 1);
		ft_putstr(par[i].copy);
	}
}

/*
*/
int	main(void)
{
	char* arr[] = {"LOL", "NOOB", "ur trash", "a"};

	struct	s_stock_str*	arr_fr = ft_strs_to_tab(4, arr);
	
	ft_show_tab(arr_fr);

	return (0);
}