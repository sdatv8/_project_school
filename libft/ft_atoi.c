/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Sjannet <sjannet@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 21:19:33 by Sjannet           #+#    #+#             */
/*   Updated: 2021/10/21 20:28:44 by Sjannet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	unsigned int	i;
	long long		k;
	long long		l;

	i = 0;
	k = 1;
	l = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '-' || str[i] == '+')
	{		
		if (str[i] == '-')
			k = k * (-1);
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		l = l * 10 + (str[i] - '0') * k;
		i++;
		if (l > 0 && k < 0)
			return (0);
		if (l < 0 && k > 0)
			return (-1);
	}
	return (l);
}
