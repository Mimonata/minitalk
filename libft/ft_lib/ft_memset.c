/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spitul <spitul@student.42berlin.de >       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 14:37:58 by spitul            #+#    #+#             */
/*   Updated: 2023/12/17 13:49:23 by spitul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*str;

	str = (unsigned char *)s;
	while (n > 0)
	{
		*str = (unsigned char)c;
		str ++;
		n --;
	}
	return (s);
}

/*
void    ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}

#include <string.h>
#include <stdio.h>
int main(void)
{
	unsigned char s[20];
	unsigned char r[20];
	int c,d;
	size_t n,m;
	unsigned char *p;

	c = 'f';
	d = 'a';
	n = 1;
	m = 1;
	printf("meins: %p\n", p=ft_memset(s,c,n));
	printf("das ist jetzt der string s: %s\n", s);
	printf("real: %p\n", p=memset(r,c,n));
	printf("das ist der string r mit memset: %s\n", s);
	// ft_bzero(s,n);
	// printf("mein bzero s: %s\n", s);
	return(0);
}*/ 