/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ankinzin <ankinzin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 10:27:52 by ankinzin          #+#    #+#             */
/*   Updated: 2022/12/23 11:37:22 by ankinzin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

/**
 *	Allocates (with malloc(3)) and returns a new string, which is the result
 *	of the concatenation of 's1' and 's2'.
 *
 *	- Parameters:
 *	s1: The prefix string
 *	s2: The suffix string
 *
 *	- Return value:
 *	The new string. NULL if the allocation fails.
**/

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	char	*str;
	size_t	lentotal;

	lentotal = (ft_strlen(s1) + ft_strlen(s2));
	str = malloc(sizeof(char) * (lentotal + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (s1 && *(s1 + i))
	{
		*(str + i) = *(s1 + i);
		i++;
	}
	j = 0;
	while (s2 && *(s2 + j))
	{
		*(str + i++) = *(s2 + j++);
	}
	*(str + i) = '\0';
	return (str);
}
