#include "libft.h"

char	*ft_strrchr(const char *src, int c)
{
	char *temp = (char *) src;
	char *ret = NULL;

	while (*temp)
	{
		if (*temp == (char) c)
			ret = temp;
		temp++;
	}
	if (*temp == (char) c)
		ret = temp;
	return (ret);
}