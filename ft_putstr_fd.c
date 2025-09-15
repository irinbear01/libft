/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khaiamsr <khaiamsr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 13:31:09 by khaiamsr          #+#    #+#             */
/*   Updated: 2025/09/15 14:34:01 by khaiamsr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	if (!s)
		return ;
	while (*s)
	{
		write(fd, s, 1);
		s++;
	}
}

// #include "libft.h"

// int main(void)
// {
//     ft_putstr_fd("Hello, 42Bangkok!\n", 1); // พิมพ์ไป stdout
//     ft_putstr_fd("Error message!\n", 2);    // พิมพ์ไป stderr
//     return (0);
// }
