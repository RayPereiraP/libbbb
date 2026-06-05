/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rayperei <rayperei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/27 12:10:45 by rayperei          #+#    #+#             */
/*   Updated: 2026/06/05 14:18:19 by rayperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	i;

	dst_len = 0;
	src_len = ft_strlen(src);
	while (dst[dst_len] && dst_len < size)
		dst_len++;
	if (dst_len == size)
		return (size + src_len);
	i = 0;
	while (src[i] && (dst_len + i) < size - 1)
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	dst[dst_len + i] = '\0';
	return (dst_len + src_len);
}

/*
Concatena src ao final de dst respeitando o tamanho do buffer.
Retorna o tamanho que a string teria tentado criar.
*/

/*
#include <stdio.h>
#include "libft.h"

int	main(void)
{
	char	dst[20] = "Hello ";
	size_t	len;

	len = ft_strlcat(dst, "World", sizeof(dst));
	printf("dst: %s\n", dst);
	printf("len: %zu\n", len);
	return (0);
}
*/