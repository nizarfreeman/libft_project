#include "libft.h"

void	ft_putstr(const char *s)
{
	if (!s)
		return;
	while (*s)
		write(1, s++, 1);
}