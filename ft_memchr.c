#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (ptr[i] == (unsigned char)c)
			return ((void *)(ptr + i));
		i++;
	}
	return (NULL);
}

// #include <stdio.h>
// #include <string.h>

// int main(void)
// {
//     char str[] = "Hello 42BKK!";
    
//     char *p1 = memchr(str, '4', 12);
//     char *p2 = ft_memchr(str, '4', 12);
//     printf("memchr: %s\n", p1);
//     printf("ft_memchr: %s\n", p2);
// }