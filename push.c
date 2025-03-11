/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbayrak <sbayrak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 17:09:20 by sbayrak           #+#    #+#             */
/*   Updated: 2025/02/27 15:07:29 by sbayrak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_b(t_swap *index)
{
	int	i;

	if (index->a_len <= 0)
		return ;
	i = index->b_len;
	while (i > 0)
	{
		index->stack_b[i] = index->stack_b[i - 1];
		i--;
	}
	index->stack_b[0] = index->stack_a[0];
	i = 0;
	while (i < index->a_len - 1)
	{
		index->stack_a[i] = index->stack_a[i + 1];
		i++;
	}
	index->a_len--;
	index->b_len++;
	write(1, "pb\n", 3);
}

void	push_a(t_swap *index)
{
	int	i;

	if (index->b_len <= 0)
		return ;
	i = index->a_len;
	while (i > 0)
	{
		index->stack_a[i] = index->stack_a[i - 1];
		i--;
	}
	index->stack_a[0] = index->stack_b[0];
	i = 0;
	while (i < index->b_len - 1)
	{
		index->stack_b[i] = index->stack_b[i + 1];
		i++;
	}
	index->b_len--;
	index->a_len++;
	write(1, "pa\n", 3);
}
