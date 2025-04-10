/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chphan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 15:29:33 by chphan            #+#    #+#             */
/*   Updated: 2025/04/03 15:29:36 by chphan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push(t_stack **stack, t_stack **stack2)
{
	t_stack	*temp;

	temp = *stack;
	*stack = (*stack)->next;
	temp->next = *stack2;
	*stack2 = temp;
}

void	pa(t_stack **a, t_stack **b)
{
	push(b, a);
	ft_putendl_fd("pa", 1);
}

void	pb(t_stack **b, t_stack **a)
{
	push(a, b);
	ft_putendl_fd("pb", 1);
}
