/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbayrak <sbayrak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 17:09:07 by sbayrak           #+#    #+#             */
/*   Updated: 2025/02/27 15:06:45 by sbayrak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	exit_swap(t_swap *index)
{
	free(index->stack_a);
	free(index->stack_b);
	free(index->sorted);
	free(index->sorted_inx);
	free(index);
	exit(0);
}

void	free_list(char **list)
{
	char	**head;

	head = list;
	while (list && *list)
		free(*list++);
	free(head);
}

t_swap	*init(char **argv)
{
	char	*str;
	char	**arr;
	t_swap	*swap;
	int		len;

	len = 0;
	str = get_argv(argv);
	arr = ft_split(str, ' ');
	while (arr[len])
		len++;
	free_list(arr);
	swap = ft_calloc(1, sizeof(t_swap));
	swap->stack_a = malloc(sizeof(int) * len);
	swap->stack_b = malloc(sizeof(int) * len);
	swap->sorted = malloc(sizeof(int) * len);
	swap->sorted_inx = malloc(sizeof(int) * len);
	swap->a_len = len;
	set_values(str, swap);
	check_all_num(str, swap);
	free(str);
	return (swap);
}

static void	ft_sp_control(char **str)
{
	int	i;
	int	j;
	int	flag;

	flag = 0;
	i = 1;
	while (str[i])
	{
		j = 0;
		while (str[i][j])
		{
			if (str[i][j] <= '9' && str[i][j] >= '0')
				flag = 1;
			j++;
		}
		if (flag == 0)
		{
			write(2, "Error\n", 6);
			exit(1);
		}
		flag = 0;
		i++;
	}
}

int	main(int argc, char **argv)
{
	t_swap	*index;

	if (argc > 1)
	{
		ft_sp_control(argv);
		index = init(argv);
		error_control(index);
		bg_sort_min(index);
		find_idx(index);
		one_two_arg(index);
		if (index->a_len == 3)
			three_sort(index);
		else if (index->a_len == 4 || index->a_len == 5)
			ft_sort_four_five(index);
		else if (index->a_len >= 6)
			radix_sort(index);
	}
	else
	{
		return (0);
	}
	exit_swap(index);
	return (0);
}
