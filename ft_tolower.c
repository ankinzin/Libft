/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ankinzin <ankinzin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 10:33:51 by ankinzin          #+#    #+#             */
/*   Updated: 2023/01/03 11:10:58 by ankinzin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * The tolower() function converts an upper-case letter to the corresponding
 * lower-case letter.
 *
 * If the argument is an upper-case letter, the tolower() function returns
 * the corresponding lower-case letter if there is one;
 * Otherwise, the argument is returned unchanged. 
**/

int	ft_tolower(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
		c += 32;
	return (c);
}
