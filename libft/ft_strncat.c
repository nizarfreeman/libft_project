#include "libft.h"

char	*ft_strncat(char *des, const char *src, size_t n)
{
	char *ret = des;
	while (*des)
		des++;
	while (*src && n--)
		*des++ = *src++;
	*des = '\0';
	return (ret);
}