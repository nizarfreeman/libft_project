#include "libft.h"

int	ft_isalpha(int c)
{	
	if ((c >= 'A' && c <= 'z') || (c >= 'a' && c <= 'z'))
	       return (1);
	else	
		return (0);
}
