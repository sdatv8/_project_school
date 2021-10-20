/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Sjannet <sjannet@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 21:19:33 by Sjannet           #+#    #+#             */
/*   Updated: 2021/10/20 21:43:37 by Sjannet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(char *str)
{
	int		i;
	int		num;
	int		minus;

	i = 0;
	num = 0;
	minus = 1;
	while ((str[i] == ' ') || (str[i] == '\n') || (str[i] == '\r') 
		|| (str[i] == '\t') || (str[i] == '\v') || (str[i] == '\f'))
		i++;

	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			minus *= -1;
		i++;
	}

	while (str[i] >= '0' && str[i] <= '9')
	{
		num *= 10;
		num += str[i] - '0';
		i++;
	}
	return (num * minus);	
}