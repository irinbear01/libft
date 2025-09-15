#include "libft.h"

size_t	ft_strlen(const char *str)
{
	size_t	len = 0;

	while (str[len])
		len++;
	return (len);
}

// #include <stdio.h>
// int main() {
//     printf("A → %zu\n", ft_strlen("test")); //4
// }