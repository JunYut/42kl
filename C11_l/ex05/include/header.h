/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjun-yu <tanjunyu8888@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 09:45:45 by tjun-yu           #+#    #+#             */
/*   Updated: 2023/08/24 09:45:46 by tjun-yu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef HEADER_H
# define HEADER_H

int		is_operator(char *arg2);
int		ft_atoi(char *str);
int		add(int a, int b);
int		subtract(int a, int b);
int		multiply(int a, int b);
int		divide(int a, int b);
int		modulus(int a, int b);
int		calc(int a, int b, char operator);
void	ft_putnbr(int result);

#endif