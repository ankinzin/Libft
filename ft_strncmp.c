/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ankinzin <ankinzin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 10:31:05 by ankinzin          #+#    #+#             */
/*   Updated: 2022/12/23 11:37:28 by ankinzin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

/*
**	The  ft_strncmp()  function  is similar, except it compares only the
**	first (at most) n bytes of s1 and s2.
**
**	The ft_strcmp() and ft_strncmp() functions return an integer less than, equal
**	to, or greater than zero if s1 (or the first n bytes thereof) is found,
**	respectively, to be less than, to match, or be greater than s2.
*/

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (((*(s1 + i) != '\0') || (*(s2 + i) != '\0')) && (i < n))
	{
		if ((*(s1 + i)) != (*(s2 + i)))
			return ((*(unsigned char *)(s1 + i))
			- (*(unsigned char *)(s2 + i)));
		i++;
	}
	return (0);
}
