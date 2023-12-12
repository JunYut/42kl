/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_string_tab.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjun-yu <tanjunyu8888@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 14:58:22 by tjun-yu           #+#    #+#             */
/*   Updated: 2023/08/24 14:58:23 by tjun-yu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

//_____________________________________________________________________________
#define LOG_D printf("DEBUG\n");
#define LOG_S(S) printf("%s\n", S);

//_____________________________________________________________________________
int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = -1;
	while (s1[++i] != 0 && s2[i] != 0)
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
	if (s1[i] == 0 && s2[i] == 0)
		return (0);
	else if (s1[i] == 0)
		return (-s2[i]);
	else
		return (s1[i]);
}

void	ft_swap(char **s1, char **s2)
{
	char	*temp;
	
	temp = *s1;
	*s1 = *s2;
	*s2 = temp;
}

void	ft_sort_string_tab(char **tab)
{
	int	sorted;
	int	i;

	sorted = 0;
	while (!sorted)
	{
		sorted = 1;
		i = -1;
		while (tab[++i + 1] != 0)
		{
			if (ft_strcmp(tab[i], tab[i + 1]) > 0)
			{
				sorted = 0;
				ft_swap(&tab[i], &tab[i + 1]);
			}
		}
	}
}

/*
int main(void)
{
	char* strs[] = {"Hello World11", "Hello World1", "H3llo World", "21345y", 0};
	int i = -1;

	ft_sort_string_tab(strs);

	while (++i < 4)
		printf("%s\n", strs[i]);
}
*/