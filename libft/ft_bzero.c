#include <unistd.h>

void	*ft_bzero(void *s, size_t n)
{
	char	*t;
	int		i;

	i = 0;
	t = (char*)s;
	while (i < n)
	{
		t[i] = '\0';
		i++;
	}
}