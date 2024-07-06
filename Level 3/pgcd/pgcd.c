/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pgcd.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: torandri <torandri@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 12:27:38 by tojoniaina        #+#    #+#             */
/*   Updated: 2024/07/06 21:42:31 by torandri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	main(int ac, char *av[])
{
	int	nbr1;
	int	nbr2;

	if (ac == 3)
	{
		nbr1 = atoi(av[1]);
		nbr2 = atoi(av[2]);
		if (nbr1 > 0 && nbr2 > 0)
		{
			while (nbr1 != nbr2)
			{
				if (nbr1 > nbr2)
					nbr1 -= nbr2;
				else
					nbr2 -= nbr1;
			}
			printf("%d", nbr1);
		}
	}
	printf("\n");
	return (0);
}
