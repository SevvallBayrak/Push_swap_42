/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   buble.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbayrak <sbayrak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 17:08:40 by sbayrak           #+#    #+#             */
/*   Updated: 2025/02/27 15:06:17 by sbayrak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	bg_sort_min(t_swap *index)
{
	int	i;
	int	temp;
	int	len;

	i = 0;
	len = index->a_len;
	while (i < len)
	{
		index->sorted[i] = index->stack_a[i];
		i++;
	}
	i = 0;
	while (i < len - 1)
	{
		if (index->sorted[i] > index->sorted[i + 1])
		{
			temp = index->sorted[i];
			index->sorted[i] = index->sorted[i + 1];
			index->sorted[i + 1] = temp;
			i = -1;
		}
		i++;
	}
}
