/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   epur_str.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: torandri <torandri@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 19:44:45 by torandri          #+#    #+#             */
/*   Updated: 2024/07/05 19:52:15 by torandri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	end_str(char *str)
{
	int	end;

	end = 0;
	while (str[end] != '\0')
		end++;
	end -= 1;
	while (str[end] == ' ' || str[end] == '\t')
		end--;
	return (end);
}

int	main(int ac, char *av[])
{
	int	i;
	int	end;

	if (ac == 2)
	{
		i = 0;
		end = end_str(av[1]);
		while (av[1][i] == ' ' || av[1][i] == '\t')
			i++;
		while (i <= end)
		{
			write (1, &av[1][i], 1);
			if (av[1][i] == ' ' || av[1][i] == '\t')
			{
				while (av[1][i] == ' ' || av[1][i] == '\t')
					i++;
				i -= 1;
			}
			i++;
		}
	}
	write (1, "\n", 1);
	return (0);
}
