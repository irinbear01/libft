#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	if (n == 0)
		return (0);
	i = 0;
	while (i < n && s1[i] && s1[i] == s2[i])
		i++;
	if (i == n)
		return (0);
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	char s1[] = "Hello World";
// 	char s2[] = "Hello 42bkk";

// 	printf("%d\n", ft_strncmp(s1, s2, 5));
//     printf("%d", strncmp(s1, s2, 5));
// }