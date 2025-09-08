#include "libft.h"

char	*ft_memmove(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char *src = "Hello, 42bkk!";
// 	char dest[100];

// 	ft_strncpy(dest, src, 5);
// 	printf("%s", dest);
// }