#include "libft.h"

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	int				len;

	i = 0;
	len = 0;
	while (i < size - 1 && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	while (src[len] != '\0')
	{
		len++;
	}
	return (len);
}

//#include <stdio.h>

// int	main(void)
//{
//	char *src = "Hello BKK42!";
//	char dest[20];
//	int size = ft_strlcpy(dest, src, 13);
//	printf("%s\n", dest);
//	printf("len - %d\n", size);
//}