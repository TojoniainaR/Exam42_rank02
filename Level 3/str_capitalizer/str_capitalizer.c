/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_capitalizer.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: torandri <torandri@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 20:28:58 by torandri          #+#    #+#             */
/*   Updated: 2024/07/06 21:30:41 by torandri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_to_lower(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
}

int	main(int ac, char *av[])
{
	int	i;
	int	all_arg;

	all_arg = 1;
	while (all_arg < ac)
	{
		i = 0;
		ft_to_lower(av[all_arg]);
		while (av[all_arg][i] == ' ' || av[all_arg][i] == '\t')
			write (1, &av[all_arg][i++], 1);
		if (av[all_arg][i] >= 'a' && av[all_arg][i] <= 'z')
			av[all_arg][i] -= 32;
		while (av[all_arg][i] != '\0')
		{
			write (1, &av[all_arg][i++], 1);
			if ((av[all_arg][i] == ' ' || av[all_arg][i] == '\t') \
			&& (av[all_arg][i + 1] >= 'a' && av[all_arg][i + 1] <= 'z'))
				av[all_arg][i + 1] -= 32;
		}
		write (1, "\n", 1);
		all_arg++;
	}
	return (0);
}
