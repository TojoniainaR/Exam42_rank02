/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: torandri <torandri@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/30 15:48:59 by torandri          #+#    #+#             */
/*   Updated: 2024/07/03 21:02:43 by torandri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrev(char *str)
{
	int		i;
	int		length;
	char	tmp;

	i = 0;
	length = 0;
	tmp = '\0';
	while (str[length] != '\0')
		length++;
	while (i < length / 2)
	{
		tmp = str[i];
		str[i] = str[length - 1 - i];
		str[length - 1 - i] = tmp;
		i++;
	}
	return (str);
}
