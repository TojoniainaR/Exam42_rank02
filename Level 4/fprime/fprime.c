/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fprime.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: torandri <torandri@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 16:04:07 by torandri          #+#    #+#             */
/*   Updated: 2024/07/09 16:04:13 by torandri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_is_prime(int nbr)
{
	int	i;

	i = 2;
	if (nbr < 2)
		return (0);
	while (i <= nbr / 2)
	{
		if (nbr % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	main(int ac, char *av[])
{
	int	i;
	int	argv;

	if (ac == 2)
	{
		i = 1;
		argv = atoi(av[1]);
		while (i <= argv)
		{
			if (ft_is_prime(i) == 1)
			{
				if (argv % i == 0)
				{
					printf("%d", i);
					if (i != argv)
						printf("*");
					argv /= i;
					i = 1;
				}
			}
			i++;
		}
	}
	printf("\n");
	return (0);
}