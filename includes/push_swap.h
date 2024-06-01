/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahbibe <bahbibe@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 17:00:51 by bahbibe           #+#    #+#             */
/*   Updated: 2023/02/13 04:06:11 by bahbibe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"
# include "gnl/get_next_line.h"
# define RED "\e[0;31m"
# define OFF "\e[0m"

typedef struct s_stack
{
	struct s_stack	*next;
	int				nb;
	int				*ref;
}	t_stack;

void	push(t_stack **from, t_stack **to);
void	rev_rot(t_stack **stk);
void	swap(t_stack **stk);
void	rot(t_stack **stk);
void	pa(t_stack **a, t_stack **b);
void	pb(t_stack **a, t_stack **b);
void	ss(t_stack **a, t_stack **b);
void	rr(t_stack **a, t_stack **b);
void	rrr(t_stack **a, t_stack **b);
void	sa(t_stack **a);
void	sb(t_stack **b);
void	ra(t_stack **a);
void	rb(t_stack **b);
void	rra(t_stack **a);
void	rrb(t_stack **b);
t_stack	*fill_stack(t_stack **stk, char **args);
void	add_front(t_stack **stk, t_stack *new);
void	add_back(t_stack **stk, t_stack *new);
t_stack	*new_stack(int content);
t_stack	*stack_last(t_stack *stk);
int		stack_size(t_stack *stk);
void	sort_lot(t_stack **a, t_stack **b, int *arr, int range);
void	sort_stack(t_stack **a, t_stack **b, int *arr);
void	float_min(t_stack **stk, int size);
void	float_max(t_stack **stk, int size);
void	sort_5n(t_stack **a, t_stack **b);
void	sort_4n(t_stack **a, t_stack **b);
void	sort_3n(t_stack **a);
int		min_pos(t_stack *stk);
int		max_pos(t_stack *stk);
int		get_min(t_stack *stk);
int		get_max(t_stack *stk);
char	**check_error(char **args);
int		is_sorted(t_stack *stk);
int		*sorted(t_stack **stk);
char	**parse(char **av);
#endif
