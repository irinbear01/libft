#include "libft.h"

size_t  ft_strlen(const char *s) {
    size_t i = 0;
    while (s[i]) i++;
    return i;
}

size_t  ft_strlcat(char *dst, const char *src, size_t dstsize)
{
    size_t dlen;
    size_t slen;
    size_t i;

    slen = 0;
    while (src[slen])
        slen++;
    if (dstsize == 0)
        return (slen);
    dlen = 0;
    while (dlen < dstsize && dst[dlen])
        dlen++;
    if (dlen == dstsize)
        return (dstsize + slen);
    i = 0;
    while (src[i] && dlen + i + 1 < dstsize)
    {
        dst[dlen + i] = src[i];
        i++;
    }
    dst[dlen + i] = '\0';
    return (dlen + slen);
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