#include "libft.h"

void *ft_memccpy (void *restrict dst, const void *restrict src, size_t n)
{
    int        i;
    char	*t;
    char	*p;
    t = (unsigned char *)src;
    p = (unsigned char *)dst;

    i = 0;
    if (n == 0 || dst == src)
        return (dst);
    while (n > 0)
    {
        p[i] = t[i];
        i++;
        n--;
    }
    return (dst);
}