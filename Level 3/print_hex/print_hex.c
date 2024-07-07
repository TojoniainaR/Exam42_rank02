/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: torandri <torandri@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/07 14:51:39 by torandri          #+#    #+#             */
/*   Updated: 2024/07/07 15:05:16 by torandri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_atoi(char *str)
{
	int	i;
	int	res;

	i = 0;
	res = 0;
	while (str[i] != '\0' && (str[i] >= '0' && str[i] <= '9'))
		res = res * 10 + str[i++] - '0';
	return (res);
}

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	print_hex(int nbr)
{
	char	*digits;

	digits = "0123456789abcdef";
	if (nbr >= 16)
		print_hex(nbr / 16);
	ft_putchar(digits[nbr % 16]);
}

int	main(int ac, char *av[])
{
	int	argv;

	if (ac == 2)
	{
		argv = ft_atoi(av[1]);
		print_hex(argv);
	}
	ft_putchar('\n');
	return (0);
}
