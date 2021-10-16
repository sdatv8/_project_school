#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	len;
    size_t	j;

	i = 0;
    j = 0;
    len = ft_strlen(dst);
	if (size == 0)
		return(len);
	if (size - 1 > len)
	{
		while (src[i] && len + i < size - 1)
		{
			dst[len + i] = src[j];
			i++;
			j++;
		}
		dst[i] = '\0';
	}
	while (src[i])
		i++;
	return (len+i);
}