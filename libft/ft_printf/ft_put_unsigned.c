/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_unsigned.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spitul <spitul@student.42berlin.de >       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/06 15:02:48 by spitul            #+#    #+#             */
/*   Updated: 2024/01/06 18:01:16 by spitul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_put_unsigned(unsigned int n)
{
	int		count;
	char	c_n;

	count = 0;
	if (n > 9)
	{
		count += ft_put_unsigned(n / 10);
		n = n % 10;
	}
	if (n < 10)
	{
		c_n = (n % 10) + 48;
		count += write(1, &c_n, 1);
	}
	return (count);
}
