#include "libft.h"

size_t	ft_strlen(const char *s)
{
	if (!s)
		return (0);
	const char *q = s;
	while (*q)
		q++;
	return (q - s);
}
