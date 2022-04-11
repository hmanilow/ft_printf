/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lib_part2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmanilow <hmanilow@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 18:48:57 by hmanilow          #+#    #+#             */
/*   Updated: 2021/12/02 15:21:53 by hmanilow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_putstr(char *c)
{
	int	i;

	if (!c)
	{
		write (1, "(null)", 6);
		return (6);
	}
	i = 0;
	while (c[i])
	{
		write(1, &c[i], 1);
		i++;
	}
	return (i);
}
