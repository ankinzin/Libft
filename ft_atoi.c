/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ankinzin <ankinzin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 11:44:33 by ankinzin          #+#    #+#             */
/*   Updated: 2023/01/03 11:02:39 by ankinzin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 *	The ft_atoi() function converts the initial portion of the string
 *	pointed to by ptr to int representation.
 *	Not overflow protected .
**/
int	ft_atoi(const char *ptr)
{
	int	sign;
	int	res;

	sign = 1;
	res = 0;
	while ((*ptr == '\f') || (*ptr == '\n') || (*ptr == '\r')
		|| (*ptr == '\t') || (*ptr == '\v') || (*ptr == ' '))
		ptr++;
	if ((*ptr == '+') || (*ptr == '-'))
	{
		if (*ptr == '-')
			sign *= -1;
		ptr++;
	}
	while ((*ptr >= '0') && (*ptr <= '9'))
	{
		res *= 10;
		res += (*ptr - 48);
		ptr++;
	}
	return (res * sign);
}
