#include "libft.h"

char	*ft_strcat(char *des, const char *src)
{	
	char *ret = des;
	while (*des)
		des++;
	while (*src)
		*des++ = *src++;
	*des = '\0';
	return (ret);
}