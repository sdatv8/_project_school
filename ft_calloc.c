#include "libft.h"

void *ft_calloc(size_t nmemb, size_t size)
{
    void    *str;
    int     i;
    
    i = nmemb*size;
    str = malloc(i);
	if (str == NULL)
		return(NULL);
    ft_bzero(str, i);
	return (str);
}