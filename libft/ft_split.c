/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfaska <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 03:03:22 by nfaska            #+#    #+#             */
/*   Updated: 2024/10/30 20:25:46 by nfaska           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	count_words(const char *s, char c)
{
	int	count;
	int	flag;

	if (!s)
		return (0);
	count = 0;
	flag = 0;
	while (*s)
	{
		if (*s == c)
			flag = 0;
		else if (!flag)
		{
			flag = 1;
			count++;
		}
		s++;
	}
	return (count);
}

static int	get_len(const char *s, char c)
{
	size_t	i;

	i = 0;
	while (*s && *s != c)
	{
		i++;
		s++;
	}
	return (i);
}

static void	free_array(char **arr)
{
	int	i;

	i = 0;
	while (arr[i])
	{
		free(arr[i]);
		i++;
	}
	free(arr);
}

static void	skip_delim(const char	**s, char c)
{
	while (**s == c)
		(*s)++;
}

char	**ft_split(const char *s, char c)
{
	char	**res;
	size_t	i;
	size_t	y;

	res = (char **)malloc((count_words(s, c) + 1) * sizeof(char *));
	i = 0;
	while (s && *s && res)
	{
		y = 0;
		skip_delim(&s, c);
		if (!*s)
			break ;
		res[i] = (char *) malloc((get_len(s, c) + 1) * sizeof(char));
		if (!res[i])
		{
			free_array(res);
			return (NULL);
		}
		while (*s && *s != c)
			res[i][y++] = *s++;
		res[i++][y] = '\0';
	}
	if (res)
		res[i] = NULL;
	return (res);
}
