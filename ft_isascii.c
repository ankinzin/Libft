/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ankinzin <ankinzin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 12:22:53 by ankinzin          #+#    #+#             */
/*   Updated: 2023/01/03 11:03:59 by ankinzin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 *	The ft_isascii() function tests for an ASCII character,
 *	which is any character between 0 and decimal 127 inclusive .
**/

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	else
		return (0);
}
