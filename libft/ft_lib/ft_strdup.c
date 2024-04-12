/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spitul <spitul@student.42berlin.de >       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 17:48:11 by spitul            #+#    #+#             */
/*   Updated: 2023/12/17 15:23:05 by spitul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*ptr;
	int		i;
	int		len;

	i = 0;
	len = 0;
	while (s[len] != '\0')
		len ++;
	ptr = (char *)malloc((len +1) * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		ptr[i] = s[i];
		i ++;
	}
	ptr[i] = '\0';
	return (ptr);
}

/*#include <stdio.h>
int main()
{
	const char s[] = "hjrty";
	char    *r;

	r = ft_strdup(s);
	printf("mein strdup %c\n", r[0]);
	// r = (s);
	// ("real strdup %p\n", r);
	return(0);
}*/
