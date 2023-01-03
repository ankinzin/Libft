/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ankinzin <ankinzin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 12:25:25 by ankinzin          #+#    #+#             */
/*   Updated: 2023/01/03 11:04:20 by ankinzin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 *	- The ft_isdigit() function tests for a decimal digit character.
 *	Regardless of locale, this includes the following characters only:
 *	'0'	'1'	'2'	'3'	'4'	'5'	'6'	'7'	'8'	'9'
 *	- The isdigit() function return zero if the character
 *	tests false and return non-zero if the character tests true .
*/

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
