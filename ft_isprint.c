#include "libft.h"

int ft_isprint(int c)
{
    if (c >= 32 && c <= 127) 
        return (1);
    return (0);
}

// #include <stdio.h>
// int main(void)
// {
//     printf("A → %d\n", ft_isprint('A'));  // 1
//     printf("z → %d\n", ft_isprint('z'));  // 1
//     printf("5 → %d\n", ft_isprint('5'));  // 1
//     printf("@ → %d\n", ft_isprint('@'));  // 1
//     printf("\n → %d\n", ft_isprint('\n'));  // 0
// }