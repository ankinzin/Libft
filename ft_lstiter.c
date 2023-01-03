/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ankinzin <ankinzin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 10:41:47 by ankinzin          #+#    #+#             */
/*   Updated: 2022/12/23 11:36:56 by ankinzin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

/**
 * - Description:
 * Iterates the list 'lst' and applies the function 'f' on the content
 * of each node.
 *
 * - Parameters:
 * lst: The address of a pointer to a node.
 * f: The address of the function used to iterate on the list.
 *
 * - Return value:
 * None
**/

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*temp;

	if (!lst)
		return ;
	temp = lst;
	while (temp != NULL)
	{
		(*f)(temp->content);
		temp = temp->next;
	}
}
