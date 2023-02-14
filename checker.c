/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahbibe <bahbibe@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 05:22:52 by bahbibe           #+#    #+#             */
/*   Updated: 2023/02/13 10:08:12 by bahbibe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

int	do_op(t_stack **a, t_stack **b, char *op)
{
	if (ft_strncmp(op, "pa\n", 3) == 0)
		return (pa(a, b), 1);
	else if (ft_strncmp(op, "pb\n", 3) == 0)
		return (pb(a, b), 1);
	else if (ft_strncmp(op, "sa\n", 3) == 0)
		return (sa(a), 1);
	else if (ft_strncmp(op, "sb\n", 3) == 0)
		return (sb(b), 1);
	else if (ft_strncmp(op, "ss\n", 3) == 0)
		return (ss(a, b), 1);
	else if (ft_strncmp(op, "ra\n", 3) == 0)
		return (ra(a), 1);
	else if (ft_strncmp(op, "rb\n", 3) == 0)
		return (rb(b), 1);
	else if (ft_strncmp(op, "rr\n", 3) == 0)
		return (rr(a, b), 1);
	else if (ft_strncmp(op, "rra\n", 4) == 0)
		return (rra(a), 1);
	else if (ft_strncmp(op, "rrb\n", 4) == 0)
		return (rrb(b), 1);
	else if (ft_strncmp(op, "rrr\n", 4) == 0)
		return (rrr(a, b), 1);
	else
		return (0);
}

int	main(int ac, char **av)
{
	t_stack	*a;
	t_stack	*b;
	char	*s;

	b = NULL;
	if (ac != 1)
	{
		a = fill_stack(&a, check_error(parse(av)));
		s = get_next_line(0);
		while (s)
		{
			if (do_op(&a, &b, s))
			{
				free(s);
				s = get_next_line(0);
			}
			else
				ft_error("Error\n");
		}
		if (is_sorted(a) && !b)
			write(1, "OK\n", 3);
		else
			write(1, "KO\n", 3);
	}
	return (0);
}
