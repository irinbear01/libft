#include "libft.h"

void ft_bzero(void *s, size_t n) {
    unsigned    char    *tmp_ptr;

    tmp_ptr = (unsigned char *)s;
    while (n>0)
    {
        *tmp_ptr = 0;
        tmp_ptr++;
        n--;
    }
}

// #include <strings.h> 
// #include <stdio.h>
// int main() {
//     char buffer[11];
//     char ft_buffer[11];

//     for (int i = 0; i < 10; i++) {
//         buffer[i] = '0' + i;
//     }
//     for (int j = 0; j < 10; j++) {
//         ft_buffer[j] = '0' + j;
//     }
//     buffer[10] = '\0';
//     ft_buffer[10] = '\0';

//     printf("Before bzero: %s\n", buffer);
//     printf("Before ft_bzero: %s\n", ft_buffer);

//     bzero(buffer, 5);
//     ft_bzero(ft_buffer, 5);

//     printf("After bzero: %s\n", buffer);
//     printf("After ft_bzero: %s\n", ft_buffer);
// }