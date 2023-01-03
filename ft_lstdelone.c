/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ankinzin <ankinzin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 10:41:17 by ankinzin          #+#    #+#             */
/*   Updated: 2022/12/23 11:36:54 by ankinzin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

/**
 * - Description:
 * Takes as a parameter a node and frees the memory of the node's content usign
 * the function 'del' given as a parameter and free the node.
 * The memory of 'next' myst not be freed.
 *
 * - Parameters:
 * lst: The node to free.
 * del: The address of the function used to delete the content.
 *
 * - Return value:
 * None
**/

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}
