/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chphan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 17:23:55 by chphan            #+#    #+#             */
/*   Updated: 2025/04/03 17:24:03 by chphan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H

# define PUSH_SWAP_H

# include <limits.h>
# include <stddef.h>
# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include "./libft/libft.h"

typedef struct s_stack
{
	struct s_stack	*next;
	int				value;
}	t_stack;

void	push(t_stack **stack, t_stack **stack2);
void	pa(t_stack **a, t_stack **b);
void	pb(t_stack **b, t_stack **a);

void	reverse_rotate(t_stack **stack);
void	rra(t_stack **a);
void	rrb(t_stack **b);
void	rrr(t_stack **a, t_stack **b);

void	rotate(t_stack **stack);
void	ra(t_stack **a);
void	rb(t_stack **b);
void	rr(t_stack **a, t_stack **b);

void	swap(t_stack **stack);
void	sa(t_stack **a);
void	sb(t_stack **b);
void	ss(t_stack **a, t_stack **b);

void	parsing_args(t_stack **a, char **nb);
int		is_valide(char *str);
int		is_duplicate(t_stack *a);
void	push_num(t_stack **a, int value);

void	sort_three(t_stack **a);

void	sort_five(t_stack **a, t_stack **b);
int		find_min(t_stack *a);
void	min_to_top(t_stack **a, int pos);

void    sort_radix(t_stack **a, t_stack **b);
int 	find_max_bits(t_stack *a);

void	init_stack(t_stack **a, int ac, char **av);
void	ft_freelst(t_stack *a);
void	ft_free(char **str);
int		ft_lstsize(t_stack *n);
void	show_stack(t_stack **a);

#endif
