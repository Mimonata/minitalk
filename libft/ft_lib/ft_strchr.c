/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spitul <spitul@student.42berlin.de >       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 16:38:47 by spitul            #+#    #+#             */
/*   Updated: 2023/12/15 19:10:35 by spitul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*str;

	str = (char *)s;
	while (*str && (*str != (char)c))
		str ++;
	if (*str == (char)c)
		return (str);
	return (NULL);
}

/*#include <stdio.h>
#include <string.h>

int     main(void)
{
	const char s[] = "";
	
	 ("meins %p\n", ft_strchr(s, '\0'));
	 ("theirs %p\n", (s, '\0'));
	return (0);
}*/ 