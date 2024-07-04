/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: torandri <torandri@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 05:36:14 by torandri          #+#    #+#             */
/*   Updated: 2024/07/04 05:48:23 by torandri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	wdmatch(char *str1, char *str2)
{
	int	i;
	int	j;
	int	flag;
	
	i = 0;
	flag = 0;
	while (str1[i] != '\0')
	{
		j = 0;
		while (str2[j] != '\0')
		{
			if (str2[j] == str1[i])
				flag = 1;
			j++;
		}
		if (flag == 0)
			return (0);
		i++;
	}
	return (1);
}

int	main(int ac, char *av[])
{
	int	i;
	
	if (ac == 3)
	{
		if (wdmatch(av[1], av[2]) == 1)
		{
			i = 0;
			while (av[1][i] != '\0')
				write (1, &av[1][i++], 1);
		}
	}
	write (1, "\n", 1);
	return (0);
}
