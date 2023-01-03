/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ankinzin <ankinzin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 11:03:47 by ankinzin          #+#    #+#             */
/*   Updated: 2022/12/23 11:37:07 by ankinzin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

/**
 *	The ft_memchr() function locates the first occurrence of c (converted to
 *	an unsigned char) in string str.
 *
 *	The memchr() function returns a pointer to the byte located, or NULL
 *	if no such byte exists within n bytes.
**/

void	*ft_memchr(const void *str, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (*((unsigned char *)str + i) == ((unsigned char)c))
			return ((void *)str + i);
		i++;
	}
	return (NULL);
}
