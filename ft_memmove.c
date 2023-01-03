/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ankinzin <ankinzin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 11:07:10 by ankinzin          #+#    #+#             */
/*   Updated: 2022/12/23 11:37:10 by ankinzin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

/**
 * The ft_memmove() function copies len 
 * bytes from string src to string dest.
 * The two strings may overlap; the copy
 *  is always done in a non-destructive manner.
 *
 * The ft_memmove() function returns the pointer dest.
**/

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;

	if ((dest == NULL) && (src == NULL))
		return (NULL);
	i = 0;
	if (dest > src)
	{
		while (n--)
		{
			*((unsigned char *)dest + n) = *((unsigned char *)src + n);
		}
	}
	else
	{
		while (n--)
		{
			*((unsigned char *)dest + i) = *((unsigned char *)src + i);
			i++;
		}
	}
	return (dest);
}
