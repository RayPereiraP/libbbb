/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rayperei <rayaryray14@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/18 16:28:25 by rayperei          #+#    #+#             */
/*   Updated: 2026/06/03 19:25:42 by rayperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;
	size_t				i;

	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	if (!dest && !src)
		return (NULL);
	if (d < s)
	{
		i = 0;
		while (i < n)
			d[i] = s[i++];
	}
	else
		while (n > 0)
			d[--n] = s[n];
	return (dest);
}


/*
Copia n bytes de src para dest.
Funciona corretamente mesmo quando as áreas de memória se sobrepõem.
*/

/*
#include <stdio.h>
#include "libft.h"

int	main(void)
{
	char	str[] = "abcdef";

	ft_memmove(str + 2, str, 4);

	printf("%s\n", str);

	return (0);
}
*/