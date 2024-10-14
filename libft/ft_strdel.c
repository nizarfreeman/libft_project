#include "libft.h"

void	ft_strdel(char **as)
{
	if (!as)
		return (NULL);
	free(*as);
	*as = NULL;
}