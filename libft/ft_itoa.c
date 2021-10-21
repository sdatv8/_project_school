/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Sjannet <sjannet@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 21:16:44 by Sjannet           #+#    #+#             */
/*   Updated: 2021/10/21 21:16:45 by Sjannet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_nbrlen(int c)
{
	int		i;
	i = 1;
	while (c /= 10)
		i++;
	return (i);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		i;
	int		j;
	int		len;

	i = 0;
	j = 0;
	len = ft_nbrlen(n);
	if (!n)
		return (NULL);
	if (n == -2147483648)
		return ("-2147483648");
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);

	str[len] = '\0';
	if (n < 0)
	{
		str[0] = '-';
		n *= -1;
	}
	printf ("%d\n", n);
	while (i < len)
	{
		str[len] = (n % 10) + '0';
		n /= 10;
		len--;
	}
	printf ("%s", str);
	return (str);
}