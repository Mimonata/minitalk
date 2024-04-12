/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spitul <spitul@student.42berlin.de >       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 17:49:23 by spitul            #+#    #+#             */
/*   Updated: 2023/12/17 13:54:33 by spitul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	s_l;
	char	*subs;
	size_t	i;
	size_t	j;

	j = 0;
	if (!s)
		return (NULL);
	s_l = ft_strlen(s);
	if (start > s_l)
		len = 0;
	else if (start + len > s_l)
		len = (s_l - start);
	subs = (char *)malloc(len + 1);
	if (subs == NULL)
		return (NULL);
	i = start;
	while (i < (start + len) && (s[i] != '\0'))
		subs[j++] = s[i++];
	subs[j] = '\0';
	return (subs);
}

/*#include <stdio.h>
int main(void)
{
	char    *sub;
	const char    s[] = "lorem ipsum dolor sit amet";
	sub = ft_substr(s, 10, 20);
	printf("the result %s\n", sub);
	return (0);
}*/