/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahbibe <bahbibe@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 23:06:40 by bahbibe           #+#    #+#             */
/*   Updated: 2023/02/14 04:42:29 by bahbibe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_sorted(t_stack *stk)
{
	if (!stk)
		return (0);
	while (stk->next)
	{
		if (stk->nb > stk->next->nb)
			return (0);
		stk = stk->next;
	}
	return (1);
}

char	**parse(char **av)
{
	int		i;
	char	*joined;
	char	**args;

	joined = malloc(sizeof(av));
	i = 1;
	while (av[i])
	{
		if (!ft_empty_str(av[i]))
		{
			free(joined);
			ft_error("Error\n");
		}
		joined = f_strjoin(f_strjoin(joined, " "), av[i++]);
	}
	args = ft_split(joined, ' ');
	free(joined);
	return (args);
}

char	**check_error(char **args)
{
	int	i;
	int	j;

	i = 0;
	while (args[i])
	{
		j = 0;
		if (args[i][j] == '-' || args[i][j] == '+')
			j++;
		if (!args[i][j])
			(ft_error("Error\n"));
		while (args[i][j])
		{
			if (!ft_isdigit(args[i][j++]))
				(ft_error("Error\n"));
		}
		j = i + 1;
		while (args[j])
		{
			if (ft_atoi(args[i]) == ft_atoi(args[j++]))
				(ft_error("Error\n"));
		}
		i++;
	}
	return (args);
}

t_stack	*fill_stack(t_stack **stk, char **args)
{
	int	i;
	int	nb;

	i = 0;
	while (args[i])
	{
		nb = ft_atoi(args[i]);
		add_back(stk, new_stack(nb));
		i++;
	}
	(*stk)->ref = sorted(stk);
	ft_arr_free(args);
	return (*stk);
}

int	*sorted(t_stack **stk)
{
	int		i;
	int		*arr;
	t_stack	*tmp;

	i = 0;
	tmp = (*stk);
	arr = malloc(sizeof(int) * stack_size(*stk));
	if (!arr)
		return (NULL);
	while (i < stack_size(*stk))
	{
		arr[i] = tmp->nb;
		tmp = tmp->next;
		i++;
	}
	return (ft_sort_arr(arr, stack_size(*stk)));
}
