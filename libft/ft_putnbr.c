#include "libft.h"

void	ft_putnbr(int n)
{
	long num;
	int digit;

	num = (long) n;
	if (num == 0)
	{
		write(1, "0", 1);
		return;
	}
	if (num < 0)
	{
		write(1, "-", 1);
		num *= -1;
	}
	if (num >= 0 && num < 10)
	{
		digit = num + '0';
		write(1, &digit, 1);
		return;
	}
	if (num >= 10)
	{
		ft_putnbr(num / 10);
		digit = num % 10 + '0';
		write(1, &digit, 1);
	}		
}