#include "libft.h"

void	*ft_memccpy (void *restrict dst, const void *restrict src, size_t n)
{
	int		i;

	i = 0;
	while (i < n)
	{
		*(char *)dst = *(char *)src;
		i++;
	}
}