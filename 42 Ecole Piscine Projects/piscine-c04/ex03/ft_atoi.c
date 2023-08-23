/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: musacikg <musacikg@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 23:18:48 by musacikg          #+#    #+#             */
/*   Updated: 2023/08/02 10:56:47 by musacikg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
	int	mark;
	int	end;

	i = 0;
	mark = 1;
	end = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
	{
		i++;
	}
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
		{
			mark *= -1;
		}
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		end = (str[i] - '0') + (end * 10);
		i++;
	}
	return (mark * end); 
}
