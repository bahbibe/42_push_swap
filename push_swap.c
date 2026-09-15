/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahbibe <bahbibe@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 17:00:47 by bahbibe           #+#    #+#             */
/*   Updated: 2023/02/13 10:02:56 by bahbibe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	t_stack	*a;
	t_stack	*b;
	int		*ref;

	b = NULL;
	a = NULL;
	if 	(ac != 1)
	{
		a = fill_stack(&a, check_error(parse(av)));
		ref = a->ref;
		sort_stack(&a, &b, ref);
		free_stack(&a);
		free_stack(&b);
		free(ref);
	}
	return (0);
}
