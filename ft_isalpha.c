#include "libft.h"

int ft_isalpha(int c)
{
    if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
        return (1);
    return (0);
}

// #include <stdio.h>
// int main(void)
// {
//     printf("A → %d\n", ft_isalpha('A'));  // 1
//     printf("z → %d\n", ft_isalpha('z'));  // 1
//     printf("5 → %d\n", ft_isalpha('5'));  // 0
//     printf("@ → %d\n", ft_isalpha('@'));  // 0
// }