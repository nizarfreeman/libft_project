/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfaska <nfaska@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 23:51:29 by nfaska            #+#    #+#             */
/*   Updated: 2024/10/30 06:34:37 by nfaska           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static void	make_map(unsigned char *map, const unsigned char *set)
{
	while (*set)
	{
		if (map[*set] == 0)
			map[*set] = *set;
		set++;
	}
}

char	*ft_strtrim(const char *s1, const char *set)
{
	char			*res;
	const char		*end;
	unsigned char	map[256];
	size_t			i;

	if (!s1 || !set)
		return (NULL);
	i = 0;
	while (i < 256)
		map[i++] = 0;
	make_map(map, (const unsigned char *) set);
	end = s1 + ft_strlen(s1) - 1;
	while (*s1 && map[(unsigned char) *s1] != 0)
		s1++;
	while (end > s1 && map[(unsigned char) *end] != 0)
		end--;
	res = (char *)malloc((end - s1 + 2) * sizeof(char));
	if (!res)
		return (NULL);
	ft_memcpy(res, s1, end - s1 + 1);
	res[end - s1 + 1] = '\0';
	return (res);
}
