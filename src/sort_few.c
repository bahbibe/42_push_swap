/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_few.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahbibe <bahbibe@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 02:51:12 by bahbibe           #+#    #+#             */
/*   Updated: 2023/02/13 03:32:53 by bahbibe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	float_min(t_stack **stk, int size)
{
	int	i;

	while (1)
	{
		i = min_pos(*stk);
		if (i == 0)
			break ;
		else if (i <= size / 2)
			ra(stk);
		else if (i > size / 2)
			rra(stk);
	}
}

void	sort_3n(t_stack **a)
{
	if (is_sorted(*a))
		return ;
	if ((*a)->nb == get_max(*a))
	{
		ra(a);
		if ((*a)->nb > (*a)->next->nb)
			sa(a);
	}
	else if ((*a)->next->nb == get_max(*a))
	{
		rra(a);
		if ((*a)->nb > (*a)->next->nb)
			sa(a);
	}
	else
		sa(a);
}

void	sort_4n(t_stack **a, t_stack **b)
{
	float_min(a, stack_size(*a));
	pb(a, b);
	sort_3n(a);
	pa(a, b);
}

void	sort_5n(t_stack **a, t_stack **b)
{
	float_min(a, stack_size(*a));
	pb(a, b);
	sort_4n(a, b);
	pa(a, b);
}
