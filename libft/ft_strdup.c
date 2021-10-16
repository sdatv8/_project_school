#include "libft.h"

char *ft_strdup(const char *s)
{
    char    *str;
    int     i;
    
    i = 0;
    while (s[i] != '\0')
    {
        i++;
    }
	str = (char*)malloc(sizeof(*s)*(i+1));
	if (!str)
		return (NULL);
    i = 0;
    while (s[i])
    {
        str[i] = s[i];
        i++;
    }
    str[i] = '\0';
    return (str);
}