#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*new_list;
	t_list	*new_link;
	t_list	*data;
	t_list	*temp;

	if (!lst || !f)
		return (NULL);
	data = f(lst);
	if (!data)
		return (NULL);
	new_link = ft_lstnew(data -> content, data -> content_size);
	if (!new_link)
		return (NULL);
	new_list = new_link;
	lst = lst -> next;
	while (lst)
	{
		data = f(lst);
		if (!data)
		{
			ft_lstfree(new_list);
			return (NULL);
		}
		temp = ft_lstnew(data -> content, data -> content_size);
		if (!temp)
		{
			ft_lstfree(new_list);
			return (NULL);
		}
		new_link -> next = temp;
		new_link = temp;
		lst = lst -> next;
	}
	return (new_list);
}