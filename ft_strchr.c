#include "libft.h"

char* ft_strchr(char* s, int c)
{
	int i;

	i = 0;
	if (c == '\0')
	{
		while (s[i] != '\0')
			i++;
		return (&s[i]);
	}
	while (s[i] != '\0')
	{
		if (s[i] == c)
			return (&s[i]);
		i++;
	}
	return (NULL);
}