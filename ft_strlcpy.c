#include "libft.h"

size_t  ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
    size_t  i;
    size_t  len;

    i = 0;
    len = 0;

    while (src[len] != '\0')
        len++;
    if (dstsize == 0)
        return (len);
    while (i < dstsize - 1 && src[i] != '\0')
    {
        dst[i] = src[i];
        i++;
    }
    dst[i] = '\0';
    return (len);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char *src = "Hello BKK42!";
// 	char dest[20];
// 	int size = ft_strlcpy(dest, src, 13);
// 	printf("%s\n", dest);
// 	printf("len - %d\n", size);
// }