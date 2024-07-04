/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tojoniaina <torandri@student.42antananari  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 12:40:27 by tojoniaina        #+#    #+#             */
/*   Updated: 2024/06/04 12:48:44 by tojoniaina       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	count_size(long n)
{
	size_t	size;

	size = 0;
	if (n < 0)
	{
		size++;
		n *= -1;
	}
	if (n == 0)
		size++;
	while (n)
	{
		n /= 10;
		size++;
	}
	return (size);
}

char	*ft_itoa(int n)
{
	size_t	i;
	size_t	size;
	long	nb;
	char	*result;

	nb = (long)n;
	size = count_size(nb);
	result = (char *)malloc(sizeof(char) * (size + 1));
	if (!result)
		return (NULL);
    	i = 0;
	if (nb < 0)
	{
		result[0] = '-';
		nb *= -1;
		i = 1;
	}
	result[size] = '\0';
	while (size > i)
	{
		result[size - 1] = ((nb % 10) + '0');
		nb /= 10;
		size--;
	}
	return (result);
}
