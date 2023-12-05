/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   initialize_table.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecatimba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 10:43:41 by ecatimba          #+#    #+#             */
/*   Updated: 2023/11/26 10:43:44 by ecatimba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

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
}
