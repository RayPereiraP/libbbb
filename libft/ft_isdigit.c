/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rayperei <rayaryray14@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/18 12:11:00 by rayperei          #+#    #+#             */
/*   Updated: 2026/06/03 15:46:52 by rayperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}


/*
#include <stdio.h>
#include "libft.h"

int	main(void)
{
	printf("%d\n", ft_isdigit('0'));
	printf("%d\n", ft_isdigit('5'));
	printf("%d\n", ft_isdigit('9'));

	printf("%d\n", ft_isdigit('a'));
	printf("%d\n", ft_isdigit('@'));
	printf("%d\n", ft_isdigit(' '));

	return (0);
}
*/