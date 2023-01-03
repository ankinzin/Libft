/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ankinzin <ankinzin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 10:33:22 by ankinzin          #+#    #+#             */
/*   Updated: 2022/12/30 21:11:18 by ankinzin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
/**
 * Allocates (with malloc(3)) and returns a substring from the string 's'
 * The substring begins at index 'start' and is of maximum size 'len'.
 *
 * - Parameters:
 * s: The string from which to create the substring.
 * start: The start index of the substring in the string 's'.
 * len: The maximum length of the substring.
 *
 * - Returnes the substring or NULL if the allocation fails.
**/

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*mem;

	if (s == NULL)
		return (NULL);
	if (start >= (unsigned int)ft_strlen(s))
	{
		start = 0;
		len = 0;
	}
	if (len > ft_strlen(s) - (size_t)start)
		len = ft_strlen(s) - (size_t)start;
	mem = malloc(sizeof(char) * (len + 1));
	if (mem == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		mem[i] = ((char *)s)[(size_t)start + (i)];
		i++;
	}
	mem[i] = '\0';
	return (mem);
}
