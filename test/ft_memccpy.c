#include <stdio.h>

void	*ft_memccpy (void *restrict dst, const void *restrict src, size_t n)
{
	int		i;
	char	*t;
	char	*p;
	t = (char *)src;
	p = (char *)dst;

	i = 0;
	while (i < n)
	{
		p[i] = t[i];
		i++;
	}
}

int	main()
{
	char	str1[100] = "123456789";
	char	str2[100] = "555555555";

	printf("1 %s\n", str1);
	ft_memccpy(str1, str2, 9);
	printf("2 %s\n", str1);
}