#include <stdio.h>
#include "ft_isalpha.c"
//void	*memset(void *buf, int ch, size_t count);
void	strlcpy(char * restrict dst, const char * restrict src, size_t dstsize);


int main()
{
	//printf("test isalpha: %d", ft_isalpha('/'));
	//printf("test memset: %s", memset('abcdefg', 4, 4));
	char	dst[1024] = "Hello";
	char	src[1024] = "world";
	int	dstsize = 3;

	printf("%s; %s; %d", dst, src, dstsize);
	strlcpy(dst, src, dstsize);
	printf("%s; %s; %d", dst, src, dstsize);
    return (0);
}