#include "libft.h"

	void	ft_lstdelone(t_list **aslt, void (*del)(void *, size_t))
	{
		if (!aslt || !*aslt || !del)
			return;
		del((*aslt) -> content, (*aslt) -> content_size);
		free(*aslt);
		*aslt = NULL;
	}