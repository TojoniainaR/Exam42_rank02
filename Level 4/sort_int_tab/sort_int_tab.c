/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_int_tab.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: torandri <torandri@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 21:35:50 by torandri          #+#    #+#             */
/*   Updated: 2024/07/11 21:58:43 by torandri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	sort_int_tab(int *tab, unsigned int size)
{
	unsigned int	i;
	int				tmp;

	i = 0;
	while (i < size)
	{
		if (tab[i] > tab[i + 1])
		{
			tmp = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = tmp;
			i = 0;
		}
		else
			i++;
	}
}

#include <stdio.h>
int	main(void)
{
	int	tab[5];
	int	size;

	tab[0] = 15;
	tab[1] = 45;
	tab[2] = 26;
	tab[3] = 34;
	tab[4] = 20;
	tab[5] = 34;
	size = 5;
	sort_int_tab(tab, size);
	int	i = 0;
	while (i <= size)
		printf("%d\n", tab[i++]);
	return (0);
}
