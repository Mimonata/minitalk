/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spitul <spitul@student.42berlin.de >       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 13:15:53 by spitul            #+#    #+#             */
/*   Updated: 2023/12/17 12:13:16 by spitul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	dlen;
	size_t	slen;
	size_t	r;

	dlen = ft_strlen(dst);
	slen = ft_strlen(src);
	i = dlen;
	j = 0;
	if (dst == NULL)
		return (0);
	if (!size)
		return (ft_strlen(src));
	if (i > size)
	{
		r = size + ft_strlen(src);
		return (r);
	}
	while ((src[j] != '\0') && (i < (size - 1)))
		dst[i++] = src[j++];
	dst[i] = '\0';
	return (dlen + slen);
}

/*#include <stdio.h>

int     main(void)
{
	char    dst[] = "aapqrs\0tuvwxyz";
	char    dst2[] = "aapqrs\0tuvwxyz";
	const char src[] = "abcde";
	size_t	n, n1;

		(dst, "aapqrs\0tuvwxyz");
		(dst2, "aapqrs\0tuvwxyz");
		("\n%d\n", i);
		n = ft_strlcat(dst, src, i);
		printf("my f [%s]\n", dst);
		printf("meine Zahl %zu\n", n);
		n1 = (dst2, src, i);
		printf("their f [%s] %zu\n", dst2, n);
	return (0);
}*/