/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfaska <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 03:19:15 by nfaska            #+#    #+#             */
/*   Updated: 2024/10/26 23:53:08 by nfaska           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t len)
{
	char	*q;
	char	*p;
	size_t	n;

	if (!*s2)
		return ((char *)s1);
	while (*s1 && len > 0)
	{
		if (*s1 == *s2)
		{
			p = (char *)s1;
			q = (char *)s2;
			n = len;
			while (*q && *p == *q && n-- > 0)
			{
				p++;
				q++;
			}
			if (*q == '\0')
				return ((char *)s1);
		}
		s1++;
		len--;
	}
	return (NULL);
}
