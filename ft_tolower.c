#include "libft.h"

int ft_tolower(int c) {
    if (c >= 'A' && c <= 'Z') {
        c = c + 32;
    }
    return c;
}

// #include <stdio.h>
// int main() {
//     printf("A → %c\n", ft_tolower('A'));  // a
//     printf("z → %c\n", ft_tolower('z'));  // z
//     printf("5 → %c\n", ft_tolower('5'));  // 5
//     printf("@ → %c\n", ft_tolower('@'));  // @
// }