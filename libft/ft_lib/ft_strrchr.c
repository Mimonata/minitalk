/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spitul <spitul@student.42berlin.de >       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 16:58:54 by spitul            #+#    #+#             */
/*   Updated: 2023/12/18 17:21:04 by spitul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t		len;
	char		*str;

	str = (char *)s;
	len = ft_strlen(str);
	while (0 <= (int)len)
	{
		if (str[len] == (char)c)
			return (&str[len]);
		len --;
	}
	return (0);
}

/*#include <stdio.h>
#include <string.h>

int     main(void)
{
	const char s[] = "123456";
	
	 ("meins %p\n", ft_strrchr(s, '\0'));
	 ("theirs %p\n", (s, '\0'));
	return (0);
}*/
