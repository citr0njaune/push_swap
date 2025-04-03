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
	t_stack *temp;
	t_stack *temp2;

	temp = malloc(sizeof(t_stack));
	if (!temp)
		return ;
	temp->value = (*stack2)->value;
	temp->next = *stack;
	*stack = temp;
	temp2 = *stack2;
	*stack2 = (*stack)->next;
	ft_free(temp);
}

void	pa(t_stack **a, t_stack **b)
{
	push(a, b);
	ft_putendl_fd("pa", 1);
}

void	pb(t_stack **b, t_stack **a)
{
	push(b, a);
	ft_putendl_fd("pb", 1);
}
