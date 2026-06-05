/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rayperei <rayaryray14@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/27 12:07:48 by rayperei          #+#    #+#             */
/*   Updated: 2026/06/03 21:01:03 by rayperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s);

char	*ft_strdup(const char *s1)
{
	size_t	len;
	size_t	i;
	char	*copy;

	len = 0;
	while (s1[len])
		len++;

	copy = (char *)malloc(sizeof(char) * (len + 1));
	if (!copy)
		return (NULL);

	i = 0;
	while (i < len)
	{
		copy[i] = s1[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}

/*
Cria uma nova cópia da string recebida.
Retorna a cópia alocada dinamicamente
*/

/*
#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

int	main(void)
{
	char	*copy;

	copy = ft_strdup("Hello World");
	printf("%s\n", copy);

	free(copy);
	return (0);
}
*/