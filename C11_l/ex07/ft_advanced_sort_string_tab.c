/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_string_tab.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjun-yu <tanjunyu8888@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 08:58:24 by tjun-yu           #+#    #+#             */
/*   Updated: 2023/08/25 08:58:25 by tjun-yu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = -1;
	while (s1[i] == s2[i] && s1[i] != 0)
		i++;
	return (s1[i] - s2[i]);
}

// void	ft_advanced_sort_string_tab(char **tab, int(*cmp)(char *, char *))
// {

// }

/*
*/
int main(void)
{
	char* strs[] = {"ABCDEFG", "ABCDEFGH", "ABCDEFGh", 0};

	printf("ft_strcmp: %d\n", ft_strcmp(strs[0], strs[0]));

	int i = -1;
	while (strs[++i] != 0)
		printf("%s\n", strs[i]);
}
