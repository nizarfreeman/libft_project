#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long num;
	int digit;

	num = (long) n;
	if (num == 0)
	{
		write(fd, "0", 1);
		return;
	}
	if (num < 0)
	{
		write(fd, "-", 1);
		num *= -1;
	}
	if (num >= 0 && num < 10)
	{
		digit = num + '0';
		write(fd, &digit, 1);
		return;
	}
	if (num >= 10)
	{
		ft_putnbr_fd(num / 10, fd);
		digit = num % 10 + '0';
		write(fd, &digit, 1);
	}		
}