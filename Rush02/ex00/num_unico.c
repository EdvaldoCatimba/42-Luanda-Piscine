/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   num_unico.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecatimba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 15:46:33 by ecatimba          #+#    #+#             */
/*   Updated: 2023/12/03 15:46:35 by ecatimba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

char	*unique_num(char *num)
{
	char	*uni_n;
	char	*front;
	char	*back;
	int		i;

	i = 0;
	if (!*num)
		return (0);
	front = num;
	while (*front && is_space(*front))
		front++;
	back = front;
	while (*back)
		back++;
	back -= 1;
	while (is_space(*back))
		back--;
	uni_n = (char *)malloc(back - front + 1);
	if (uni_n == NULL)
		return (0);
	ft_strcpy(uni_n, front, back);
	while (uni_n[i])
		i++;
	uni_n[i] = '\0';
	return (uni_n);
}
