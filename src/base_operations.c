/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   base_operations.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahbibe <bahbibe@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 02:23:50 by bahbibe           #+#    #+#             */
/*   Updated: 2023/02/12 00:24:03 by bahbibe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push(t_stack **from, t_stack **to)
{
	t_stack	*tmp;

	if (!from ||!*from)
		return ;
	tmp = (*from);
	(*from) = tmp->next;
	tmp->next = (*to);
	(*to) = tmp;
}

void	swap(t_stack **stk)
{
	int	tmp;

	if (stack_size(*stk) < 2)
		return ;
	tmp = (*stk)->nb;
	(*stk)->nb = (*stk)->next->nb;
	(*stk)->next->nb = tmp;
}

void	rot(t_stack **stk)
{
	t_stack	*tmp;
	t_stack	*last;

	if (stack_size(*stk) < 2)
		return ;
	last = stack_last(*stk);
	tmp = (*stk);
	(*stk) = (*stk)->next;
	last->next = (tmp);
	last->next->next = NULL;
}

void	rev_rot(t_stack **stk)
{
	t_stack	*tmp;
	t_stack	*tmp2;

	if (stack_size(*stk) < 2)
		return ;
	tmp = (*stk);
	while (tmp->next->next)
		tmp = tmp->next;
	tmp2 = tmp->next;
	tmp->next = NULL;
	add_front(stk, tmp2);
}

void	rrr(t_stack **a, t_stack **b)
{
	rev_rot(a);
	rev_rot(b);
	write(1, "rrr\n", 4);
}
