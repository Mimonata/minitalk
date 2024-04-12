/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spitul <spitul@student.42berlin.de >       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 17:36:30 by spitul            #+#    #+#             */
/*   Updated: 2023/12/17 15:56:31 by spitul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*de;
	unsigned char	*sr;
	size_t			i;

	if (!dest && !src)
		return (NULL);
	de = (unsigned char *)dest;
	i = 0;
	sr = (unsigned char *)src;
	while (i < n)
	{
		de[i] = sr[i];
		i++;
	}
	return (dest);
}

/*#include <string.h>
#include <unistd.h>

int     main(void)
{
	unsigned char   src[] = "\0xw\0vu\0\0tsr";
	char   *dest[11];
	char   *dest2[11];
	
	ft_memcpy(dest, src, 11);
	write(1, dest, ft_strlen((const char *)dest));
	write(1, "\n", 1);
	memcpy(dest2, src, 11);
	write(1, dest2, ft_strlen((const char *)dest2));
	return (0);
}*/