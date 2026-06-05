/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rayperei <rayaryray14@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/27 11:59:32 by rayperei          #+#    #+#             */
/*   Updated: 2026/06/03 18:33:50 by rayperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;
	size_t				i;

	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	i = 0;

	if (!dest && !src)
		return (NULL);

	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}


/*
Copia n bytes da memória src para dest.
Não deve ser usada quando as áreas de memória se sobrepõem.
*/

/*
#include <stdio.h>
#include "libft.h"

int	main(void)
{
	char	src[] = "Hello";
	char	dest[10];

	ft_memcpy(dest, src, 6);

	printf("src : %s\n", src);
	printf("dest: %s\n", dest);

	return (0);
}
*/