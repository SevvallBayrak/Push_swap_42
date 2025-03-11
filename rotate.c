/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbayrak <sbayrak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 17:09:38 by sbayrak           #+#    #+#             */
/*   Updated: 2025/02/27 15:07:41 by sbayrak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate_a(t_swap	*index)
{
	int	temp;
	int	i;

	i = 0;
	while (i < index->a_len -1)
	{
		temp = index->stack_a[i + 1];
		index->stack_a[i + 1] = index->stack_a[i];
		index->stack_a[i] = temp;
		++i;
	}
	write(1, "ra\n", 3);
}

void	rotate_b(t_swap	*index)
{
	int	temp;
	int	i;

	i = 0;
	while (i < index->b_len -1)
	{
		temp = index->stack_b[i + 1];
		index->stack_b[i + 1] = index->stack_b[i];
		index->stack_b[i] = temp;
		++i;
	}
	write(1, "rb\n", 3);
}
