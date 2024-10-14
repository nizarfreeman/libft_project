#include "libft.h"

char	*ft_strnstr(const char *src, const char *patt, size_t n)
{
	const char	*p, *s;
	size_t	i;
	if (!src || !patt)
		return (NULL);
	if (!*patt)
		return ((char *)src);

	while (*src && n > 0)
	{
		p = patt;
		s = src;
		i = n;

		while (*s && *p && (*p == *s) && i > 0)
		{
			p++;
			s++;
			i--;	
		}
		if (!*p)
			return ((char *)src);
		src++;
		n--;
	}
	return (NULL);
}