/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecatimba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 21:56:39 by ecatimba          #+#    #+#             */
/*   Updated: 2023/11/18 21:57:06 by ecatimba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	print_line(int x, int left, int middle, int right)
{
	int	space;

	space = 1;
	if (x > 0)
	{
		ft_putchar(left);
	}
	while (space < (x - 1))
	{
		ft_putchar(middle);
		space++;
	}
	if (x > 1)
	{
		ft_putchar(right);
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	space;

	space = 1;
	if (x > 0 && y > 0)
	{
		print_line(x, 'o', '-', 'o');
	}
	while (space < y - 1 && x > 0)
	{
		print_line(x, '|', ' ', '|');
		space++;
	}
	if (y > 1 && x > 0)
	{
		print_line(x, 'o', '-', 'o');
	}
}
