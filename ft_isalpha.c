/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khaiamsr <khaiamsr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 13:28:56 by khaiamsr          #+#    #+#             */
/*   Updated: 2025/09/15 13:29:03 by khaiamsr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}

// #include <stdio.h>
// int main(void)
// {
//     printf("A → %d\n", ft_isalpha('A'));  // 1
//     printf("z → %d\n", ft_isalpha('z'));  // 1
//     printf("5 → %d\n", ft_isalpha('5'));  // 0
//     printf("@ → %d\n", ft_isalpha('@'));  // 0
// }