#include <unistd.h>

void	*ft_memchr(const void* b, int c, size_t len)
{
	int 	i;
	char	*s;

	s = (char*)b;
	i = 0;
	if (c == '\0')
	{
		while (s[i] != '\0')
			i++;
		return (&s[i]);
	}
	while (s[i] != '\0' && i < len)
	{
		if (s[i] == c)
			return (&s[i]);
		i++;
	}
	return (NULL);
}