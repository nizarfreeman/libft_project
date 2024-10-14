#include "libft.h"

int	*lps_maker(const char *patt, size_t patt_len)
{	
	size_t i = 1, j = 0;
	int *arr = malloc(patt_len * sizeof(int));
	if (!arr)
		return (NULL);
	arr[0] = 0;

	while (i < patt_len)
	{
		if (patt[i] == patt[j])
		{
			j++;
			arr[i] = j;
			i++;
		}

		else
		{
			if (j != 0)
				j = arr[j - 1];

			else
			{
				arr[i] = 0;
				i++;	
			}
		}
	}
	return (arr);
}

char	*ft_strstr(const char *src, const char *patt)
{
	size_t i = 0, j = 0;
	if (!src || !patt)
		return (NULL);
	if (!*patt)
		return ((char *)src);

	size_t src_len = ft_strlen(src), patt_len = ft_strlen(patt);
	int *lps = lps_maker(patt, patt_len);
	if (!lps)
		return (NULL);

	while (i < src_len)
	{
		if (src[i] == patt[j])
		{
			i++;
			j++;
		}

		if (j == patt_len)
		{
			free(lps);
			return (char *)&src[i - j];
		}

		else if (i < src_len && src[i] != patt[j])
		{
			if (j != 0)
				j = lps[j - 1];
			else
				i++;
		}
	}
	free(lps);
	return (NULL);
}