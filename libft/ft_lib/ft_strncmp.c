/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spitul <spitul@student.42berlin.de >       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 17:06:25 by spitul            #+#    #+#             */
/*   Updated: 2023/12/18 16:30:57 by spitul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (!n)
		return (0);
	while ((i < (n - 1) && (s1[i] != '\0') && 
			(s2[i] != '\0') && (s1[i] == s2[i])))
		i ++;
	return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
}

/*#include <stdio.h>
#include <string.h>

int     main(void)
{
	const char s1[] = "abcdefgh";
	const char s2[] = "abcd uyttt";
	
	printf("meins %d\n", ft_strncmp(s1, s2, 10));
	printf("theirs %d\n", ft_strncmp(s1, s2, 10));
	return (0);
}*/
