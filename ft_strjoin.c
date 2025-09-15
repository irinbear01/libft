#include "libft.h"

size_t	ft_strlen(const char *str)
{
	size_t	len = 0;

	while (str[len])
		len++;
	return (len);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*joined;
	size_t	len1;
	size_t	len2;
	size_t	i;
	size_t	j;

	if (!s1 || !s2)
		return (NULL);
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	joined = malloc((len1 + len2 + 1) * sizeof(char));
	if (!joined)
		return (NULL);
	i = 0;
	while (i < len1)
	{
		joined[i] = s1[i];
		i++;
	}
	j = 0;
	while (j < len2)
	{
		joined[i + j] = s2[j];
		j++;
	}
	joined[i + j] = '\0';
	return (joined);
}

// #include <stdio.h>

// int main(void)
// {
//     char *s1 = "Hello ";
//     char *s2 = "42Bangkok";
//     char *result = ft_strjoin(s1, s2);

//     if (result)
//     {
//         printf("%s\n", result); // Hello 42Bangkok
//         free(result);
//     }
//     return 0;
// }