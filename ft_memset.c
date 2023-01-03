/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ankinzin <ankinzin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 11:08:01 by ankinzin          #+#    #+#             */
/*   Updated: 2023/01/03 11:07:21 by ankinzin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

/**
 *	- The ft_memset() function writes n bytes of value c
 *	(converted to an unsigned char) to buffer.
 * 
 *	- The ft_memset() function returns the buffer.
**/

#include "libft.h"

void	*ft_memset(void *buffer, int c, size_t len)
{
	size_t			i;
	unsigned char	*buc;

	i = 0;
	buc = (unsigned char *)buffer;
	while (i < len)
	{
		buc[i] = c;
		i++;
	}
	return (buffer = buc);
}
