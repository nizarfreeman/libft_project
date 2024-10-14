#include "libft.h"
void	*ft_memchr(const void *s, int c, size_t n)
{	
	if (!s)
		return (NULL);
	const unsigned char *p = (const unsigned char*)s;
	unsigned char let = (unsigned char)c;

	while (n--)
	{
		if (*p == let)
			return ((void *)p);
		p++;
	}
	return (NULL);
}
