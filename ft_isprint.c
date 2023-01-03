/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ankinzin <ankinzin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 11:25:05 by ankinzin          #+#    #+#             */
/*   Updated: 2022/12/23 11:36:46 by ankinzin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 *	The ft_isprint() function tests for any printing character,
 *	including space (‘ ’).  The value of the argument must be
 *	representable as an unsigned char or the value of EOF.
 *
 *	- The isprint() function returns zero if the character tests false and
 *	returns non-zero if the character tests true.
**/

int	ft_isprint(int c)
{
	if (c >= ' ' && c <= '~')
		return (1);
	else
		return (0);
}
