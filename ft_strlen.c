#include "libft.h"

int	ft_strlen(char *str)
{
	int	len = 0;

	while (str[len])
		len++;
	return (len);
}

// #include <stdio.h>
// int main() {
//     printf("A → %d\n", ft_strlen("test")); //4
// }