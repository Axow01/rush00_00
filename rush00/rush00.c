/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarcott <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 19:42:56 by mmarcott          #+#    #+#             */
/*   Updated: 2022/09/17 12:26:41 by mmarcott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	checker(int x, int y, int i, int i2);

void	rush(int x, int y)
{
	int	i;
	int	i2;

	i = 0;
	i2 = 0;
	while (i < y)
	{
		while (i2 < x)
		{
			checker(x, y, i, i2);
			i2++;
		}
		ft_putchar('\n');
		i2 = 0;
		i++;
	}
}

void	checker(int x, int y, int i, int i2)
{	
	if (i2 == (x - 1) && i == 0)
		ft_putchar('o');
	else if (i2 == 0 && i == 0)
		ft_putchar('o');
	else if (i2 > 0 && i2 < (x - 1) && i == 0)
		ft_putchar('-');
	else if (i > 0 && i2 > 0 && i < (y - 1) && i2 < (x - 1))
		ft_putchar(32);
	else if (i > 0 && i < (y - 1) && i2 == 0)
		ft_putchar('|');
	else if (i2 == (x - 1) && i > 0 && i < (y - 1))
		ft_putchar('|');
	else if (i2 == 0 && i == (y - 1))
		ft_putchar('o');
	else if (i2 > 0 && i == (y - 1) && i2 < (x - 1))
		ft_putchar('-');
	else if (i2 == (x - 1) && i == (y - 1))
		ft_putchar('o');
}
