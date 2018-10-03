/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfierlaf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/03 14:05:08 by mfierlaf          #+#    #+#             */
/*   Updated: 2018/10/03 14:27:10 by mfierlaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int *range;

	range = malloc(sizeof(int) * (max - min));
	if (min > max)
		return (range);
	while (min < max)
	{
		range[min] = min;
		min++;
	}
	return (range);
}
