/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjun-yu <tanjunyu8888@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 10:20:07 by tjun-yu           #+#    #+#             */
/*   Updated: 2023/08/22 10:20:12 by tjun-yu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include "ft_stock_str.h"

//_____________________________________________________________________________
/*
#define LOG_I(NAME, V) printf("%s: %d\n", NAME, V)
#define LOG_C(NAME, V) printf("%s: %s\n", NAME, V)
#define LOG_A(NAME, I, V) printf("%s[%d]: %c\n", NAME, I, V)
#define LOG_S(NAME, V) printf("%s: %s\n", NAME, V)
#define LOG_D(S) printf("%s\n", S)
*/
//_____________________________________________________________________________
int	ft_strlen(char *str)
{
	int	size;
	int	i;

	size = 0;
	i = -1;
	while (str[++i] != 0)
		size++;
	return (size);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*arr;
	int			i;

	arr = (t_stock_str *)malloc((ac + 1) * sizeof(t_stock_str));
	if (arr == NULL)
		return (NULL);
	i = -1;
	while (++i < ac)
	{
		arr[i].size = ft_strlen(av[i]);
		arr[i].str = av[i];
		arr[i].copy = av[i];
	}
	arr[i].str = 0;
	return (arr);
}
//DELETE THESE FUNCTIONS
// void	putnbr(int num)
// {
// 	char	c;

// 	if (num >= 10)
// 		putnbr(num / 10);
// 	c = '0' + num % 10;
// 	write(1, &c, 1);
// }

// void	ft_putstr(char *str)
// {
// 	while (*str != 0)
// 		write(1, str++, 1);
// 	write(1, "\n", 1);
// }

// void	ft_show_tab(struct s_stock_str *par)
// {
// 	int	i = -1;
// 	while (par[++i].str != 0)
// 	{
// 		ft_putstr(par[i].str);
// 		putnbr(par[i].size);
// 		write(1, "\n", 1);
// 		ft_putstr(par[i].copy);
// 	}
// }
// //DELETE THESE FUNCTIONS
/*
int main(void)
{
	char* strs[] = {"Hello World", "123456789", "test", ""};

	t_stock_str* arr = ft_strs_to_tab(4, strs);

	int i = -1;
	while (arr[++i].str != 0)
	{
		printf("%s\n", arr[i].str);
		printf("%d\n", arr[i].size);
		printf("%s\n____________\n", arr[i].copy);
	}
}
*/