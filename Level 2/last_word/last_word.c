/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: torandri <torandri@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/30 15:49:14 by torandri          #+#    #+#             */
/*   Updated: 2024/07/04 05:35:41 by torandri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int ac, char *av[])
{
	int	i;
	int	end;

	if (ac == 2)
	{
		i = 0;
		while (av[1][i] != '\0')
			i++;
		i -= 1;
		if (av[1][i] == ' ' || av[1][i] == '\t')
		{
			while (av[1][i] == ' ' || av[1][i] == '\t')
				i--;
		}
		end = i;
		while (av[1][i] != ' ')
			i--;
		i++;
		while (i <= end)
			write (1, &av[1][i++], 1);
	}
	write (1, "\n", 1);
	return (0);
}
