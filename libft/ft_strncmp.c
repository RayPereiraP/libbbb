/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rayperei <rayaryray14@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/27 12:13:49 by rayperei          #+#    #+#             */
/*   Updated: 2026/06/03 20:01:27 by rayperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (i < n - 1 && s1[i] && s1[i] == s2[i])
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
/*
Compara até n caracteres de duas strings.
Retorna a diferença entre os primeiros caracteres diferentes.
*/

/*
#include <stdio.h>
#include "libft.h"

int	main(void)
{
	printf("%d\n", ft_strncmp("abc", "abc", 3));
	printf("%d\n", ft_strncmp("abc", "abd", 3));
	printf("%d\n", ft_strncmp("abd", "abc", 3));
	printf("%d\n", ft_strncmp("abc", "ab", 3));
	printf("%d\n", ft_strncmp("abc", "xyz", 0));
	return (0);
}
*/