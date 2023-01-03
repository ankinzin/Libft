/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ankinzin <ankinzin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 11:54:54 by ankinzin          #+#    #+#             */
/*   Updated: 2022/12/23 11:37:13 by ankinzin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

/**
 * Outputs the character 'c' to the given file descriptor.
 *
 * - Parameters:
 * c: The character to output.
 * fd: The file descriptor on which to write.
 *
 * - Returns None
**/

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
