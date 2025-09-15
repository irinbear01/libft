/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khaiamsr <khaiamsr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 13:30:31 by khaiamsr          #+#    #+#             */
/*   Updated: 2025/09/15 14:30:11 by khaiamsr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

// int main(void)
// {
//     ft_putchar_fd('A', 1);
//     ft_putchar_fd('\n', 1);
//     ft_putchar_fd('Z', 2);
//     ft_putchar_fd('\n', 2);
//     return (0);
// }
