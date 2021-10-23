/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Sjannet <sjannet@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 20:31:25 by Sjannet           #+#    #+#             */
/*   Updated: 2021/10/23 16:32:11 by Sjannet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*k;
	int		i;

	i = 0;
	if (!s)
		return (NULL);
	while (s[i])
		i++;
	k = malloc(sizeof(char) * i + 1);
	if (k == 0)
		return (NULL);
	k[i] = '\0';
	while (--i >= 0)
	{
		k[i] = f(i, s[i]);
	}
	return (k);
}
