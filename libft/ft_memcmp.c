#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char *p = (const unsigned char *)s1;
	const unsigned char *q = (const unsigned char *)s2;

	while (n--)
	{
		if (*p != *q)
			return (*p - *q);
		p++;
		q++;
	}
	return (*p - *q);
}