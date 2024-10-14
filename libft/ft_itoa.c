#include "libft.h"

char	*ft_itoa(int n)
{
	char *res;
	int	flag;
	long num;
	long tmp;
	int	digits;

	flag = 0;
	num = (long) n;
	if (num < 0)
	{
		flag = 1;
		num *= -1;
	}
	tmp = num;
	digits = 0;
	while (tmp > 0)
	{
		digits++;
		tmp /= 10;
	}
	if (flag)
		digits++;
	res= (char *)malloc(sizeof(char) * (digits + 1));
	if (!res)
		return (NULL);
	res[digits] = '\0';
	if (flag)
		res[0] = '-';
	digits--;
	while (num > 0)
	{
		res[digits--] = (num % 10) + '0';
		num /= 10;
	}
	if (n == 0)
        res[0] = '0';
	return (res);
}