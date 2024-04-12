/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spitul <spitul@student.42berlin.de >       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/06 14:18:32 by spitul            #+#    #+#             */
/*   Updated: 2024/01/06 18:01:21 by spitul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int n)
{
	char	c_n;
	int		count;

	count = 0;
	if (n == -2147483648)
	{
		ft_putstr("-2147483648");
		return (11);
	}
	if (n < 0)
	{
		n *= -1;
		count += write (1, "-", 1);
	}
	if (n > 9)
	{
		count += ft_putnbr(n / 10);
		n = n % 10;
	}
	if (n < 10)
	{
		c_n = (n % 10) + 48;
		count += write(1, &c_n, 1);
	}
	return (count);
}

/*#include <stdio.h>
int	main(void)
{
	int	n;

	n = ft_putnbr(563543);
	printf("\n%d", n);
	return (0);
}*/