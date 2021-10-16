#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*tdst;
	char	*tsrc;
	size_t	i;

	i = 0;
	if (dst == NULL && src == NULL)
	{
		return (NULL);
	}
	tdst = (unsigned char *)dst;
	tsrc = (unsigned char *)src;
	if (tdst < tsrc)
	{
		while (i < len)
		{
			tdst[i] = tsrc[i];
			i++;
		}
	}
	else
	{
		while (len-- > 0)
		{
			tdst[len] = tsrc[len];
		}
	}
	return (tdst);
}