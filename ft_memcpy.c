#include "libft.h"

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

// #include <stdio.h>
// #include <string.h>

// int main()
// {
//     char str1[] = "42bkk";
//     char str2[6] = "";
//     char ft_str1[] = "42bkk";
//     char ft_str2[6] = "";

//     // Copies contents of str2 to str1
//     memcpy(str2, str1, sizeof(str1));
//     ft_memcpy(ft_str2, ft_str1, sizeof(ft_str1));

//     printf("str2 after memcpy:");
//     printf("%s",str2);
//     printf("\nft_str2 after memcpy:");
//     printf("%s",ft_str2);

//     return 0;
// }