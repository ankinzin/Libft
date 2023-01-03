/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ankinzin <ankinzin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 11:04:19 by ankinzin          #+#    #+#             */
/*   Updated: 2022/12/24 10:53:34 by ankinzin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
/**
 * The ft_memcmp() function compares byte string 
 * s1 against byte string s2.
 * Both strings are assumed to be n bytes long.
 *
 * The memcmp() function returns zero if the two s
 * trings are identical,
 * otherwise returns the difference (ASCII value) 
 * between the first two differing bytes.
 * Zero-length strings are always identical.
**/

int	ft_memcmp(const void *buf1, const void *buf2, size_t n)
{
	const unsigned char	*s1;
	const unsigned char	*s2;
	size_t				i;

	i = 0;
	s1 = (const unsigned char *)buf1;
	s2 = (const unsigned char *)buf2;
	while (i < n)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}
