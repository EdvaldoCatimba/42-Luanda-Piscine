/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_file.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efaustin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 08:45:04 by efaustin          #+#    #+#             */
/*   Updated: 2023/12/05 10:20:32 by efaustin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

void	ft_file(void)
{
	int		r;
	int		fd;
	char	buf[4096];

	fd = open("temddp", O_CREAT | O_RDWR | O_TRUNC, S_IWUSR | S_IRUSR);
	while ((r = read(0, buf, 4096)) > 0)
	{
		write(fd, buf, r);
	}
	close(fd);
}
