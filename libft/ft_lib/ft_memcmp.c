/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spitul <spitul@student.42berlin.de >       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 17:54:56 by spitul            #+#    #+#             */
/*   Updated: 2023/12/17 16:03:24 by spitul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*str1;
	const unsigned char	*str2;
	size_t				i;

	str1 = (const unsigned char *)s1;
	str2 = (const unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (str1[i] == str2[i])
			i ++;
		else
			return (str1[i] - str2[i]);
	}
	return (0);
}

/*#include <string.h>
#include <stdio.h>

int     main(void)
{
	const unsigned char   s1[] = "fg";
	const unsigned char   s2[] = "fg";
	int r;
		
	r = ft_memcmp(s1, s2, 10);
	printf("meins %d\n", r);
	r = memcmp(s1, s2, 10);
	printf("seins %d\n", r);
	return (0);
}*/