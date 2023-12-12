/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjun-yu <tanjunyu8888@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 12:18:46 by tjun-yu           #+#    #+#             */
/*   Updated: 2023/08/11 12:18:47 by tjun-yu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

/*
#define DEBUG 1
#if DEBUG == 1
	#define LOG_V(NAME, X) printf("%s: %d\n", NAME, X)
	#define LOG_A(NAME, I, S) printf("%s[%d]: %s\n", NAME, I, S)
#else
	#define LOG_V(NAME, X)
#endif
*/

int		ft_strcmp(char *str1, char *str2);
void	swap(char **ptr1, char **ptr2);
void	sort(int argc, char *argv[]);
void	display_str(int argc, char *argv[]);

//_____________________________________________________________________________
int	main(int argc, char *argv[])
{
	if (argc < 2)
		return (0);
	else
	{
		sort(argc, argv);
		display_str(argc, argv);
	}
}

//_____________________________________________________________________________
int	ft_strcmp(char *str1, char *str2)
{
	while (*str1 != 0 && *str2 != 0)
	{
		if (*str1 > *str2)
			return (*str1 - *str2);
		else if (*str1 < *str2)
			return (*str1 - *str2);
		str1++;
		str2++;
	}
	return (0);
}

void	swap(char **ptr1, char **ptr2)
{
	char	*temp;

	temp = *ptr1;
	*ptr1 = *ptr2;
	*ptr2 = temp;
}

void	sort(int argc, char *argv[])
{
	int	i;
	int	j;

	j = argc;
	while (--j > 0)
	{
		i = 0;
		while (++i < j)
		{	
			if (ft_strcmp(argv[i], argv[i + 1]) > 0)
				swap(&argv[i], &argv[i + 1]);
		}
	}
}

void	display_str(int argc, char *argv[])
{
	int	i;
	int	j;

	i = 0;
	while (++i < argc)
	{
		j = -1;
		while (argv[i][++j] != 0)
			write(1, &argv[i][j], 1);
		write(1, "\n", 1);
	}
}
