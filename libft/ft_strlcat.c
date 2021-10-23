/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Sjannet <sjannet@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 20:47:56 by Sjannet           #+#    #+#             */
/*   Updated: 2021/10/23 18:21:26 by Sjannet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	test(size_t s, size_t size)
{
	if (s >= size)
		return (size);
	else
		return (s);
}

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	n;
	size_t	sum;
	size_t	s;

	i = 0;
	n = 0;
	sum = 0;
	if (size <= (size_t)ft_strlen(dst))
		return (size + ft_strlen((char *)src));
	sum = ft_strlen((char *)src);
	while (dst[i] != '\0')
		i++;
	s = i;
	if (i < size - 1 && size > 0)
	{
		while (s + n < size - 1 && src[n] != '\0')
		{
			dst[i++] = src[n];
			n++;
		}
	}
	s = test(s, size);
	dst[i] = '\0';
	return (sum + s);
}
