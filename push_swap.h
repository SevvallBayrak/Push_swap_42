/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbayrak <sbayrak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 17:09:15 by sbayrak           #+#    #+#             */
/*   Updated: 2025/02/27 15:07:24 by sbayrak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "./libft/libft.h"
# include <unistd.h>
# include <stdlib.h>

typedef struct s_swap
{
	int	*stack_a;
	int	*stack_b;
	int	*sorted;
	int	*sorted_inx;
	int	a_len;
	int	b_len;
}		t_swap;

void	push_b(t_swap *index);
void	push_a(t_swap *index);
void	exit_swap(t_swap	*index);
char	*get_argv(char **argv);
void	set_values(char *str, t_swap *index);
void	free_list(char **list);
void	swap_a(t_swap	*index);
void	swap_b(t_swap	*index);
void	rotate_a(t_swap	*index);
void	rotate_b(t_swap	*index);
void	reverse_rotate_a(t_swap *index);
void	reverse_rotate_b(t_swap *index);
int		check_sorted(t_swap *index);
int		check_sorted_rdx(t_swap *index);
void	check_repeat(t_swap	*index);
void	error_control(t_swap	*index);
void	check_all_num(char	*str, t_swap *index);
void	radix_sort(t_swap *index);
void	bg_sort_min(t_swap *index);
void	find_idx(t_swap *index);
void	three_sort(t_swap *index);
void	one_two_arg(t_swap *index);
void	ft_sort_four_five(t_swap *index);
long	ft_atol(const char *str, t_swap *index);

#endif