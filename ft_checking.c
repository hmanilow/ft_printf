/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checking.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmanilow <hmanilow@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 17:15:22 by hmanilow          #+#    #+#             */
/*   Updated: 2021/12/03 16:20:42 by hmanilow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_chex(unsigned int a, char *str)
{
	int	i;

	if (a < 16)
		return (ft_putchar(str[a]));
	i = ft_chex(a / 16, str);
	ft_chex(a % 16, str);
	return (i + 1);
}

int	ft_chex_p(unsigned long int a, char *str)
{
	int	i;

	if (a < 16)
		return (ft_putchar(str[a]));
	i = ft_chex_p(a / 16, str);
	ft_chex_p(a % 16, str);
	return (i + 1);
}

int	ft_pointer(void *p)
{
	write(1, "0x", 2);
	return (2 + ft_chex_p((unsigned long int)p, HEX16_S));
}

int	ft_checking_making(va_list q, char s)
{
	if (s == 'd' || s == 'i')
		return (ft_putnbr(va_arg(q, int)));
	else if (s == 's')
		return (ft_putstr(va_arg(q, char *)));
	else if (s == 'x')
		return (ft_chex(va_arg(q, unsigned int), HEX16_S));
	else if (s == 'X')
		return (ft_chex(va_arg(q, unsigned int), HEX16_B));
	else if (s == 'c')
		return (ft_putchar((char)va_arg(q, int)));
	else if (s == 'u')
		return (ft_unsigned_putnbr(va_arg(q, unsigned int)));
	else if (s == 'p')
		return (ft_pointer(va_arg(q, void *)));
	else if (s == '%')
		return (ft_putchar(s));
	return (0);
}
