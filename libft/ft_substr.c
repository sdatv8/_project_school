/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Sjannet <sjannet@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 21:21:46 by Sjannet           #+#    #+#             */
/*   Updated: 2021/10/21 21:22:45 by Sjannet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*tmp;
	size_t	i;

	i = 0;
	if (!s)
		return (NULL);
	if (ft_strlen(s) < start)
		len = 0;
	tmp = malloc(sizeof(char) * (len + 1));
	if (!tmp)
		return (NULL);
	while (s[start] && i < len)
	{
		tmp[i] = s[start];
		i++;
		start++;
	}
	tmp[i] = '\0';
	return (tmp);
}
