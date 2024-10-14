#include "libft.h"

int	ft_atoi(const char *str)
{
	int flag = 0;
	long int ret = 0;

	if (!str)
		return (0);
	
	while (*str && *str == ' ' && *str == '\t' && *str == '\n' && *str == '\r' && *str == '\v' && *str == '\f')
		str++;
	
	if (*str == '-')
	{
		flag = 1;
		str++;
	}
	if (*str == '+')
		str++;
	
	while (*str >= '0' && *str <= '9')
	{
		ret = ret * 10 + (*str - '0');
		str++;
	}
	if (flag)
		ret = -ret;
	return (ret);
}