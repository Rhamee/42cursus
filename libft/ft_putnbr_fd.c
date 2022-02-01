/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrha <hrha@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 18:48:22 by hrha              #+#    #+#             */
/*   Updated: 2022/02/01 18:48:22 by hrha             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	nb_check(int nb, int fd, char *b, int count)
{
	if (nb < 0)
	{
		write(fd, "-", 1);
		nb = -nb;
	}
	else if (nb == 0)
	{
		write(fd, "0", 1);
		return ;
	}
	while (nb)
	{
		b[count] = nb % 10 + '0';
		count--;
		nb /= 10;
	}
	count++;
	while (count < 10)
	{
		write(fd, &b[count], 1);
		count++;
	}
}

void	ft_putnbr_fd(int n, int fd)
{
	char	b[10];
	int		count;

	count = 9;
	if (n == -2147483648)
	{
		write(fd, "-2147483648", 11);
		return ;
	}
	else
		nb_check(n, fd, b, count);
}
