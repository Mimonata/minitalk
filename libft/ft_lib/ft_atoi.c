/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spitul <spitul@student.42berlin.de >       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 15:08:13 by spitul            #+#    #+#             */
/*   Updated: 2023/12/17 14:52:12 by spitul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	i;
	int	s;
	int	r;

	i = 0;
	s = 1;
	r = 0;
	while (((nptr[i] >= 9) && (nptr[i] <= 13)) || (nptr[i] == 32))
		i ++;
	if (nptr[i] == '-')
	{
		s = -1;
		i ++;
	}
	else if (nptr[i] == '+')
		i ++;
	while (((nptr[i] >= '0') && (nptr[i] <= '9')) && (nptr[i]))
	{
		r = ((r * 10) + (nptr[i] - 48));
		i ++;
	}
	return (r * s);
}

/*#include <stdio.h>
#include <stdlib.h>

int     main(void)
{
    const char b[] = "\b  +2147647";
    int r;

    r = ft_atoi(b);
    printf("meins %d\n", r);
    r = atoi(b);
    printf("their %d\n", r);
    return (0);
}*/