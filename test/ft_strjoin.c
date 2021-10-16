
#include "ft_strlen.c"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	int		len;
	int		i;
	int		j;

	i = -1;
	j = -1;
	if (!s1 || !s2)
		return (NULL);
	len = ft_strlen((char *)s1) + ft_strlen((char *)s2);

	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	while (s1[++i])
		str[i] = s1[i];
	while (s2[++j])
		str[i++] = s2[j];
	str[i] = '\0';
	printf("str %s", str);
	return (str);
}

int	main()
{
	char	str1[100] = "123456789";
	char	str2[100] = "555555555";

	ft_strjoin(str1, str2);
	return (0);
}