#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int		ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strchr(char *s, int c)
{
	int i;

	i = 0;
	if (c == '\0')
	{
		while (s[i] != '\0')
			i++;
		return (&s[i]);
	}
	while (s[i] != '\0')
	{
		if (s[i] == c)
			return (&s[i]);
		i++;
	}
	return (NULL);
}

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
	while (s1)
	{
		if (ft_strchr(set, s1[i]) != 0)
			str[j++] = s1[i];
		i++;
	}
	str[j] = '\0';
	printf("2 %s\n", str);
	return (str);
}

int	main()
{
	char	str1[100] = "123456789";
	char	str2[100] = "9jfisagng";

	printf("1 %s\n", str1);
	ft_strtrim(str1, str2);
	//printf("2 %s\n", str1);
}