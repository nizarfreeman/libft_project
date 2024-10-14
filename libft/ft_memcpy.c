#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char *d; 			//dst
	const unsigned char *s;		//src

	d = (unsigned char *)dst;
	s = (const unsigned char *)src;

	if (d == s || n == 0)
		return (d);

	while (n--)
		*d++ = *s++;

	return (dst);
}