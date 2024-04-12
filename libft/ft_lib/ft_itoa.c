/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spitul <spitul@student.42berlin.de >       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 17:47:14 by spitul            #+#    #+#             */
/*   Updated: 2023/12/20 13:49:40 by spitul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	get_length(int n)
{
	int		len;

	if (n == 0)
		return (2);
	len = 0;
	if (n < 0)
	{
		len = 1;
		n = n * (-1);
	}
	while (n > 0)
	{
		len ++;
		n = n / 10;
	}
	return (len + 1);
}

static char	*fill_string(char *res, int n, int len)
{
	char	c_n;
	int		start;
	int		i;

	start = 0;
	i = len - 1;
	res[i] = '\0';
	i --;
	if (n < 0)
	{
		res[0] = '-';
		start = 1;
		n = n * (-1);
	}
	while (i >= start)
	{
		c_n = (n % 10) + '0';
		res[i] = c_n;
		n = n / 10;
		i --;
	}
	return (res);
}

char	*ft_itoa(int n)
{
	char	*res;
	int		len;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	len = get_length(n);
	res = malloc(sizeof(char) * len);
	if (!res)
		return (NULL);
	else
	{
		fill_string(res, n, len);
		return (res);
	}
}

/*#include <stdio.h>
int	main(void)
{
	char	*b;
	b = ft_itoa(0);
	printf("this is b %s", b);
	free(b);
	return (0);
}*/