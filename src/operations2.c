/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahbibe <bahbibe@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 03:10:13 by bahbibe           #+#    #+#             */
/*   Updated: 2023/02/11 23:17:43 by bahbibe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_stack **a)
{
	rot(a);
	write(1, "ra\n", 3);
}

void	rb(t_stack **b)
{
	rot(b);
	write(1, "rb\n", 3);
}

void	rr(t_stack **a, t_stack **b)
{
	rot(a);
	rot(b);
	write(1, "rr\n", 3);
}

void	rra(t_stack **a)
{
	rev_rot(a);
	write(1, "rra\n", 4);
}

void	rrb(t_stack **b)
{
	rev_rot(b);
	write(1, "rrb\n", 4);
}
