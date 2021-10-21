/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Sjannet <sjannet@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 20:44:13 by Sjannet           #+#    #+#             */
/*   Updated: 2021/10/21 20:44:39 by Sjannet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *destptr, const void *srcptr, size_t num)
{
	char	*str1;
	char	*str2;
	size_t	i;

	i = 0;
	str1 = (char *)srcptr;
	str2 = (char *)destptr;
	if (!destptr && !srcptr)
		return (NULL);
	while (i < num)
	{
		str2[i] = str1[i];
		i++;
	}
	return (str2);
}
