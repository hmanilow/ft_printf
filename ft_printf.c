/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmanilow <hmanilow@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 17:12:25 by hmanilow          #+#    #+#             */
/*   Updated: 2021/12/03 16:00:30 by hmanilow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *str, ...)
{
	int		i;
	va_list	q;
	int		sum;

	i = -1;
	sum = 0;
	va_start(q, str);
	while (str[++i])
	{
		if (str[i] == '%')
		{
			sum += ft_checking_making(q, str[i + 1]);
			i++;
		}
		else
		{
			write(1, &str[i], 1);
			sum++;
		}
	}
	va_end(q);
	return (sum);
}
