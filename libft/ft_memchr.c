/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfaska <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 17:01:30 by nfaska            #+#    #+#             */
/*   Updated: 2024/10/31 04:55:24 by nfaska           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memchr(const void *src, int c, size_t n)
{
	unsigned const char	*p;

	p = (unsigned const char *) src;
	while (src && n--)
	{
		if (*p == (unsigned char) c)
			return ((void *) p);
		p++;
	}
	return (NULL);
}
