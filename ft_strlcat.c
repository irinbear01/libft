#include "libft.h"

int	ft_strlen(char *str)
{
    int	len = 0;

    while (str[len])
        len++;
    return (len);
}

int	ft_strlenc(const char *str)
{
    int	len = 0;

    while (str[len])
        len++;
    return (len);
}

void *ft_memcpy(void *dst, const void *src, size_t n)
{
    unsigned    char    *tmp_dst;
    unsigned    char    *tmp_src;

    if(dst == (void *)0 &&  src == (void *)0)
        return dst;
    tmp_dst = (unsigned char *)dst;
    tmp_src = (unsigned char *)src;

    while(n>0) {
        *tmp_dst = *tmp_src;
        tmp_dst++;
        tmp_src++;
        n--;
    }
    return dst;
}

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize) {
    size_t dst_len;
    size_t src_len;

    dst_len = ft_strlen(dst);
    src_len = ft_strlenc(src);

    if (dst_len >= dstsize)
        dst_len = dstsize;

    if (dst_len == dstsize)
        return (dstsize + src_len);

    if (src_len < dstsize - dst_len)
        ft_memcpy(dst + dst_len, src, src_len +1);

    else
    {
        ft_memcpy(dst + dst_len, src, dstsize - dst_len - 1);
        dst[dstsize - 1] = '\0';
    }
    return (dst_len + src_len);
}


// #include <string.h>
// #include <stdio.h>

// int main() {
//     char buffer[20] = "Hello ";
//     const char src[] = "42BKK!";
//     char ft_buffer[20] = "Hello ";
//     const char ft_src[] = "42BKK!";

//     size_t len = strlcat(buffer, src, sizeof(buffer));
//     size_t ft_len = ft_strlcat(ft_buffer, ft_src, sizeof(ft_buffer));

//     printf("buffer = %s" , buffer);
//     printf("\nlen = %zu", len);
//     printf("\nft_buffer = %s" , ft_buffer);
//     printf("\nft_len = %zu", ft_len);
// }