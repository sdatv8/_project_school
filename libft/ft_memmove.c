/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Sjannet <sjannet@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 20:45:05 by Sjannet           #+#    #+#             */
/*   Updated: 2021/10/21 20:45:11 by Sjannet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*dst1;
	char	*src2;
	size_t	i;

	i = 0;
	if (dst == NULL && src == NULL)
		return (NULL);
	dst1 = (char *)dst;
	src2 = (char *)src;
	if (dst1 < src2)
	{
		while (i < len)
		{
			dst1[i] = src2[i];
			i++;
		}
	}
	else
	{
		while (len-- > 0)
		{
			dst1[len] = src2[len];
		}
	}
	return (dst1);
}
