#include "libft.h"

char	*ft_strdup(const char *s)
{
	if (!s)
		return (NULL);
	int len = ft_strlen(s);
	char *res = malloc(len + 1);
	if (!res)
		return (NULL);
	char *temp = res;
	while (*s)
	{
		*temp = *s;
		s++;
		temp++;
	}
	*temp = '\0';
	return (res);
}