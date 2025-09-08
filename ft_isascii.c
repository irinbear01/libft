#include "libft.h"

int ft_isascii(int c)
{
    if (c >= 0 && c <= 127)
        return (1);
    return (0);
}

// #include <stdio.h>
// int main(void)
// {
//     printf("A → %d\n", ft_isascii('A'));  // 1
//     printf("z → %d\n", ft_isascii('z'));  // 1
//     printf("5 → %d\n", ft_isascii('5'));  // 1
//     printf("@ → %d\n", ft_isascii('@'));  // 1
// }