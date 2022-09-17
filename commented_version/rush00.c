/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarcott <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 19:42:56 by mmarcott          #+#    #+#             */
/*   Updated: 2022/09/17 11:53:56 by mmarcott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c); // Prototype the ft_putchar() function.

void	checker(int x, int y, int i, int i2); // Prototype the checker() function.

void	rush(int x, int y)
{
	int	i; // The index for the while loop.
	int	i2; // Same.

	i = 0;
	i2 = 0;
	while (i < y) // While i is less than the y variable.
	{
		while (i2 < x) // While i2 is less than the x variable.
		{
			checker(x, y, i, i2); // Call the checker() function.
			i2++; // Adding one to i2.
		}
		ft_putchar("\n"); // Place the carriage return after the line for example o---o\n.
		i2 = 0; // Reset the i2 variable to 0.
		i++; // Adding one i.
	}
}

void	checker(int x, int y, int i, int i2)
{	
	if (i2 == (x - 1) && i == 0) // Check if it is the last char of the line and the first line.
		ft_putchar('o');
	else if (i2 == 0 && i == 0) // Check if it is the first char of the line and the first line.
		ft_putchar('o');
	else if (i2 > 0 && i2 < (x - 1) && i == 0) // Check if its a char between the first and last char of the first line.
		ft_putchar('-');
	else if (i > 0 && i2 > 0 && i < (y - 1) && i2 < (x - 1)) // Check if it a char between first line and last line and between first char and last char.
		ft_putchar(32);
	else if (i > 0 && i < (y - 1) && i2 == 0) // Check if the char is the first of the line and if it is between first line and last line.
		ft_putchar('|');
	else if (i2 == (x - 1) && i > 0 && i < (y - 1)) // Check if the char is the last of the line and if it is between first line and last line.
		ft_putchar('|');
	else if (i2 == 0 && i == (y - 1)) // Check if it is the first char of the last line.
		ft_putchar('o');
	else if (i2 > 0 && i == (y - 1) && i2 < (x - 1)) // Check if the char is between the first and last char of the last line.
		ft_putchar('-');
	else if (i2 == (x - 1) && i == (y - 1)) // Check if it is the last char of the last line.
		ft_putchar('o');
}
