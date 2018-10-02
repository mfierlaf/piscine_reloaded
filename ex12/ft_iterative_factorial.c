/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfierlaf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/02 14:25:22 by mfierlaf          #+#    #+#             */
/*   Updated: 2018/10/02 15:10:42 by mfierlaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int i;
	int factorielle;

	if (nb > 12 || nb < 0)
		return (0);
	factorielle = 1;
	i = 0;
	while (++i <= nb)
		factorielle *= i;
	return (factorielle);
}
