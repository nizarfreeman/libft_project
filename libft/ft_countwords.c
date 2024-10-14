#include "libft.h"

int	ft_countwords(const char *s, char c)
{
	int	res;
	int flag;

	res = 0;
	flag = 0;
	while (*s)
	{
		if (*s != c)
		{
			if (!flag)
			{
				res++;
				flag = 1;
			}
		}
		else
			flag = 0;
		s++;
	}
	return (res);
}