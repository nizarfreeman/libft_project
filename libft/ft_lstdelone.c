/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wft_lstdelone.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfaska <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 22:30:15 by nfaska            #+#    #+#             */
/*   Updated: 2024/10/25 22:56:32 by nfaska           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	if (lst -> content)
		del(lst -> content);
	free(lst);
}
