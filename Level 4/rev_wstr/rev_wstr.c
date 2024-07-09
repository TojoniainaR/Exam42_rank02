/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_wstr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: torandri <torandri@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 13:09:43 by torandri          #+#    #+#             */
/*   Updated: 2024/07/09 14:13:20 by torandri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str, int begin, int end)
{
	int	i;

	i = begin;
	while (i <= end)
		write (1, &str[i++], 1);
}

int	main(int ac, char *av[])
{
	int	begin;
	int	end;

	if (ac == 2)
	{
		begin = 0;
		end = 0;
		while (av[1][end] != '\0')
			end++;
		end -= 1;
		begin = end;
		while (begin >= 0)
		{
			while ((av[1][begin] != ' ' && av[1][begin] != '\t') \
			&& av[1][begin] != '\0')
				begin--;
			ft_putstr(av[1], begin + 1, end);
			end = begin - 1;
			begin -= 1;
			if (end > 0)
				write (1, " ", 1);
		}
	}
	write (1, "\n", 1);
	return (0);
}
