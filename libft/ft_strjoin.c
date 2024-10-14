#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	 *res;
	size_t		i;

	if (!s1 && !s2)
		return (NULL);
	if (s1 && !s2)
		return (ft_strdup(s1));
	if (!s1 && s2)
		return (ft_strdup(s2));
	i = ft_strlen(s1) + ft_strlen(s2);
	res = (char *)malloc(sizeof(char) * (i + 1));
	if (!res)
		return (NULL);
	res = ft_strcpy(res, s1);
	res = ft_strcat(res, s2);
	return (res);
}