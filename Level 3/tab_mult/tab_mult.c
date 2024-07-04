#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nbr)
{
	if (nbr >= 10)
		ft_putnbr(nbr / 10);
	ft_putchar(nbr % 10 + '0');
}

int	ft_atoi(char *str)
{
	int	i;
	int	res;

	i = 0;
	res = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + str[i] - '0';
		i++;
	}
	return (res);
}

int	main(int ac, char *av[])
{
	int	i;
	int	atoii;
	int	result;

	if (ac == 2)
	{
		i = 1;
		atoii = ft_atoi(av[1]);
		while (i < 10)
		{
			ft_putnbr(i);
			write(1, " x ", 3);
			ft_putnbr(atoii);
			write(1, " = ", 3);
			result = i * atoii;
			ft_putnbr(result);
			ft_putchar('\n');
			i++;
		}
	}
	else
		ft_putchar('\n');
	return (0);
}
