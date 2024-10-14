#include "libft.h"

t_list	*ft_lstnew(const void *content, size_t content_size)
{
	t_list	*new_link;

	new_link = malloc(sizeof(t_list));
	if (!new_link)
		return (NULL);
	if (!content)
	{
		new_link -> content = NULL;
		new_link -> content_size = 0;
	}
	else
	{
		new_link -> content = malloc(content_size);
		if (!new_link -> content) 
			return (NULL);
		ft_memcpy(new_link -> content, content, content_size);
		new_link -> content_size = content_size;
	}
	new_link -> next = NULL;
	return (new_link);
}