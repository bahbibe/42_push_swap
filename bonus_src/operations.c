/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahbibe <bahbibe@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 00:34:28 by bahbibe           #+#    #+#             */
/*   Updated: 2023/02/13 06:47:46 by bahbibe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_stack **a)
{
	swap(a);
}

void	sb(t_stack **b)
{
	swap(b);
}

void	ss(t_stack **a, t_stack **b)
{
	swap(a);
	swap(b);
}

void	pb(t_stack **a, t_stack **b)
{
	push(a, b);
}

void	pa(t_stack **a, t_stack **b)
{
	push(b, a);
}
