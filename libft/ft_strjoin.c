/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfaska <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 20:35:08 by nfaska            #+#    #+#             */
/*   Updated: 2024/10/30 06:25:15 by nfaska           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static void	copy(char **p, char *s)
{
	if (s)
	{
		while (*s)
		{
			**p = *s;
			(*p)++;
			s++;
		}
	}
}

char	*ft_strjoin(const char *s1, char const *s2)
{
	char	*res;
	char	*res_2;
	size_t	s1_len;
	size_t	s2_len;

	s1_len = 0;
	s2_len = 0;
	if (!s1 && !s2)
		return (NULL);
	if (s1)
		s1_len = ft_strlen(s1);
	if (s2)
		s2_len = ft_strlen(s2);
	res = (char *) malloc(s1_len + s2_len + 1);
	if (!res)
		return (NULL);
	res_2 = res;
	copy(&res, (char *) s1);
	copy(&res, (char *) s2);
	*res = '\0';
	return (res_2);
}
