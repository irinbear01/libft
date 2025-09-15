#include "libft.h"

size_t	ft_strlen(const char *str)
{
	size_t	len = 0;

	while (str[len])
		len++;
	return (len);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	slen;
	size_t	i;

	if (!s)
		return (NULL);
	slen = ft_strlen(s);
	if (start >= slen) 
	{
		sub = malloc(1);
		if (!sub)
			return (NULL);
		sub[0] = '\0';
		return (sub);
	}
	if (len > slen - start)
		len = slen - start;
	sub = malloc((len + 1) * sizeof(char));
	if (!sub)
		return (NULL);
	i = 0;
	while (i < len)
	{
		sub[i] = s[start + i];
		i++;
	}
	sub[i] = '\0';
	return (sub);
}

// #include <stdio.h>

// int main(void)
// {
//     char *str = "Hello 42Bangkok";

//     char *sub1 = ft_substr(str, 6, 2);   // "42"
//     char *sub2 = ft_substr(str, 0, 5);   // "Hello"
//     char *sub3 = ft_substr(str, 20, 5);  // "" เกินความยาว

//     printf("sub1 = %s\n", sub1);
//     printf("sub2 = %s\n", sub2);
//     printf("sub3 = %s\n", sub3);

//     free(sub1);
//     free(sub2);
//     free(sub3);
// }
