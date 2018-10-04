/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfierlaf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/03 14:05:08 by mfierlaf          #+#    #+#             */
/*   Updated: 2018/10/04 15:15:22 by mfierlaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int *range;
	int i;

	i = 0;
	if (min >= max)
	{
		return ((void *)0);
	}
	range = malloc(sizeof(int) * (max - min + 1));
	while (i < (max - min))
	{
		range[i] = min + i;
		i++;
	}
	return (range);
}
