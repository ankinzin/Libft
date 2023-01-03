/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ankinzin <ankinzin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 10:26:21 by ankinzin          #+#    #+#             */
/*   Updated: 2023/01/03 11:08:49 by ankinzin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

/**
 * The ft_strchr() function locates the first occurrence of c
 * (converted to a char) in the string pointed to by str.
 * The terminating null character is considered to be part of the string;
 * Therefore if c is ‘\0’, the functions locate the terminating ‘\0’
 *
 * The functions ft_strchr() return a pointer to the located character c,
 * or NULL if the character does not appear in the string .
*/

char	*ft_strchr(const char *str, int c)
{
	int	i;

	i = -1;
	while (++i <= (int) ft_strlen(str))
	{
		if (((char *)str)[i] == (char)c)
			return ((char *)str + i);
	}
	return (NULL);
}
