/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Sjannet <sjannet@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 21:01:40 by sjannet           #+#    #+#             */
/*   Updated: 2021/10/21 21:23:04 by Sjannet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int		count_word(char *s, char c)
{
	int		i;
	int		len;

	i = 0;
	len = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			while (s[i] && s[i] != c)
				i++;
			len++;
		}
		else
			i++;
	}
	return (len);
}


// char	**ft_split(char const *s, char c)
// {
// 	char	**tmp;
// 	int		i;

// 	i = 0;
// 	**tmp = (char **)malloc(sizeof(char) * (count_word(s, c) + 1));
	

// }

int main ()
{
	char	str[100] = "   dfa  faf  fs sdf s sdf sf s";
	char	c = ' ';
	count_word(str, c);
}