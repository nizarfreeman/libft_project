#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char *d = (char *) dst;
	const char *s = (const char *) src;

	if (d < s)
		while (len--)
			*d++ = *s++;
	else
		while (len--)
			d[len] = s[len];
	return (dst);
}