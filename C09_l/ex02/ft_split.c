/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjun-yu <tanjunyu8888@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 13:09:08 by tjun-yu           #+#    #+#             */
/*   Updated: 2023/08/20 13:09:12 by tjun-yu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>

//_____________________________________________________________________________
/*
#define DEBUG 1
#if DEBUG == 1
	#define LOG_V(NAME, V) printf("%s: %d\n", NAME, V)
	#define LOG_C(NAME, C) printf("%s: %c\n", NAME, C)
	#define LOG_S(NAME, S) printf("%s: %s\n", NAME, S)
	#define LOG_A(NAME, A, I) printf("%s[%d]: %c\n", NAME, A, I)
#endif
*/
//_____________________________________________________________________________
int	is_charset(char c, char *charset)
{
	while (*charset != 0)
	{
		if (c == *charset)
			return (1);
		charset++;
	}
	return (0);
}

int	box_count(char *str, char *charset)
{
	int	box_count;
	int	j;
	int	i;

	box_count = 1;
	j = -1;
	while (str[++j] != 0)
	{
		i = -1;
		if (is_charset(str[j], charset))
		{
			if (is_charset(str[j + 1], charset))
				box_count -= 1;
			box_count++;
		}
	}
	if (is_charset(str[0], charset))
		box_count--;
	if (is_charset(str[j - 1], charset))
		box_count--;
	return (box_count);
}

int	ft_strlen(char *str, char *charset)
{
	int	strlen;

	strlen = 0;
	while (!is_charset(*str, charset) && *str != 0)
	{
		strlen++;
		str++;
	}
	return (strlen + 1);
}

void	ft_putsr(char **str, char **src, char *charset)
{
	int	i;

	i = -1;
	while (!is_charset(**src, charset) && **src != 0)
	{
		(*str)[++i] = **src;
		(*src)++;
	}
	(*str)[i + 1] = 0;
}

char	**ft_split(char *str, char *charset)
{
	char	**arr;
	int		box_num;
	int		i;

	if (*str == 0)
		return (NULL);
	if (*charset == 0)
	{
		arr = &str;
		return (arr);
	}
	arr = (char **)malloc(box_count(str, charset) * sizeof(char *));
	box_num = box_count(str, charset);
	i = -1;
	while (++i < box_num)
	{
		while (is_charset(*str, charset))
			str++;
		arr[i] = (char *)malloc(ft_strlen(str, charset));
		ft_putsr(&arr[i], &str, charset);
	}
	return (arr);
}

/*
int main(void)
{
	char charset[] = "13579";
	char str[]  = "123AbcABC456B789";
	char str1[] = "123A456B789C";
	char str2[] = "A123B456C789";
	char str3[] = "AB123";
	char str4[] = "123AB";
	char str5[] = "123ABCC456";

	printf("str : %d\n", box_count(str, charset));
	printf("str1: %d\n", box_count(str1, charset));
	printf("str2: %d\n", box_count(str2, charset));
	printf("str3: %d\n", box_count(str3, charset));
	printf("str4: %d\n", box_count(str4, charset));
	printf("str5: %d\n\n", box_count(str5, charset));

	//_________________________________________________________________________
	int box_num = box_count(str, charset);
	char** arr 	= ft_split(str, charset);

	int i = -1;
	while (++i < box_num)
		printf("%s\n", arr[i]);
}
*/