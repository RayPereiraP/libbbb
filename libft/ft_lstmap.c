/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rayperei <rayperei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/27 11:56:23 by rayperei          #+#    #+#             */
/*   Updated: 2026/06/05 12:18:59 by rayperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content);

void	ft_lstclear(t_list **lst, void *(*f)(void *), void (*del)(void *));

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *),
			void (*del)(void *))
{
	t_list	*new_list;
	t_list	*new_node;
	void	*new_content;

	new_list = NULL;
	if (!lst || !f || !del)
		return (NULL);
	while (lst)
	{
		new_content = f(lst->content);
		new_node = ft_lstnew(new_content);
		if (!new_node)
		{
			del(new_content);
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		ft_lstadd_back(&new_list, new_node);
		lst = lst->next;
	}
	return (new_list);
}

/*
Aplica uma função ao conteúdo de cada nó
e cria uma nova lista com os resultados
*/

/*
#include <stdio.h>
#include "libft.h"

void	*dup_str(void *content)
{
	return (ft_strdup((char *)content));
}

void	del_str(void *content)
{
	free(content);
}

int	main(void)
{
	t_list	*lst;
	t_list	*new;

	lst = ft_lstnew("42");
	ft_lstadd_back(&lst, ft_lstnew("SP"));

	new = ft_lstmap(lst, dup_str, del_str);

	while (new)
	{
		printf("%s\n", (char *)new->content);
		new = new->next;
	}
	return (0);
}
*/