/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rayperei <rayaryray14@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/27 12:03:34 by rayperei          #+#    #+#             */
/*   Updated: 2026/06/04 19:30:24 by rayperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	nb;
	char	c;

	nb = n;

	if (nb < 0)
	{
		write(fd, "-", 1);
		nb = -nb;
	}

	if (nb >= 10)
		ft_putnbr_fd(nb / 10, fd);

	c = (nb % 10) + '0';
	write(fd, &c, 1);
}

/*
Converte o número em caracteres e escreve no descritor de arquivo indicado.
*/

/*
#include "libft.h"

int	main(void)
{
	ft_putnbr_fd(42, 1);
	ft_putchar_fd('\n', 1);

	ft_putnbr_fd(-12345, 1);
	ft_putchar_fd('\n', 1);

	return (0);
}
*/