/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_power_of_2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: torandri <torandri@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/30 15:49:12 by torandri          #+#    #+#             */
/*   Updated: 2024/07/05 20:53:23 by torandri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_power_of_2(unsigned int n)
{
	int	i;

	i = 2;
	if (n == 1)
		return (1);
	else
	{
		while (i <= n / 2)
		{
			if (i * i == n)
				return (1);
			i++;
		}
	}
	return (0);
}
