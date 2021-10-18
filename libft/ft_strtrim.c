#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (!s1)
		return (NULL);
	str = malloc(sizeof(char) * (ft_strlen((char *)s1) + 1));
	if (!str)
		return (NULL);
	while (s1[i])
	{
		if (!ft_strchr(set, s1[i]))
			str[j++] = s1[i];
		i++;
	}
	str[j] = '\0';
	printf("2 %s\n", str);
	return (str);
}