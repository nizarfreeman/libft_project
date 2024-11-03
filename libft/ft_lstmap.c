/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfaska <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 01:01:09 by nfaska            #+#    #+#             */
/*   Updated: 2024/11/01 08:38:27 by nfaska           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*new_node;

	if (!lst || !f || !del)
		return (NULL);
	new_list = ft_lstnew(f(lst->content));
	if (!new_list)
		return (NULL);
	new_node = new_list;
	lst = lst->next;
	while (lst)
	{
		new_node->next = ft_lstnew(f(lst->content));
		if (!new_node->next)
		{
			des(lst->content);
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		new_node = new_node->next;
		lst = lst->next;
	}
	new_node->next = NULL;
	return (new_list);
}
