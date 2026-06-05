/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rayperei <rayperei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/27 12:14:30 by rayperei          #+#    #+#             */
/*   Updated: 2026/06/05 14:05:34 by rayperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	if (*needle == '\0')
		return ((char *)haystack);

	i = 0;
	while (haystack[i] && i < len)
	{	
		j = 0;
		while (haystack[i + j] == needle[j] && (i + j) < len)
		{
			if (needle[j + 1] == '\0')
				return ((char *)&haystack[i]);
			j++;
		}
		i++;
	}
	return (0);
}
/*
Procura a primeira ocorrência de needle em haystack,
considerando no máximo len caracteres.
*/

/*
#include <stdio.h>
#include "libft.h"

int	main(void)
{
	char	*ptr;

	ptr = ft_strnstr("Hello World", "World", 11);
	printf("%s\n", ptr);

	ptr = ft_strnstr("Hello World", "abc", 11);
	printf("%p\n", (void *)ptr);

	return (0);
}
*/