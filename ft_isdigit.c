#include "libft.h"

int ft_isdigit(int c)
{
    if (c >= '0' && c <= '9') 
        return (1);
    return (0);
}

// #include <stdio.h>
// int main(void)
// {
//     printf("A → %d\n", ft_isdigit('A'));  // 0
//     printf("z → %d\n", ft_isdigit('z'));  // 0
//     printf("5 → %d\n", ft_isdigit('5'));  // 1
//     printf("@ → %d\n", ft_isdigit('@'));  // 0
// }