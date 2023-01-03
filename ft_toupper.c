/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ankinzin <ankinzin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 10:34:18 by ankinzin          #+#    #+#             */
/*   Updated: 2023/01/03 11:11:08 by ankinzin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * The toupper() function converts a lower-case letter to the corresponding
 * upper-case letter.  The argument must be representable as an
 * unsigned char or the value of EOF.
 *
 * If the argument is a lower-case letter, the toupper() function returns the
 * corresponding upper-case letter if there is one;
 * otherwise, the argument is returned unchanged. 
*/

int	ft_toupper(int c)
{
	if ((c >= 'a') && (c <= 'z'))
		c -= 32;
	return (c);
}
