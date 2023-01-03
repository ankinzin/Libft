/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ankinzin <ankinzin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 12:21:33 by ankinzin          #+#    #+#             */
/*   Updated: 2023/01/03 11:03:44 by ankinzin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 *	- The ft_isalpha() function tests for any character for which
 *	isupper(3) or islower(3) is true.  The value of the argument must be
 *
 *	- The isalpha() function returns zero if the character tests false and
 *	returns non-zero if the character tests true .
*/

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
