/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ankinzin <ankinzin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 11:04:49 by ankinzin          #+#    #+#             */
/*   Updated: 2022/12/23 11:37:09 by ankinzin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

/**
 * The ft_memcpy() function copies n bytes from 
 * memory area src to memory area dst.
 * If dst and src overlap, behavior is undefined.
 * Applications in which dst and src might overlap 
 * should use memmove(3) instead
 *
 * The memcpy() function returns the pointer dst.
*/

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	if ((dest == NULL) && (src == NULL))
		return (NULL);
	i = 0;
	while (i < n)
	{
		*((unsigned char *)(dest + i)) = *((unsigned char *)(src + i));
		i++;
	}
	return (dest);
}
