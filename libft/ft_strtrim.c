#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char		*res;
	size_t		 len;
	size_t	    lead;
	size_t     trail;
	size_t		   i;

	if (!s)
		return (NULL);
	len = ft_strlen(s);
	lead = 0;
	while (s[lead] == ' ' || s[lead] == '\t' || s[lead] == '\n')
		lead++;
	if (lead == len)
		return (ft_strdup(""));
	trail = len - 1;
	while (s[trail] == ' ' || s[trail] == '\t' || s[trail] == '\n')
		trail--;
	res = (char *)malloc(sizeof(char) * (trail - lead + 2));
	if (!res)
		return (NULL);
	i = 0;
	while (lead <= trail)
		res[i++] = s[lead++];
	res[i] = '\0';
	return (res);
}