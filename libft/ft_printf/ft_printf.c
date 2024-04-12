/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spitul <spitul@student.42berlin.de >       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 15:56:15 by spitul            #+#    #+#             */
/*   Updated: 2024/01/08 17:03:38 by spitul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_format(const char format, va_list arg)
{
	if (format == 'c')
		return (ft_putchar(va_arg(arg, int)));
	else if (format == 's')
		return (ft_putstr(va_arg(arg, char *)));
	else if (format == 'p')
		return (ft_put_ptr(va_arg(arg, unsigned long long)));
	else if (format == 'd' || format == 'i')
		return (ft_putnbr(va_arg(arg, int)));
	else if (format == 'x' || format == 'X')
		return (ft_put_hex(va_arg(arg, unsigned int), format));
	else if (format == 'u')
		return (ft_put_unsigned(va_arg(arg, unsigned int)));
	else
	{
		write(1, &format, 1);
		return (1);
	}
}

int	ft_printf(const char *str, ...)
{
	int		i;
	int		printed;
	va_list	arg;

	i = 0;
	printed = 0;
	if (!str)
		return (-1);
	va_start(arg, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			i++;
			printed += print_format(str[i], arg);
		}
		else
			printed += ft_putchar(str[i]);
		i++;
	}
	va_end(arg);
	return (printed);
}
