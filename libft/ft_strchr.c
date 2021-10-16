#include "libft.h"

char	*ft_strchr(char *s, int c)
{
	int i;

	i = 0;
	if (!s || !c)
		return (NULL);
	
	while (*s)
	{
		if (s[i] == (char *)c)
			return (&s[i]);
		i++;
	}
	return (NULL);
}