/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spitul <spitul@student.42berlin.de >       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 17:48:54 by spitul            #+#    #+#             */
/*   Updated: 2023/12/18 17:00:30 by spitul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char		*s;
	int			i;
	int			j;
	size_t		len;
	size_t		len2;

	i = 0;
	j = 0;
	if ((!s1) || (!s2))
		return (NULL);
	len = ft_strlen(s1);
	len2 = ft_strlen(s2);
	len += len2;
	s = (char *)malloc (len + 1);
	if (!s)
		return (NULL);
	while (s1[i] != '\0')
	{
		s[i] = s1[i];
		i ++;
	}
	while (s2[j] != '\0')
		s[i++] = s2[j++];
	s[i] = '\0';
	return (s);
}

/*#include <stdio.h>
int	main(void)
{
	char const s1[] = "ghjghj";
	char const s2[] = " how this works";
	char	*s;

	s = ft_strjoin(s1, s2);
	printf("%s", s);
	return (0);
}*/