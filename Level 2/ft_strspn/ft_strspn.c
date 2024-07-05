/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strspn.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: torandri <torandri@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/30 15:49:03 by torandri          #+#    #+#             */
/*   Updated: 2024/07/04 05:13:00 by torandri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

size_t	ft_strspn(const char *s, const char *accept)
{
	size_t	i;
	size_t	j;
	size_t	to_ret;

	i = 0;
	to_ret = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (accept[j] == s[i])
				to_ret++;
			j++;
		}
		i++;
	}
	return (to_ret);
}

int	main(int ac, char *av[])
{
	if (ac == 3)
	{
		printf("%ld\n", ft_strspn(av[1], av[2]));
		printf("%ld", strspn(av[1], av[2]));
	}
	printf("\n");
	return (0);
}
