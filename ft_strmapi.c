/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khaiamsr <khaiamsr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 13:34:06 by khaiamsr          #+#    #+#             */
/*   Updated: 2025/09/15 14:40:16 by khaiamsr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	size_t	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*result;
	unsigned int	i;
	size_t			len;

	if (!s || !f)
		return (NULL);
	len = ft_strlen(s);
	result = malloc((len + 1) * sizeof(char));
	if (!result)
		return (NULL);
	i = 0;
	while (i < len)
	{
		result[i] = f(i, s[i]);
		i++;
	}
	result[i] = '\0';
	return (result);
}

// #include <stdio.h>

// char to_upper(unsigned int i, char c)
// {
//     (void)i; // ไม่ใช้ index
//     if (c >= 'a' && c <= 'z')
//         return (c - 32);
//     return (c);
// }

// int main(void)
// {
//     char *str = "Hello 42Bangkok!";
//     char *mapped = ft_strmapi(str, to_upper);

//     printf("Original: %s\n", str);
//     printf("Upper   : %s\n", mapped);
//     free(mapped);
//     return (0);
// }