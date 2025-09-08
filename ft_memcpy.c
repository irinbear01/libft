#include "libft.h"

char	*ft_memcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char *src = "Hello, 42bkk!";
// 	char dest[100];

// 	ft_strcpy(dest, src);
// 	printf("%s", dest);
// }