/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: musacikg <musacikg@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 01:58:55 by musacikg          #+#    #+#             */
/*   Updated: 2023/07/31 12:06:00 by musacikg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	hexadecimal(int number)
{
	char	*hexa;

	hexa = "0123456789abcdef";
	ft_putchar(hexa[number / 16]);
	ft_putchar(hexa[number % 16]);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 0 && str[i] <= 31))
		{
			ft_putchar(str[i]);
		}
		else
		{
			ft_putchar('\\');
			hexadecimal(str[i]);
		}
		i++;
	}
	if (str[0] == '\0')
	{
		ft_putchar('\\');
		ft_putchar('0');
		ft_putchar('0');
	}
}
