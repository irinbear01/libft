#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t i;
	size_t j;

	if (*little == '\0')
		return ((char *)big);
	i = 0;
	while (big[i] && i < len)
	{
		j = 0;
		while (big[i + j] && little[j]
			&& i + j < len && big[i + j] == little[j])
			j++;
		if (little[j] == '\0')
			return ((char *)(big + i));
		i++;
	}
	return (NULL);
}


// #include <stdio.h>
// #include <string.h>

// int main(void)
// {
//     char *s1 = "Hello 42Bangkok!";
//     char *s2 = "42";
//     char *s3 = "Bangkok";

//     printf("std: %s\n", strnstr(s1, s2, 12));
//     printf("ft : %s\n", ft_strnstr(s1, s2, 12));

//     printf("std: %s\n", strnstr(s1, s3, 7));
//     printf("ft : %s\n", ft_strnstr(s1, s3, 7));

//     return 0;
// }
