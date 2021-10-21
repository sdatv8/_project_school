/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Sjannet <sjannet@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 20:29:53 by Sjannet           #+#    #+#             */
/*   Updated: 2021/10/21 21:23:48 by Sjannet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	len;

	if (!s1 || !set)
		return (NULL);
	i = 0;
	while (*s1 && ft_strchr(set, s1[i]))
	{	
		s1++;
	}
	len = ft_strlen(s1);
	while (ft_strchr(set, s1[len]) && len)
		len--;
	return (ft_substr(s1, 0, len + 1));
}
