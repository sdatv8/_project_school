#include "libft.h"
#include <stdio.h>

int		count_word(char *s, char c)
{
	int		i;
	int		len;

	i = 0;
	len = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
		{
			printf("1\n");
			i++;
		}
			
		while (s[i] && s[i] != c)
		{
			printf("2\n");
			i++;
		}
		len++;
	}
	printf("len %d", len);
	return (len);
}


// char	**ft_split(char const *s, char c)
// {
// 	char	**tmp;
// 	int		i;

// 	i = 0;
// 	**tmp = (char **)malloc(sizeof(char) * (count_word(s, c) + 1));

// }

int main ()
{
	char	str[100] = "   Hello,   Flavio Wuensche!  ";
	char	c = ' ';
	count_word(str, c);
}