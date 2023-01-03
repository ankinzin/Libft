/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ankinzin <ankinzin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 10:29:05 by ankinzin          #+#    #+#             */
/*   Updated: 2022/12/23 11:37:25 by ankinzin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

/*
* The ft_strlcpy() function copies up to size - 1 characters from the
* NUL-ter‐minated string src to dst, NUL-terminating the result.
* It takes the full size of the buffer (not just the length)  and guarantee
* to NUL-terminate the result (as long as size islarger than 0). This means
* that for ft_strlcpy() src must be NUL-terminated.
*
* The function returns the total lenght of the string, that means src length.
*/

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	lensrc;

	lensrc = ft_strlen(src);
	i = 0;
	if (size == 0)
		return (lensrc);
	while (((size - 1) > i) && (*(src + i) != '\0'))
	{
		*(dest + i) = *(src + i);
		i++;
	}
	*(dest + i) = '\0';
	return (lensrc);
}
