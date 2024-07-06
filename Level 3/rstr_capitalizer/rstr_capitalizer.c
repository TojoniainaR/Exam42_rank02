/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rstr_capitalizer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: torandri <torandri@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 22:07:00 by torandri          #+#    #+#             */
/*   Updated: 2024/07/06 23:33:57 by torandri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	end_str(char *str)
{
	int	end;

	end = 0;
	while (str[end] != '\0')
		end++;
	return (--end);
}

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
	i -= 1;
	if (str[i] >= 'a' && str[i] <= 'z')
		str[i] -= 32;
}

int	main(int ac, char *av[])
{
	int	i;
	int	end;
	int	all_arg;

	all_arg = 1;
	while (all_arg < ac)
	{
		i = 0;
		end = end_str(av[all_arg]);
		ft_to_lower(av[all_arg]);
		while (av[all_arg][i] == ' ' || av[all_arg][i] == '\t')
			write (1, &av[all_arg][i++], 1);
		while (i <= end)
		{
			write (1, &av[all_arg][i++], 1);
			if ((av[all_arg][i] >= 'a' && av[all_arg][i] <= 'z') \
			&& (av[all_arg][i + 1] == ' ' || av[all_arg][i + 1] == '\t'))
				av[all_arg][i] -= 32;
		}
		write (1, "\n", 1);
		all_arg++;
	}
	return (0);
}
