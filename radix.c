/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbayrak <sbayrak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 17:09:27 by sbayrak           #+#    #+#             */
/*   Updated: 2025/02/27 15:07:33 by sbayrak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	get_max_bits(t_swap *index)
{
	int	bit_size;
	int	size;

	bit_size = 0;
	size = index->a_len;
	while (size > 1)
	{
		bit_size++;
		size /= 2;
	}
	return (bit_size);
}

void	find_idx(t_swap *index)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < index->a_len)
	{
		j = 0;
		while (j < index->a_len)
		{
			if (index->stack_a[i] == index->sorted[j])
				index->sorted_inx[i] = j;
			j++;
		}
		i++;
	}
	i = -1;
	while (++i < index->a_len)
		index->stack_a[i] = index->sorted_inx[i];
}

void	radix_sub_one(t_swap *index, int i)
{
	if (check_sorted_rdx(index) == 0)
	{
		if (((index->stack_a[0] >> i) & 1) == 0)
			push_b(index);
		else
			rotate_a(index);
	}
}

void	radix_sub_two(t_swap *index, int i, int b_size, int max_bits)
{
	while (b_size-- && i <= max_bits)
	{
		if (((index->stack_b[0] >> i) & 1) == 0)
			rotate_b(index);
		else
			push_a(index);
	}
}

void	radix_sort(t_swap *index)
{
	int		i;
	int		j;
	int		size;
	int		b_size;
	int		max_bits;

	i = 0;
	max_bits = get_max_bits(index);
	while (i <= max_bits)
	{
		size = index->a_len;
		j = 0;
		while (j < size)
		{
			radix_sub_one(index, i);
			j++;
		}
		i++;
		b_size = index->b_len;
		radix_sub_two(index, i, b_size, max_bits);
	}
	while (index->b_len)
		push_a(index);
}
