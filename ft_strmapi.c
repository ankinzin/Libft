/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ankinzin <ankinzin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 10:30:25 by ankinzin          #+#    #+#             */
/*   Updated: 2022/12/23 11:37:27 by ankinzin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

/**
 * Applies the function 'f' to each character of the string 's', and passing
 * its index as first argument to create a new string (with malloc(3))
 * resulting from successive applications of 'f'.
 *
 * - Parameters:
 * s: The string on which to iterate.
 * f: The function to apply to each character.
 *
 * Returns the string created from the successive applications of 'f'
 * or NULL if the allocation fails.
**/

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*str;

	if (!s)
		return (NULL);
	str = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (*(s + i) != '\0')
	{
		*(str + i) = f(i, *(s + i));
		i++;
	}
	*(str + i) = '\0';
	return (str);
}
