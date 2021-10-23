/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Sjannet <sjannet@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 18:00:07 by Sjannet           #+#    #+#             */
/*   Updated: 2021/10/23 18:00:08 by Sjannet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{	
	int	i;

	i = 0;
	while (s[i])
		i++;
	while (i > 0 && s[i] != c)
		i--;
	if (s[i] == (char)c)
		return ((char *)&s[i]);
	return (NULL);
}
