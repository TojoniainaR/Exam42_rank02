/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: torandri <torandri@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 15:13:52 by torandri          #+#    #+#             */
/*   Updated: 2024/07/05 20:51:15 by torandri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	max(int *tab, unsigned int len)
{
	unsigned int	i;
	int				tmp;

	i = 0;
	tmp = 0;
	while (i < len)
	{
		if (tmp < tab[i])
			tmp = tab[i];
		i++;
	}
	return (tmp);
}
