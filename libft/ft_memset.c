#include "libft.h"

void	*ft_memset(void *buf, int ch, size_t count)
{
	unsigned char	*c;

	c = (unsigned char *)buf;
	while (count--)
		*c++ = (unsigned char)ch;
	return (buf);
}
