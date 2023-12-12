/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjun-yu <tanjunyu8888@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 11:19:25 by tjun-yu           #+#    #+#             */
/*   Updated: 2023/08/11 11:19:26 by tjun-yu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

int	main(int argc, char **argv)
{
	char	temp;
	int		i;

	i = -1;
	while (argv[argc - 1][++i] != 0)
	{
		temp = argv[argc - 1][i];
		write(1, &temp, 1);
	}
	write(1, "\n", 1);
}
