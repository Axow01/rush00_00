/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarcott <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 19:42:56 by mmarcott          #+#    #+#             */
/*   Updated: 2022/09/16 23:17:39 by mmarcott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c);

void	checker(char vol[4], int x, int y);

void	rush(int x, int y)
{
	char	vol[4];
	int	i;
	int i2;

	vol[0] = 'o';
	vol[1] = ' ';
	vol[2] = '-';
	vol[3] = '|';
	i = 0;
	i2 = 0;
	while (i < y)
	{
		while (i2 < x)
		{
			if (i2 == (x - 1) && i == 0)
				ft_putchar(vol[0]);
			else if (i2 == 0 && i == 0)
				ft_putchar(vol[0]);	
			else if (i2 > 0 && i2 < (x - 1) && i == 0)
				ft_putchar(vol[2]);
			i2++;
		}
		write(1, "\n", 1);
		i2 = 0;
		i++;
	}
}
