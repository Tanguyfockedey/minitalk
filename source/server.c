/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tafocked <tafocked@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 17:06:19 by tafocked          #+#    #+#             */
/*   Updated: 2024/01/11 20:32:23 by tafocked         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	error(int pid, char *str)
{
	if (str)
		free(str);
	ft_putstr_fd("Server coundn't reply to client\n", 2);
	kill(pid, SIGUSR2);
	exit(1);
}

char	*print_string(char *message)
{
	ft_putstr_fd(message, 1);
	free(message);
	return (0);
}

void	sigusr_handler(int signum, siginfo_t *info, void *context)
{
	static char	s_char = 0xFF;
	static int	s_bits = 0;
	static int	s_pid = 0;
	static char	*s_str = 0;

	(void)context;
	if (info->si_pid)
		s_pid = info->si_pid;
	if (signum == SIGUSR1)
		s_char ^= 0x80 >> s_bits;
	else if (signum == SIGUSR2)
		s_char |= 0x80 >> s_bits;
	if (++s_bits == 8)
	{
		if (s_char)
			s_str = ft_straddc(s_str, s_char);
		else
			s_str = print_string(s_str);
		s_bits = 0;
		s_char = 0xFF;
	}
	if (kill(s_pid, SIGUSR1) == -1)
		error(s_pid, s_str);
}

int	main(void)
{
	struct sigaction	sa_signal;

	sa_signal.sa_handler = 0;
	sa_signal.sa_flags = SA_SIGINFO;
	sa_signal.sa_sigaction = sigusr_handler;
	sigaction(SIGUSR1, &sa_signal, 0);
	sigaction(SIGUSR2, &sa_signal, 0);
	ft_printf("PID: %d\n", getpid());
	while (1)
		pause();
}
