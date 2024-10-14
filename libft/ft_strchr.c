#include "libft.h"

char	*ft_strchr(const char *src, int c)
{
	char *temp = (char *) src;
	
	while (*temp)
	{
		if (*temp == (char) c)
			return (temp);
		temp++;
	}
	if (*temp == (char) c)
		return (temp);
	return (NULL);
}