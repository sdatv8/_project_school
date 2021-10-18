#include "libft.h"

char	*ft_strchr(char *s, int c)
{
	int i;

	i = 0;
	while (s[i])
	{
		if ((char)c == s[i])
			return ((char *)s + i);
		i++;
	}
	if (!s[i] && !c)
		return ((char *)s + i);
	return (NULL);
}
