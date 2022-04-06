/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agalall <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 17:37:34 by agalall           #+#    #+#             */
/*   Updated: 2022/03/25 09:41:37 by agalall          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/minitalk.h"

t_data	g_g;

void	reset_data(void)
{
	g_g.i = 0;
	g_g.x = 0;
}

void	handler(int sig)
{
	if (sig == SIGUSR2)
		sig = 1;
	else
		sig = 0;
	g_g.x = g_g.x << 1 | sig;
	g_g.i++;
	if (g_g.i == 8)
	{
		if (g_g.x == '\0')
			write(1, "\n", 1);
		else
			write(1, &g_g.x, 1);
		reset_data();
	}
}

int	main(void)
{
	printf("PID is    %d\n", getpid());
	reset_data();
	signal(SIGUSR1, &handler);
	signal(SIGUSR2, &handler);
	while (1)
		sleep(1);
}
