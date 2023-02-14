/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahbibe <bahbibe@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 03:09:47 by bahbibe           #+#    #+#             */
/*   Updated: 2023/02/13 04:09:29 by bahbibe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	min_pos(t_stack *stk)
{
	int	i;
	int	min;

	i = 0;
	min = get_min(stk);
	while (stk)
	{
		if (min == stk->nb)
			break ;
		stk = stk->next;
		i++;
	}
	return (i);
}

int	max_pos(t_stack *stk)
{
	int	i ;
	int	max;

	i = 0;
	max = get_max(stk);
	while (stk)
	{
		if (max == stk->nb)
			break ;
		stk = stk->next;
		i++;
	}
	return (i);
}

int	get_min(t_stack *stk)
{
	int	min;

	min = stk->nb;
	while (stk)
	{
		if (min > stk->nb)
			min = stk->nb;
		stk = stk->next;
	}
	return (min);
}

int	get_max(t_stack *stk)
{
	int	max;

	max = stk->nb;
	while (stk)
	{
		if (max < stk->nb)
			max = stk->nb;
		stk = stk->next;
	}
	return (max);
}
