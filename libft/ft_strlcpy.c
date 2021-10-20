#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t i;
	size_t	k;

	i = 0;
	k = 0;
	while (src[k])
		k++;
	if (size == 0)
		return(k);
	while (src[i] && i < size - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (k);
}