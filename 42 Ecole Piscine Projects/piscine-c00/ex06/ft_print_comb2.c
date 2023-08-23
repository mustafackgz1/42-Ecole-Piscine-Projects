/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: musacikg <musacikg@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 19:32:06 by musacikg          #+#    #+#             */
/*   Updated: 2023/07/16 06:57:06 by musacikg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char a)
{
	write(1, &a, 1);
}

void	ft_print_comb2(void)
{
	int	x;
	int	y;

	x = 0;
	while (x < 100)
	{
		y = x + 1;
		while (y < 100)
		{
			ft_putchar(x / 10 + 48);
			ft_putchar(x % 10 + 48);
			ft_putchar(' ');
			ft_putchar(y / 10 + 48);
			ft_putchar(y % 10 + 48);
			if (x != 98)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			y++;
		}
		x++;
	}
}
