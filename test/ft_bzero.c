#include <unistd.h>
#include <stdio.h>

void	*ft_bzero(void *s, size_t n)
{
	char	*t;
	int		i;

	i = 0;
	printf("s1 %s\n", s);
	t = (char*)s;
	printf("s2 %s\n", s);
	printf("t %s\n", t);
	while (i < n)
	{
		t[i] = '+';
		i++;
	}
}


int	main()
{
	char	str[100] = "Helloworld";
	size_t n;

	n = 8;	
	printf("1 %s\n", str);
	ft_bzero(str, n);
	printf("2 %s\n\n", str);
	return (0);
}