#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char *d;
	const unsigned char *s;
	unsigned char let;

	d = (unsigned char *)dst;
	s = (const unsigned char *)src;
	let = (unsigned char)c;
	while (n--)
	{
		*d = *s;
		if (*s == let)
		{
			d++;
			return (d);
		}
		d++;
		s++;
	}
	return (NULL);
}