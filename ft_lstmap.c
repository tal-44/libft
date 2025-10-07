/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmiguele <jmiguele@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 11:21:11 by jmiguele          #+#    #+#             */
/*   Updated: 2025/10/07 12:44:55 by jmiguele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*list;

	while (lst)
	{
		list = ft_lstnew(NULL);
		if (!(list))
			return (NULL);
		list->content = f(lst->content);
		list->next = lst->next;
		lst = lst->next;
	}
}
