/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lib_part1.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmanilow <hmanilow@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 18:48:39 by hmanilow          #+#    #+#             */
/*   Updated: 2021/12/02 15:42:39 by hmanilow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_unsigned_putnbr(unsigned int num)
{
	char	s;
	int		i;

	if (num < 10)
	{
		s = num + '0';
		write(1, &s, 1);
		return (1);
	}
	else
	{
		i = ft_unsigned_putnbr(num / 10);
		ft_unsigned_putnbr(num % 10);
	}
	return (i + 1);
}

int	ft_putnbr(int n)
{
	int		sum;
	char	uzi;

	sum = ft_len(n);
	if (n == -2147483648)
		write(1, "-2147483648", 11);
	else if (n < 0)
	{
		write(1, "-", 1);
		n *= -1;
		ft_putnbr(n);
	}
	else if (n < 10)
	{
		uzi = n + '0';
		write(1, &uzi, 1);
	}
	else
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}
	return (sum);
}

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	ft_len(int n)
{
	int	i;

	i = 0;
	if (n <= 0)
		i++;
	while (n != 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}
