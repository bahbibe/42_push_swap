/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahbibe <bahbibe@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 03:10:13 by bahbibe           #+#    #+#             */
/*   Updated: 2023/02/13 06:47:59 by bahbibe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_stack **a)
{
	rot(a);
}

void	rb(t_stack **b)
{
	rot(b);
}

void	rr(t_stack **a, t_stack **b)
{
	rot(a);
	rot(b);
}

void	rra(t_stack **a)
{
	rev_rot(a);
}

void	rrb(t_stack **b)
{
	rev_rot(b);
}
