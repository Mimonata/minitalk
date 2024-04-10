/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spitul <spitul@student.42berlin.de >       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/24 12:46:00 by spitul            #+#    #+#             */
/*   Updated: 2024/04/06 12:10:33 by spitul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"
#include <signal.h>

static void	sig_handler(int sig)
{
	static int	bit;
	static int	w;

	if (sig == SIGUSR1)
	{
		w |= (0x01 << bit);
	}
	bit ++;
	if (bit == 8)
	{
		ft_putchar_fd(w, 1);
		bit = 0;
		w = 0;
	}
}

int	main(int argc, char **argv)
{
	pid_t	pid;

	(void)argv;
	if (argc != 1)
		write(1, "no input expected\n", 18);
	pid = getpid();
	ft_putnbr_fd(pid, 1);
	write(1, "\n", 1);
	signal(SIGUSR1, sig_handler);
	signal(SIGUSR2, sig_handler);
	while (1)
	{
		pause ();
	}
	return (0);
}
