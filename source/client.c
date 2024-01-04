/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tafocked <tafocked@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 17:06:17 by tafocked          #+#    #+#             */
/*   Updated: 2024/01/04 22:01:44 by tafocked         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	ft_sendchar(int pid, char c)
{
	int	i;
	int err;

	err = 0;
	i = 7;
	while (i)
	{
		if (c & 64)
		{
			ft_printf("1");
			err = kill(pid, SIGUSR2);
		}
		else
		{
			ft_printf("0");
			err = kill(pid, SIGUSR1);
		}
		if (err)
			ft_printf("error");
		c <<= 1;
		i--;
		usleep(1);
	}
}

int	main(int argc, char **argv)
{
	int	i;

	if (argc != 3 || !ft_str_isint(argv[1]))
	{
		ft_printf("invalid arguments !\n[./client <PID> <STR>]\n");
		exit(1);
	}
	i = 0;
	while (argv[2][i])
	{
		ft_printf("%c\t", argv[2][i]);
		ft_sendchar(ft_atoi(argv[1]), argv[2][i]);
		ft_printf("\n");
		i++;
	}
	return (0);
}
