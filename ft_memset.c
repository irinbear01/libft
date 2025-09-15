/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khaiamsr <khaiamsr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 13:30:22 by khaiamsr          #+#    #+#             */
/*   Updated: 2025/09/15 13:30:28 by khaiamsr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*tmp_ptr;

	tmp_ptr = (unsigned char *)b;
	while (len > 0)
	{
		*tmp_ptr = (unsigned char)c;
		tmp_ptr++;
		len--;
	}
	return (b);
}

// #include <stdio.h>
// #include <string.h>

// int main()
// {
//     char str[50] = "Hello 42bangkok";
//     char ft_str[50] = "Hello 42bangkok";
//     printf("\nBefore memset(): %s\n", str);
//     printf("\nBefore ft_memset(): %s\n", ft_str);

//     // Fill 8 characters starting from str[13] with '.'
//     memset(str + 13, '.', 8*sizeof(char));
//     ft_memset(ft_str + 13, '.', 8*sizeof(char));

//     printf("After memset():  %s", str);
//     printf("\nAfter ft_memset():  %s", ft_str);
//     return (0);
// }