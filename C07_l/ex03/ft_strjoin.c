/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjun-yu <tanjunyu8888@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 14:06:13 by tjun-yu           #+#    #+#             */
/*   Updated: 2023/08/15 14:06:15 by tjun-yu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>

/*
#define DEBUG 1
#if DEBUG == 1
	#define LOG_V(NAME, V) printf("%s: %d\n", NAME, V)
	#define LOG_A(NAME, I, V) printf("%s[%d]: %d\n", NAME, I, V)
	#define LOG_S(STR) printf("%s\n", STR)
	#define LOG_D printf("DEBUG\n")
#else
	#define LOG_V(X, Y)
	#define LOG_A(X, Y, Z)
	#define LOG_S(X);
	#define LOG_D
#endif
*/

int		sep_size(char *sep);
int		malloc_size(int size, char **str, char *sep);
void	putstr(char *str, char **final);
char	*ft_strjoin(int size, char **strs, char *sep);

int	sep_size(char *sep)
{
	int	size;

	size = 0;
	while (*sep != 0)
	{
		size++;
		sep++;
	}
	return (size);
}

int	malloc_size(int size, char **str, char *sep)
{
	int	size_n;
	int	size_sep;
	int	i;
	int	j;

	size_sep = sep_size(sep);
	size_n = 0;
	i = -1;
	while (++i < size)
	{
		size_n += size_sep;
		j = -1;
		while (str[i][++j] != 0)
			size_n++;
	}
	size_n = size_n - size_sep + 1;
	return (size_n);
}

void	putstr(char *str, char **final)
{
	while (*str != 0)
	{
		**final = *str;
		str++;
		(*final)++;
	}
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*joined;
	char	*ptr_j;
	int		i;

	if (size <= 0)
	{
		joined = (char *)malloc(1);
		return (joined);
	}
	joined = (char *)malloc(malloc_size(size, strs, sep));
	ptr_j = joined;
	i = -1;
	while (++i < size - 1)
	{
		putstr(strs[i], &ptr_j);
		putstr(sep, &ptr_j);
	}
	putstr(strs[i], &ptr_j);
	*(++ptr_j) = 0;
	return (joined);
}

/*
int main()
{
	char** strs = NULL;
	char* sep = "ABC";
	int size = 2;

	strs = (char **)malloc(size * sizeof(char *));
	strs[0] = "12345";
	strs[1] = "678";
	// strs[2] = "90ghfg";

	char* joined = ft_strjoin(size, strs, sep);
	printf("joined: %s\n", joined);

	free(strs);
	free(joined);
}
*/