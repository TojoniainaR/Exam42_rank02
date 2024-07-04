/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: torandri <torandri@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 05:52:42 by torandri          #+#    #+#             */
/*   Updated: 2024/07/04 12:03:46 by torandri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

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

void	ft_putnbr(int n)
{
	if (n >= 10)
		ft_putnbr(n / 10);
	ft_putchar(n % 10 + '0');
}

int	main(int ac, char *av[])
{
	int	i;
	int	sum;
	int	argv;
	
	if (ac == 2)
	{
		i = 2;
		sum = 0;
		argv = ft_atoi(av[1]);
		while (i <= argv)
		{
			if (argv % i != 0)
				sum += i;
			i++;
		}
		ft_putnbr(sum);
	}
	else
		write (1, "0", 1);
	write (1, "\n", 1);
	return (0);
}
