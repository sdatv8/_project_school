#include "libft.h"

int		ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	main()
{
	char	str1[100] = "123456789";
	char	str2[100] = "5555555f5555";

	printf("%d", ft_strlen(str2));
	return (0);
}