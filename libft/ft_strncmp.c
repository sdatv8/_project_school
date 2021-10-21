/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Sjannet <sjannet@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 21:12:19 by Sjannet           #+#    #+#             */
/*   Updated: 2021/10/21 21:21:29 by Sjannet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *string1, const char *string2, size_t num )
{
	size_t	i;

	i = 0;
	while (i < num && (string1[i] || string2[i]))
	{
		if (string1[i] != string2[i])
			return ((unsigned char)string1[i] - (unsigned char)string2[i]);
		i++;
	}
	return (0);
}
