#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t n)
{
	char *ret = dst;
	while (n-- && *src)
		*dst++ = *src++;
	
	while (n--)
		*dst = '\0';
	return (ret);
}