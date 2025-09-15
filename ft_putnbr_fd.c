/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khaiamsr <khaiamsr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 13:30:54 by khaiamsr          #+#    #+#             */
/*   Updated: 2025/09/15 14:32:58 by khaiamsr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	num;
	char	c;

	num = n;
	if (num < 0)
	{
		write(fd, "-", 1);
		num = -num;
	}
	if (num >= 10)
	{
		ft_putnbr_fd(num / 10, fd);
	}
	c = (num % 10) + '0';
	write(fd, &c, 1);
}

// #include "libft.h"

// int main(void)
// {
//     ft_putnbr_fd(42, 1);
//     write(1, "\n", 1);
//     ft_putnbr_fd(-12345, 1);
//     write(1, "\n", 1);
//     ft_putnbr_fd(0, 1);
//     write(1, "\n", 1);
//     ft_putnbr_fd(-2147483648, 1);
//     write(1, "\n", 1);
//     return (0);
// }
