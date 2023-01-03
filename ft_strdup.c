/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ankinzin <ankinzin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 10:26:46 by ankinzin          #+#    #+#             */
/*   Updated: 2022/12/23 11:37:20 by ankinzin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

/**
 *	The ft_strdup() function allocates sufficient memory for a copy of the
 *	string str, does the copy, and returns a pointer to it. The pointer
 *	may subsequently be used as an argument to the function free(3).
 *	If insufficient memory is available, NULL is returned.
**/

char	*ft_strdup(const char *str)
{
	size_t	i;
	size_t	sizestr;
	char	*str_cpy;

	sizestr = ft_strlen(str) + 1;
	str_cpy = (char *)malloc(sizestr);
	if (!str_cpy)
		return (NULL);
	i = 0;
	while (i < sizestr)
	{
		*(str_cpy + i) = *(str + i);
		i++;
	}
	return (str_cpy);
}
