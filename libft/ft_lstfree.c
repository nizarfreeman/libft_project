#include "libft.h"

void	ft_lstfree(t_list *head)
{
	t_list	*temp;

	while (head)
	{	
		temp = head -> next;
		if (head -> content)
			free(head -> content);
		free(head);
		head = temp;
	}
}