/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfierlaf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/03 17:03:23 by mfierlaf          #+#    #+#             */
/*   Updated: 2018/10/04 14:50:12 by mfierlaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_count_if(char **tab, int (*f)(char*))
{
	int i;
	int cpt;

	i = 0;
	cpt = 0;
	while (tab[i] != 0)
	{
		if (f(tab[i]) == 1)
			cpt++;
		i++;
	}
	return (cpt);
}
