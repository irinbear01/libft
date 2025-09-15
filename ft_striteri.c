/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khaiamsr <khaiamsr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 13:32:06 by khaiamsr          #+#    #+#             */
/*   Updated: 2025/09/15 14:37:50 by khaiamsr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

// #include <stdio.h>

// void my_func(unsigned int i, char *c)
// {
//     if (i % 2 == 0 && *c >= 'a' && *c <= 'z')
//         *c = *c - 32;   // index คู่ ปลี่ยนเป็นตัวใหญ่
// }

// int main(void)
// {
//     char str[] = "hello42bangkok";

//     printf("Before: %s\n", str);
//     ft_striteri(str, my_func);
//     printf("After : %s\n", str);  // HeLlO42BaNgKoK
//     return (0);
// }
