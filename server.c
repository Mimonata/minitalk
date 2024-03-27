/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spitul <spitul@student.42berlin.de >       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/24 12:46:00 by spitul            #+#    #+#             */
/*   Updated: 2024/03/27 18:37:47 by spitul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"
#include <signal.h>

void	sig_handler(int sig)
{
	
}

int	main(int argc, char **argv)
{
	pid_t	pid;
	struct sigaction	sa;
	
	sa.sa_handler = sig_handler;
	sigemptyset(&sa.sa_mask);
	sa.sa_flags = 0;	
	(void *)argv;
	if (argc != 1)
		write(1, "no input expected\n", 18);
	pid = getpid();
	ft_putnbr_fd(pid, 1);
	
}