/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecatimba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 15:47:00 by ecatimba          #+#    #+#             */
/*   Updated: 2023/12/03 15:47:03 by ecatimba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

void	rush(char *dict, char *num)
{
	char	*buffer;

	buffer = ft_open_read(dict);
	if (!buffer)
	{
		free(buffer);
		return ;
	}
	print_all(buffer, num);
	free(buffer);
}
