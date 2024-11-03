/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfaska <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 14:45:28 by nfaska            #+#    #+#             */
/*   Updated: 2024/10/28 01:19:22 by nfaska           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*res;
	size_t	s_len;

	s_len = ft_strlen(s);
	res = (char *)malloc(s_len + 1);
	if (!res)
		return (NULL);
	ft_memcpy(res, s, s_len);
	res[s_len] = '\0';
	return (res);
}
