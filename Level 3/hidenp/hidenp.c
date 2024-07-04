/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hidenp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: torandri <torandri@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 10:07:44 by torandri          #+#    #+#             */
/*   Updated: 2024/06/06 10:19:33 by torandri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int ac, char *av[])
{
	int	i;
	int j;

	if (ac == 3)
	{
		i = 0;
		j = 0;
		while (av[2][i] != '\0')
		{
			if (av[1][j] == av[2][i])
				j++;
			i++;
		}
		if (av[1][j] == '\0')
		{
			write(1, "1\n", 2);
			return (1);
		}
		else
		{
			write(1, "0\n", 2);
			return (0);
		}
	}
	else
		write(1, "\n", 1);
	return (0);
}
