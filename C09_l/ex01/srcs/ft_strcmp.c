/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjun-yu <tanjunyu8888@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 15:26:27 by tjun-yu           #+#    #+#             */
/*   Updated: 2023/08/16 15:26:29 by tjun-yu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while ((s1[i] != 0 && s2[i] != 0) && (s1[i] == s2[i]))
		i++;
	if (s1[i] == 0 || s2[i] == 0)
		return (0);
	if ((s1[i] == 0 && s2[i] != 0) || (s1[i] != 0 && s2[i] == 0))
		return (s1[i - 1] - s2[i - 1]);
	return (s1[i] - s2[i]);
}

/*
#include <stdio.h>

int main()
{
	char str1[] = "hello w";
	char str2[] = "hello woORLD";
	printf("%d\n", ft_strcmp(str2, str1));
}
*/