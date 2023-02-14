/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahbibe <bahbibe@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 23:10:50 by bahbibe           #+#    #+#             */
/*   Updated: 2023/02/13 04:12:50 by bahbibe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*new_stack(int content)
{
	t_stack	*stk;

	stk = (t_stack *) malloc (sizeof (t_stack));
	if (!stk)
		return (NULL);
	stk->nb = content;
	stk->next = NULL;
	return (stk);
}

t_stack	*stack_last(t_stack *stk)
{
	while (stk)
	{
		if (stk->next == NULL)
			return (stk);
		stk = stk->next;
	}
	return (stk);
}

void	add_back(t_stack **stk, t_stack *new)
{
	if (stk)
	{
		if (*stk == NULL)
			*stk = new;
		else
			stack_last(*stk)->next = new;
	}
}

void	add_front(t_stack **stk, t_stack *new)
{
	if (new && stk)
	{
		new->next = *stk;
		*stk = new ;
	}
}

int	stack_size(t_stack *stk)
{
	int		i;

	i = 0;
	while (stk)
	{
		i++;
		stk = stk->next;
	}
	return (i);
}
