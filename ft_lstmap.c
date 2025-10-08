/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmiguele <jmiguele@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 11:21:11 by jmiguele          #+#    #+#             */
/*   Updated: 2025/10/08 13:02:24 by jmiguele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*new_node;

	if (!lst || !f || !del)
		return (NULL);
	new_list = NULL;
	while (lst)
	{
		new_node = ft_lstnew(f(lst->content));
		if (!new_node)
		{
			ft_lstdelone(new_node, del);
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		ft_lstadd_back(&new_list, new_node);
		lst = lst->next;
	}
	return (new_list);
}

/*

ft_lstmap       : KO

Errors found:
For ft_lstmap, in /home/jmiguele/francinette/tests/libft/fsoares/test_lstmap.c:

Error in test 2: ft_lstmap(<list: {node: "hello!"}->(null)>, [s => __strlen(s)],
	[x => free(x)]) NULL check for 1th malloc:
Memory leak: 0x5566aa1139f0 - 30 bytes
You failed to free the memory allocated at:Most likely you are not calling del on the content when a new list node allocation fails.

Error in test 3: ft_lstmap(<list: {node: "one"}->{node: "two"}->{node: "three"}->{node: "four"}->{node: "five"}->(null)>,
	[s => __strlen(s)], [x
=> free(x)]) NULL check for 1th malloc:
Memory leak: 0x5566aa113e70 - 30 bytes
You failed to free the memory allocated at:Most likely you are not calling del on the content when a new list node allocation fails.

Error in test 3: ft_lstmap(<list: {node: "one"}->{node: "two"}->{node: "three"}->{node: "four"}->{node: "five"}->(null)>,
	[s => __strlen(s)], [x
=> free(x)]) NULL check for 3th malloc:
Memory leak: 0x5566aa113ec0 - 30 bytes
You failed to free the memory allocated at:Most likely you are not calling del on the content when a new list node allocation fails.

Error in test 3: ft_lstmap(<list: {node: "one"}->{node: "two"}->{node: "three"}->{node: "four"}->{node: "five"}->(null)>,
	[s => __strlen(s)], [x
=> free(x)]) NULL check for 5th malloc:
Memory leak: 0x5566aa113d80 - 30 bytes
You failed to free the memory allocated at:Most likely you are not calling del on the content when a new list node allocation fails.

Error in test 3: ft_lstmap(<list: {node: "one"}->{node: "two"}->{node: "three"}->{node: "four"}->{node: "five"}->(null)>,
	[s => __strlen(s)], [x
=> free(x)]) NULL check for 7th malloc:
Memory leak: 0x5566aa113f40 - 30 bytes
You failed to free the memory allocated at:Most likely you are not calling del on the content when a new list node allocation fails.

Error in test 3: ft_lstmap(<list: {node: "one"}->{node: "two"}->{node: "three"}->{node: "four"}->{node: "five"}->(null)>,
	[s => __strlen(s)], [x
=> free(x)]) NULL check for 9th malloc:
Memory leak: 0x5566aa1154d0 - 30 bytes
You failed to free the memory allocated at:Most likely you are not calling del on the content when a new list node allocation fails.


*/