#include "libft.h"

int	get_word_len(const char *s, char c)
{
	int	res;

	res = 0;
	while (*s && *s != c)
	{
		res++;
		s++;
	}
	return (res);
}

char	**ft_strsplit(const char *s, char c)
{
	char	**arr;
	int		words;
	int 	word_len;
	int		i;
	int 	y;

	if (!s)
		return (NULL);
	words = ft_countwords(s, c);
	arr = (char **)malloc(sizeof(char *) * (words + 1));
	if (!arr)
		return (NULL);
	i = 0;
	while (*s && i < words)
	{
		while (*s && *s == c)
			s++;
		word_len = get_word_len(s, c);
		arr[i] = (char *)malloc((sizeof(char) * (word_len + 1)));
		if (!arr[i])
		{
			while (i > 0)
				free(arr[--i]);
			free(arr);
			return (NULL);
		}
		y = 0;
		while (*s && *s != c)
			arr[i][y++] = *s++;
		arr[i][y] = '\0';
		i++;
	}
	arr[i] = NULL;
	return (arr);
}