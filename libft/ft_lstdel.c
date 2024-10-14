#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*temp;

	if (!alst || !*alst || !del)
		return;
	while (*alst)
	{
		del((*alst) -> content, (*alst) -> content_size);
		temp = (*alst) -> next;
		free(*alst);
		*alst = temp;
	}
}