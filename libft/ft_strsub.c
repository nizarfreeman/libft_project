#include "libft.h"

char	*ft_strsub(const char *s, unsigned int start, size_t len)
{
	char	*res;
	size_t		i;

	if (!s || start > ft_strlen(s))
		return (NULL);
	res = (char *)malloc(sizeof(char) * (len + 1));
	if (!res)
		return (NULL);
	i = 0;
	while (i < len && s[start])
		res[i++] = s[start++];
	res[i] = '\0';
	return (res);
}	