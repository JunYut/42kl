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
	while (*s1 == *s2)
	{
		if (*s1 == 0 && *s2 == 0)
			return (*(s1 - 1) - *(s2 - 1));
		else
		{
			s1++;
			s2++;
		}
	}
	return (*s1 - *s2);
}

/*
#include <stdio.h>
#include <string.h>

int main()
{
	char str1[] = "hello w";
	char str2[] = "hello woORLD";
	printf("ft: %d\n", ft_strcmp(str2, str1));
	printf("og: %d\n", strcmp(str2, str2));
}
*/