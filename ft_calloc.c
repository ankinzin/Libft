/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ankinzin <ankinzin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 12:13:39 by ankinzin          #+#    #+#             */
/*   Updated: 2022/12/23 11:36:39 by ankinzin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

/**
 * The ft_calloc() function contiguously allocates enough space for count
 * objects that are size bytes of memory each and returns a pointer to
 * the allocated memory.
 * The allocated memory is filled with bytes of value zero.
*/

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*buffer;
	int		area;

	area = nmemb * size;
	buffer = malloc(area);
	if (!buffer)
		return (NULL);
	while (--area >= 0)
		*(buffer + area) = '\0';
	return ((void *)buffer);
}
