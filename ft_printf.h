/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmanilow <hmanilow@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 17:12:33 by hmanilow          #+#    #+#             */
/*   Updated: 2021/12/02 15:36:27 by hmanilow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>
# include <limits.h>

# define HEX16_S "0123456789abcdef"
# define HEX16_B "0123456789ABCDEF"

int		ft_putchar(char c);
int		ft_putstr(char *c);
int		ft_unsigned_putnbr(unsigned int num);
int		ft_putnbr(int n);
size_t	ft_strlen(const char *str);
int		ft_len(int n);
int		ft_chex(unsigned int a, char *str);
int		ft_chex_p(unsigned long int a, char *str);
int		ft_pointer(void *p);
int		ft_checking_making(va_list q, char s);
int		ft_printf(const char *str, ...);

#endif
