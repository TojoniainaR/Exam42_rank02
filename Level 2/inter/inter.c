/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: torandri <torandri@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/30 15:49:05 by torandri          #+#    #+#             */
/*   Updated: 2024/07/11 13:29:19 by torandri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	check_double(char *str, char c)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}

void	inter(char *str1, char *str2)
{
	int		i;
	int		j;
	char	seen[128];

	i = 0;
	while (i < 128)
		seen[i++] = 0;
	i = 0;
	j = 0;
	while (str1[i] != '\0')
	{
		if (check_double(str2, str1[i]) && !check_double(seen, str1[i]))
		{
			write(1, &str1[i], 1);
			seen[j] = str1[i];
			j++;
		}
		i++;
	}
}

int	main(int ac, char *av[])
{
	if (ac == 3)
		inter(av[1], av[2]);
	write(1, "\n", 1);
	return (0);
}
