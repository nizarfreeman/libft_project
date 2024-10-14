    #include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t n)
{
    size_t dst_len = ft_strlen(dst);
    size_t src_len = ft_strlen(src);
    size_t space_left = n - dst_len - 1;
    char *d = dst + dst_len;
    
    if (n <= dst_len)
        return (n + src_len);
    
    while (space_left > 0 && *src)
    {
        *d++ = *src++;
    	space_left--;
    }
   
    *d = '\0';
    return (dst_len + src_len);
}