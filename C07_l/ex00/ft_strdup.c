/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjun-yu <tanjunyu8888@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 11:58:16 by tjun-yu           #+#    #+#             */
/*   Updated: 2023/08/14 11:58:21 by tjun-yu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	*ft_strdup(char *src);

char	*ft_strdup(char *src)
{
	int		size;
	int		i;
	char	*duplicate;

	size = 0;
	i = -1;
	while (src[++i] != 0)
		size++;
	size++;
	duplicate = (char *)malloc(size * sizeof(char));
	i = -1;
	while (src[++i] != 0)
		duplicate[i] = src[i];
	duplicate[i] = 0;
	return (duplicate);
}

/*
int main()
{
	// original
	char* original = "Hello, World!";
	printf("original: %s\n", original);

	// ft
	char* duplicate = ft_strdup(original);
	printf("duplicate: %s\n", duplicate);

	free(duplicate);
}
*/