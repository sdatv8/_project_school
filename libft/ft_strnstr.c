#include "libft.h"

char* ft_strnstr(const char* big, const char* little, size_t len)
{
	int i;
	int	j;

	i = 0;
	j = 0;
	if (!*little)
		return((char*)big);
	while (big[i] && i < len)
	{
		if (little[j] == big[i])
			while (little[j] && big[i] == little[j] && (i+j) < len)
				j++;
		if (little[j] == '\0')
			return ((char*)&big[i]);
		i++;
	}
	return (NULL);
}