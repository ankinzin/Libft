/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ankinzin <ankinzin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 10:43:02 by ankinzin          #+#    #+#             */
/*   Updated: 2022/12/23 11:37:00 by ankinzin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

/**
 * - Description:
 * Allocates (with malloc(3)) and returns a new node.
 * The member variable 'content' is initialized with the value of the
 * parameter 'content'.
 * The variable 'next' is initialized to NULL.
 *
 * - Parameters:
 * content: The content to create the node with.
 *
 * - Return value:
 * The new node.
**/

t_list	*ft_lstnew(void *content)
{
	t_list	*new_node;

	new_node = (t_list *)malloc(sizeof(t_list));
	if (!new_node)
		return (NULL);
	new_node->content = content;
	new_node->next = NULL;
	return (new_node);
}
