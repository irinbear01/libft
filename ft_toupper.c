/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khaiamsr <khaiamsr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 13:35:51 by khaiamsr          #+#    #+#             */
/*   Updated: 2025/09/15 13:35:55 by khaiamsr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		c = c - 32;
	}
	return (c);
}

// #include <stdio.h>
// int main() {
//     printf("A → %c\n", ft_toupper('A'));  // A
//     printf("z → %c\n", ft_toupper('z'));  // Z
//     printf("5 → %c\n", ft_toupper('5'));  // 5
//     printf("@ → %c\n", ft_toupper('@'));  // @
// }