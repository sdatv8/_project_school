/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Sjannet <sjannet@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 21:43:41 by Sjannet           #+#    #+#             */
/*   Updated: 2021/10/20 21:44:00 by Sjannet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_calloc(size_t nmemb, size_t size)
{
    void    *str;
    int     i;
    
    i = nmemb*size;
    str = malloc(i);
	if (str == NULL)
		return(NULL);
    ft_bzero(str, i);
	return (str);
}