/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tafocked <tafocked@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 17:06:17 by tafocked          #+#    #+#             */
/*   Updated: 2024/01/11 20:53:34 by tafocked         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	error(char *str)
{
	if (str)
		free(str);
	ft_putstr_fd("Couldn't reach server\n", 2);
	exit(1);
}

int	send_null(int pid, char *str, int *s_flag)
{
	static int	i = 0;

	if (i++ != 8)
	{
		*s_flag = 1;
		if (kill(pid, SIGUSR1) == -1)
			error(str);
		return (0);
	}
	free(str);
	*s_flag = 0;
	return (1);
}

int	send_bit(int pid, char *str)
{
	static char	*s_str = 0;
	static int	s_pid = 0;
	static int	s_bits = -1;
	static int	s_flag = 0;

	if (str)
		s_str = ft_strdup(str);
	if (!s_str)
		error(0);
	if (pid)
		s_pid = pid;
	if (s_flag == 0 && s_str[++s_bits / 8])
	{
		if (s_str[s_bits / 8] & (0x80 >> (s_bits % 8)))
			s_flag = kill(s_pid, SIGUSR2);
		else 
			s_flag = kill(s_pid, SIGUSR1);
		if (s_flag != 0)
			error(s_str);
		return (0);
	}
	if (!send_null(s_pid, s_str, &s_flag))
		return (0);
	return (1);
}

void	sigusr_handler(int signum)
{
	if (signum == SIGUSR1)
	{
		if (send_bit(0, 0))
			exit(0);
	}
	else if (signum == SIGUSR2)
	{
		ft_putstr_fd("Server error\n", 2);
		exit(1);
	}
}

int	main(int argc, char **argv)
{
	if (argc != 3 || !ft_str_isint(argv[1]))
	{
		ft_printf("invalid arguments !\n[./client <PID> <STR>]\n");
		exit(1);
	}
	signal(SIGUSR1, sigusr_handler);
	signal(SIGUSR2, sigusr_handler);
	send_bit(ft_atoi(argv[1]), argv[2]);
	while (1)
		pause();
}
