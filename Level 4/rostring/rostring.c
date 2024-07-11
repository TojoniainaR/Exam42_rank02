/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rostring.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: torandri <torandri@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 21:08:08 by torandri          #+#    #+#             */
/*   Updated: 2024/07/11 21:48:01 by torandri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_first_word(char *str)
{
	int	i;

	i = 0;
	while (str[i] == ' ' || str[i] == '\t')
		i++;
	while ((str[i] != ' ' && str[i] != '\t') && str[i] != '\0')
		write (1, &str[i++], 1);
}

int	ft_value(char *str)
{
	int	i;

	i = 0;
	while (str[i] == ' ' || str[i] == '\t')
		i++;
	while ((str[i] != ' ' && str[i] != '\t') && str[i] != '\0')
		i++;
	while (str[i] == ' ' || str[i] == '\t')
		i++;
	return (i);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	if (!str)
		return (0);
	while (str[i] != '\0')
		i++;
	return (i);
}

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
	int	len;
	int	end;

	if (ac >= 2)
	{
		i = ft_value(av[1]);
		len = ft_strlen(av[1]);
		end = end_str(av[1]);
		if (i >= len)
			return (ft_first_word(av[1]), write (1, "\n", 1), 0);
		while (i <= end)
		{
			if (av[1][i] == ' ' || av[1][i] == '\t')
			{
				while (av[1][i + 1] == ' ' || av[1][i + 1] == '\t')
					i++;
			}
			write (1, &av[1][i++], 1);
		}
		write (1, " ", 1);
		ft_first_word(av[1]);
	}
	write (1, "\n", 1);
	return (0);
}
