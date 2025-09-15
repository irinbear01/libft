/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khaiamsr <khaiamsr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 13:34:39 by khaiamsr          #+#    #+#             */
/*   Updated: 2025/09/15 13:34:44 by khaiamsr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*last;

	last = NULL;
	while (*s)
	{
		if (*s == (char)c)
			last = (char *)s;
		s++;
	}
	if (*s == (char)c)
		last = (char *)s;
	return (last);
}

// #include <stdio.h>
// #include <string.h>

// int main() {
//    const char *str = "hello this is test for strrchr";
//    char ch = 't';
//    const char *ft_str = "hello this is test for ft_strrchr";
//    char ft_ch = 't';

//    char *p = strrchr(str, ch);
//    char *ft_p = ft_strrchr(str, ch);

//    printf("strrchr String starting from '%c' is: %s\n", ch, p);
//    printf("ft_strrchr String starting from '%c' is: %s\n", ft_ch, ft_p);
// }