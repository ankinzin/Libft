/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ankinzin <ankinzin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 10:32:00 by ankinzin          #+#    #+#             */
/*   Updated: 2023/01/03 11:10:37 by ankinzin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

/**
 * The ft_strrchr() function is identical to ft_strchr(), except it
 * locates the last occurrence of c .
 *
 * The strrchr() return a pointer to the located character,
 * or NULL if the character c does not appear in the string.
**/

char	*ft_strrchr(const char *str, int c)
{
	int	i;

	if ((char)c == '\0')
		return ((char *)(str + ft_strlen(str)));
	i = ft_strlen(str) - 1;
	while (i >= 0)
	{
		if (str[i] == (char)c)
			return ((char *)(str + i));
		i--;
	}
	return (NULL);
}
