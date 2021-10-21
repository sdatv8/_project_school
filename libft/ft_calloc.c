/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Sjannet <sjannet@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 21:43:41 by Sjannet           #+#    #+#             */
/*   Updated: 2021/10/21 20:43:03 by Sjannet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{	
	size_t	l;
	char	*k;

	l = count * size;
	k = malloc(l);
	if (k == 0)
		return (NULL);
	ft_bzero(k, l);
	return (k);
}
