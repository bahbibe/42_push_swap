/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahbibe <bahbibe@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 03:32:19 by bahbibe           #+#    #+#             */
/*   Updated: 2023/02/14 19:23:26 by bahbibe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	float_max(t_stack **stk, int size)
{
	int	i;

	while (1)
	{
		i = max_pos(*stk);
		if (i == 0)
			break ;
		else if (i <= size / 2)
			rb(stk);
		else if (i > size / 2)
			rrb(stk);
	}
}

void	sort_lot(t_stack **a, t_stack **b, int *arr, int range)
{
	int	i;

	i = 0;
	while (*a)
	{
		if ((*a)->nb <= arr[i])
		{
			pb(a, b);
			rb(b);
			i++;
		}
		else if ((*a)->nb > arr[i] && (*a)->nb <= arr[range + i])
		{
			pb(a, b);
			i++;
		}
		else
			ra(a);
	}
}

void	sort_few(t_stack **a, t_stack **b)
{
	int	size;

	size = stack_size(*a);
	if (size == 2)
		sa(a);
	else if (size == 3)
		sort_3n(a);
	else if (size == 4)
		sort_4n(a, b);
	else if (size == 5)
		sort_5n(a, b);
}

void	sort_stack(t_stack **a, t_stack **b, int *arr)
{
	int	range;
	int	size;

	range = 0;
	size = stack_size(*a);
	if (size <= 5)
	{
		sort_few(a, b);
		return ;
	}
	else if (size >= 6 && size <= 16)
		range = 3;
	else if (size <= 100)
		range = 15;
	else
		range = 40;
	sort_lot(a, b, arr, range);
	while (*b)
	{
		float_max(b, stack_size(*b));
		pa(a, b);
	}
}
