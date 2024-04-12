/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spitul <spitul@student.42berlin.de >       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 18:13:48 by spitul            #+#    #+#             */
/*   Updated: 2023/12/17 14:49:44 by spitul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*s;
	unsigned char	*d;

	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	if (d == s)
		return (dest);
	if (d <= s)
	{
		while (n--)
			*d++ = *s++;
	}
	else if (d > s)
	{
		d += n - 1;
		s += n - 1;
		while (n--)
			*d-- = *s--;
	}
	return (dest);
}

/*#include <string.h>
#include <stdio.h>
int	main(void)
{
	char	s[] = "";
	char	d[] = "";
	char	s1[] = "";
	char	d1[] = "";

	printf("das ist d vor memm: %s\n und d1 vor memm: %s\n", d, d1);
	ft_memmove(d, s, 1);	
	printf("ft_memmove did this: %s\n", (char *)d);
	memmove(d1, s1, 1);
	printf("memmove did this: %s\n", d1);
	return (0);
}*/