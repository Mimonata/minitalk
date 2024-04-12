/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_ptr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spitul <spitul@student.42berlin.de >       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/06 12:30:07 by spitul            #+#    #+#             */
/*   Updated: 2024/01/06 18:01:11 by spitul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_ptr(unsigned long long ptr)
{
	char	nb_char;
	int		count;

	count = 0;
	if (ptr >= 16)
	{
		count += ft_print_ptr(ptr / 16);
		count += ft_print_ptr(ptr % 16);
	}
	if (ptr < 10)
	{
		nb_char = ptr + 48;
		count += write(1, &nb_char, 1);
	}
	else if (ptr < 16 && ptr >= 10)
	{
		nb_char = ptr - 10 + 'a';
		count += write(1, &nb_char, 1);
	}
	return (count);
}

int	ft_put_ptr(unsigned long long ptr)
{
	if (!ptr)
	{
		write(1, "(nil)", 5);
		return (5);
	}
	else
	{
		write(1, "0x", 2);
		return (ft_print_ptr(ptr) + 2);
	}
}

/*#include <stdio.h>
int	main(void)
{
	int	n;
	int *p;

	//printf("length is %d\n", ft_put_ptr(78676675675)); 
	n = ft_put_ptr(0);
	p = 0;
	printf("\nadresse n: %p\n length adr %d\nadresse n %p", p, n, &n);
	return (0);
}*/