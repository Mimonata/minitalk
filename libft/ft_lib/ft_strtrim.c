/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spitul <spitul@student.42berlin.de >       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 10:14:35 by spitul            #+#    #+#             */
/*   Updated: 2023/12/20 13:49:24 by spitul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*s;
	size_t	start;
	size_t	end;

	if (!s1)
		return (NULL);
	if (!set || !ft_strlen(set) || !ft_strlen(s1))
		return (ft_strdup(s1));
	start = 0;
	end = ft_strlen(s1) - 1;
	while ((start <= end) && (ft_strchr(set, s1[start]) != NULL))
		start ++;
	if (start > end)
		return (ft_strdup(s1 + end + 1));
	while ((end >= start) && (ft_strchr(set, s1[end])))
		end --;
	s = (char *)malloc ((end - start) + 2);
	if (!s)
		return (NULL);
	ft_strlcpy(s, &s1[start], (end - start +2));
	return (s);
}

/*#include <stdio.h>
int	main(void)
{
	char	*s_trimmed;
	const char	s[] = "  \t \t \n io  \n\n\n\t";

	s_trimmed = ft_strtrim(s, " \n\t");
	ft_putstr_fd(s_trimmed, 1);
	//printf("the result %s\n", s_trimmed);
	free(s_trimmed);
	return (0);
}*/