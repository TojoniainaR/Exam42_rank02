/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: torandri <torandri@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 05:36:14 by torandri          #+#    #+#             */
/*   Updated: 2024/07/05 20:45:32 by torandri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		write (1, &str[i++], 1);
}

int	wdmatch(char *str1, char *str2)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str2[j] != '\0')
	{
		if (str1[i] == str2[j])
			i++;
		j++;
	}
	if (str2[j] == '\0' && str1[i] != '\0')
		return (0);
	return (1);
}

int	main(int ac, char *av[])
{
	if (ac == 3)
	{
		if (wdmatch(av[1], av[2]))
			ft_putstr(av[1]);
	}
	write (1, "\n", 1);
	return (0);
}
