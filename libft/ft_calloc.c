/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rayperei <rayaryray14@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/26 11:54:32 by rayperei          #+#    #+#             */
/*   Updated: 2026/06/03 20:47:40 by rayperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;
	size_t	i;
	char	*tmp;

	ptr = malloc(count * size);
	if (!ptr)
		return (NULL);

	tmp = (char *)ptr;

	i = 0;
	while (i < count * size)
	{
		tmp[i] = 0;
		i++;
	}
	return (ptr);
}

/*
Aloca memória e inicializa todos os bytes com zero.
*/

/*
#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

int	main(void)
{
	int	*i;
	int	j;

	i = ft_calloc(5, sizeof(int));
	j = 0;
	while (j < 5)
	{
		printf("%d ", i[j]);
		j++;
	}
	printf("\n");
	free(i);
	return (0);
}
*/