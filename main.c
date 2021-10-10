#include <stdio.h>
#include "ft_isalpha.c"
void	*memset(void *buf, int ch, size_t count);

int main()
{
	//printf("test isalpha: %d", ft_isalpha('/'));
	printf("test memset: %s", memset('abcdefg', 4, 4));
    return (0);
}