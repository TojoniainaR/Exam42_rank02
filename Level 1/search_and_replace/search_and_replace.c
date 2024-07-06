/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: torandri <torandri@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 09:39:10 by torandri          #+#    #+#             */
/*   Updated: 2024/07/06 23:40:37 by torandri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int	main(int ac, char *av[])
{
	int	i;

	if (ac == 4)
	{
		i = 0;
		if (av[2][1] != '\0')
		{
			write(1, "\n", 1);
			exit (0);
		}
		if (av[3][1] != '\0')
		{
			write (1, "\n", 1);
			exit (0);
		}
		while (av[1][i] != '\0')
		{
			if (av[1][i] == av[2][0])
				av[1][i] = av[3][0];
			write (1, &av[1][i++], 1);
		}
	}
	write (1, "\n", 1);
	return (0);
}
