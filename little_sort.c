/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   little_sort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbayrak <sbayrak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 17:09:01 by sbayrak           #+#    #+#             */
/*   Updated: 2025/02/27 15:06:42 by sbayrak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	three_sort(t_swap *index)
{
	int	len;
	int	last;
	int	mid;
	int	first;

	len = index->a_len;
	last = index->stack_a[len - 1];
	mid = index->stack_a[len - 2];
	first = index->stack_a[len - 3];
	if (first > mid && first < last && mid < last)
		swap_a(index);
	if (first < mid && first < last && mid > last)
	{
		reverse_rotate_a(index);
		swap_a(index);
	}
	else if (first > mid && first > last && mid > last)
	{
		swap_a(index);
		reverse_rotate_a(index);
	}
	else if (first > mid && first > last && mid < last)
		rotate_a(index);
	else if (first < mid && first > last && mid > last)
		reverse_rotate_a(index);
}

void	ft_sort_four_five(t_swap *index)
{
	if (index->a_len == 4)
	{
		if (index->b_len == 0)
		{
			while (index->stack_a[0] != 0)
				reverse_rotate_a(index);
		}
		else if (index->b_len == 1)
		{
			while (index->stack_a[0] != 1)
				reverse_rotate_a(index);
		}
		push_b(index);
		three_sort(index);
		push_a(index);
	}
	if (index->a_len == 5)
	{
		while (index->stack_a[0] != 0)
			reverse_rotate_a(index);
		push_b(index);
		ft_sort_four_five(index);
		push_a(index);
	}
}

void	one_two_arg(t_swap *index)
{
	if (index->a_len == 1)
	{
		exit_swap(index);
	}
	if (index->a_len == 2 && !check_sorted(index))
	{
		swap_a(index);
		exit_swap(index);
	}
}
