#ifndef LIBFT_H
# define LIBFT_H

#include <unistd.h>
#include <stdio.h>

int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_atoi(char *str);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
void	*ft_memset(void *buf, int ch, size_t count);
size_t	ft_strlcat(char* dst, const char* src, size_t size);
size_t	ft_strlcpy(char * restrict dst, const char * restrict src, size_t dstsize);
int		ft_strlen(char *str);
int		ft_tolower(int c);
int		ft_toupper(int c);
void	*ft_memchr(const void* b, int c, size_t len);
void	*ft_bzero(void *s, size_t n);
void 	*ft_memccpy (void *restrict dst, const void *restrict src, size_t n);
void	*ft_memmove(void *dst, const void *src, size_t len);
int 	ft_memcmp(const void* b1, const void* b2, size_t len);
char	*ft_strrchr(const char* s, int c);
int 	ft_strncmp(const char* s1, const char* s2, size_t len);
char	*ft_strnstr(const char* big, const char* little, size_t len);
void 	*ft_calloc(size_t nmemb, size_t size);
char 	*ft_strdup(const char *s);

# endif