/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: musacikg <musacikg@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 08:59:30 by musacikg          #+#    #+#             */
/*   Updated: 2023/08/03 10:18:01 by musacikg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int ac, char **av)
{
	int	i;
	int	j;

	i = 0;
	j = ac - 1;
	while (j > 0)
	{
		while (av[j][i] && j != 0)
		{
			ft_putchar(av[j][i]);
			i++;
		}
		j--;
		i = 0;
		ft_putchar('\n');
	}
	return (0);
}
