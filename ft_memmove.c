#include "libft.h"

void    *ft_memmove(void *dst, const void *src, size_t len)
{
    char    *tmp_dst;
    char    *tmp_src;
    size_t  i;

    if(!dst && !src)
        return (NULL);
    
    tmp_dst = (char *)dst;
    tmp_src = (char *)src;

    i = 0;
    if (tmp_dst > tmp_src) {
        while (len > 0)
        {
            tmp_dst[len] = tmp_src[len];
            len--;
        }
    }
    else
    {
        while (i < len)
        {
            tmp_dst[i] = tmp_src[i];
            i++;
        } 
    }
    return dst;
}

// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	char src[] = "Hello, 42bkk!";
// 	char dest[] = "newstring";
//     char ft_src[] = "Hello, 42bkk!";
// 	char ft_dest[] = "newstring";

// 	printf("Before memmove scr = %s , dest = %s",src ,dest);
//     printf("\nBefore ft_memmove scr = %s , dest = %s\n",ft_src ,ft_dest);

//     memmove(dest,src,9);
//     ft_memmove(ft_dest,ft_src,9);

//     printf("\nAfter memmove scr = %s , dest = %s", src, dest);
//     printf("\nAfter ft_memmove scr = %s , dest = %s", ft_src, ft_dest);
// }