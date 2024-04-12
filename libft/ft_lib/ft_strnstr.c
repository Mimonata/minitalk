/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spitul <spitul@student.42berlin.de >       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 19:25:20 by spitul            #+#    #+#             */
/*   Updated: 2023/12/17 15:39:18 by spitul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	char	*b;

	b = (char *)big;
	i = 0;
	j = 0;
	if (little[j] == '\0')
		return (b);
	while ((i < len) && (b[i] != '\0'))
	{
		j = 0;
		while ((little[j] != '\0') && (b[i + j] == little[j]) && 
			((i + j) < len))
			j ++;
		if (little[j] == '\0')
			return (&b[i]);
		i ++;
	}
	return (NULL);
}

/*#include <stdio.h>
#include <string.h>

int     main(void)
{
	const char b[] = "fghfg";
	const char l[] = "j";
	
	printf("meins %p\n", ft_strnstr(b, l, 9));
	printf("hier ist big %p\n", b);
	return (0);
}*/