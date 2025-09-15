/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khaiamsr <khaiamsr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 13:29:50 by khaiamsr          #+#    #+#             */
/*   Updated: 2025/09/15 13:29:54 by khaiamsr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	const unsigned char	*ptr1;
	const unsigned char	*ptr2;

	ptr1 = (const unsigned char *)s1;
	ptr2 = (const unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (ptr1[i] != ptr2[i])
			return ((int)(ptr1[i] - ptr2[i]));
		i++;
	}
	return (0);
}

// #include <stdio.h>
// #include <string.h>

// int main(void)
// {
//     char s1[] = "Hello 42";
//     char s2[] = "Hello 42";
//     char s3[] = "Hello 43";

//     printf("memcmp(s1,s2,8): %d\n", memcmp(s1, s2, 8));
//     printf("ft_memcmp(s1,s2,8): %d\n", ft_memcmp(s1, s2, 8));

//     printf("memcmp(s1,s3,8): %d\n", memcmp(s1, s3, 8));
//     printf("ft_memcmp(s1,s3,8): %d\n", ft_memcmp(s1, s3, 8));

//     return (0);
// }
