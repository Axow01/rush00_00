/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarcott <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 19:42:56 by mmarcott          #+#    #+#             */
/*   Updated: 2022/09/16 20:46:43 by mmarcott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>


void	rush(int x, int y)
{
	char width;
	char height;
	char	vol[4];
	int	i;
	int i2;

	vol[0] = 'o';
	vol[1] = ' ';
	vol[2] = '-';
	vol[3] = '|';
	height = y + '0';
	width = x + '0';
	i = 0;
	i2 = 0;
	while (i < 3)
	{
		while (i2 < 5)
		{
			write(1, &width, 1);
			i2++;
		}
		write(1, "\n", 1);
		i++;
	}
}

