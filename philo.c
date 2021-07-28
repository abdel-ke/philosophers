/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdel-ke <abdel-ke@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/26 14:54:35 by abdel-ke          #+#    #+#             */
/*   Updated: 2021/07/28 19:10:20 by abdel-ke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

int	ft_error(char *msg, int ret)
{
	ft_putstr_fd(msg, 0);
	return (ret);
}

void	init(t_philo *philo)
{
	file = fopen("/dev/ttys001", "w");
	philo->args[0] = 1337;
}

int main(int ac, char **av)
{
	t_philo	philo;

	--ac;
	init(&philo);
	// if (ac != 4)
	// 	return (ft_error("Error Args1\n", 0));
	// else
	// {
	if (!check_args(&philo, av))
		return (ft_error("Error Args2\n", 0));
	// }
}
