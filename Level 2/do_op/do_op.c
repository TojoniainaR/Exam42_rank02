/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: torandri <torandri@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/29 20:40:05 by torandri          #+#    #+#             */
/*   Updated: 2024/06/30 14:56:45 by torandri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	main(int ac, char *av[])
{
	int	i;
	int	av_1;
	int	av_3;

	if (ac == 4)
	{
		i = 0;
		av_1 = atoi(av[1]);
		av_3 = atoi(av[3]);
		if (av[2][0] == '+')
			printf("%d", av_1 + av_3);
		else if (av[2][0] == '-')
			printf("%d", av_1 - av_3);
		else if (av[2][0] == '*')
			printf("%d", av_1 * av_3);
		else if (av[2][0] == '/')
			printf("%d", av_1 / av_3);
		else if (av[2][0] == '%')
			printf("%d", av_1 % av_3);
	}
	printf("\n");
	return (0);
}
