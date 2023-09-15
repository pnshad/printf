/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnourish <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 01:40:32 by pnourish          #+#    #+#             */
/*   Updated: 2023/05/26 22:18:24 by pnourish         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void		st_putchar_fd(char c, int fd);

static size_t	st_abs(int n);

void	ft_putnbr_fd(int n, int fd)
{
	if (n < 0)
		st_putchar_fd('-', fd);
	if (st_abs(n / 10))
		ft_putnbr_fd(st_abs(n / 10), fd);
	st_putchar_fd('0' + st_abs(n % 10), fd);
}

static size_t	st_abs(int n)
{
	if (n < 0)
		n = -n;
	return (n);
}

static	void	st_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
