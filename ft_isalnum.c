/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khaiamsr <khaiamsr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 13:28:43 by khaiamsr          #+#    #+#             */
/*   Updated: 2025/09/15 13:28:48 by khaiamsr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z') || (c >= '0'
			&& c <= '9'))
		return (1);
	return (0);
}

// #include <stdio.h>
// int main(void)
// {
//     printf("A → %d\n", ft_isalnum('A'));  // 1
//     printf("z → %d\n", ft_isalnum('z'));  // 1
//     printf("5 → %d\n", ft_isalnum('5'));  // 1
//     printf("@ → %d\n", ft_isalnum('@'));  // 0
// }