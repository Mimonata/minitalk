/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spitul <spitul@student.42berlin.de >       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 18:47:08 by spitul            #+#    #+#             */
/*   Updated: 2023/12/18 16:56:16 by spitul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	size_t	n;

	if (s)
	{
		n = ft_strlen(s);
		write(fd, s, n);
		write(fd, "\n", 1);
	}
}

/*int	main(void)
{
	ft_putendl_fd("ding", 1);
	return (0);
}*/