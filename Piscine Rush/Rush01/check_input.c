/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_input.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecatimba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 10:42:23 by ecatimba          #+#    #+#             */
/*   Updated: 2023/11/26 10:42:45 by ecatimba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	check_errors_input(int size, char *argv, int **input)
{
	int	i;
	int	j;
	int	aux;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < size)
		{
			aux = i * size + j;
			if (!argv[aux * 2]#include <stdlib.h>

void	ini_table(int **table, int n, int m)
{
	int	i;

	i = 0;
	while (i < n)
	{
		table[i] = (int *) malloc (sizeof(int) * m);
		++i;
	}
}

void	free_table(int **table, int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		free(table[i]);
		++i;
	}
	free(table);
}

int	finish_correct_recursion(int *table)
{
	free(table);
	return (1);
} || argv[aux * 2] < '1'
				|| argv[aux * 2] > size + '0')
				return (1);
			else if (aux != 4 * size - 1 && argv[aux * 2 + 1] != ' ')
				return (1);
			else
				input[i][j] = argv[aux * 2] - '0';
			++j;
		}
		++i;
	}
	if (argv[4 * size * 2 - 1])
		return (1);
	return (0);
}

int	get_table_size(char *argv)
{
	int	i;

	i = 0;
	while (argv[i])
		++i;
	i = (i + 1) / 2;
	if (i % 4)
		return (0);
	else if (i / 4 > 9 || i / 4 < 4)
		return (0);
	else
		return (i / 4);
}
