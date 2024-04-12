/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_hex.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spitul <spitul@student.42berlin.de >       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 17:09:24 by spitul            #+#    #+#             */
/*   Updated: 2024/01/06 18:01:04 by spitul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	hex_len(unsigned int nb)
{
	int	len;

	len = 1;
	while (nb / 16)
	{
		nb /= 16;
		len ++;
	}
	return (len);
}

void	ft_hex_conv(unsigned int nb, const char format)
{
	char	nb_char;

	if (nb >= 16)
	{
		ft_hex_conv(nb / 16, format);
		ft_hex_conv(nb % 16, format);
	}
	if (nb < 10)
	{
		nb_char = nb + 48;
		write(1, &nb_char, 1);
	}
	else if (nb < 16 && nb >= 10)
	{
		if (format == 'x')
		{
			nb_char = nb - 10 + 'a';
			write(1, &nb_char, 1);
		}
		else if (format == 'X')
		{
			nb_char = nb - 10 + 'A';
			write(1, &nb_char, 1);
		}
	}
}

int	ft_put_hex(unsigned int nb, const char format)
{
	ft_hex_conv(nb, format);
	return (hex_len(nb));
}

/*#include <stdio.h>
int	main(void)
{
	int	n;

	n = hex_len(0);
	printf("length is %d\n", n); 
	ft_hex_conv(0, 'X');
	return (0);
}*/