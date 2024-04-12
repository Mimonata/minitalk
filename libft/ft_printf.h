/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spitul <spitul@student.42berlin.de >       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 17:58:05 by spitul            #+#    #+#             */
/*   Updated: 2024/01/06 18:00:28 by spitul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdint.h>
# include <stdarg.h>

int	ft_printf(const char *str, ...);
int	ft_putchar(char arg);
int	ft_putstr(char *str);
int	ft_put_hex(unsigned int nb, const char format);
int	ft_put_ptr(unsigned long long ptr);
int	ft_put_unsigned(unsigned int n);
int	ft_putnbr(int n);

#endif