/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbayrak <sbayrak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 17:09:50 by sbayrak           #+#    #+#             */
/*   Updated: 2025/02/27 15:07:51 by sbayrak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap_a(t_swap	*index)
{
	int	temp;

	if (index->a_len < 2)
		return ;
	temp = index->stack_a[0];
	index->stack_a[0] = index->stack_a[1];
	index->stack_a[1] = temp;
	write(1, "sa\n", 3);
}

void	swap_b(t_swap	*index)
{
	int	temp;

	if (index->b_len < 2)
		return ;
	temp = index->stack_b[0];
	index->stack_b[0] = index->stack_b[1];
	index->stack_b[1] = temp;
	write(1, "sb\n", 3);
}
