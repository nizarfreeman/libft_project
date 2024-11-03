/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfaska <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 01:51:14 by nfaska            #+#    #+#             */
/*   Updated: 2024/10/31 05:13:32 by nfaska           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned const char	*p;
	unsigned const char	*q;

	p = (unsigned const char *) s1;
	q = (unsigned const char *) s2;
	while (n--)
	{
		if (*p != *q)
			return (*p - *q);
		p++;
		q++;
	}
	return (0);
}
