/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_five.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chphan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 17:24:21 by chphan            #+#    #+#             */
/*   Updated: 2025/04/03 17:24:23 by chphan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_five(t_stack **a, t_stack **b)
{
	int	min_pos;

	while (ft_lstsize(*a) > 3)
	{
		min_pos = find_min(*a);
		min_to_top(a, min_pos);
		pb(b, a);
	}
	sort_three(a);
	while (*b)
		pa(a, b);
}

int	find_min(t_stack *a)
{
	int		min;
	int		pos;
	int		i;
	t_stack	*temp;

	temp = a;
	min = temp->value;
	pos = 0;
	i = 0;
	while (temp)
	{
		if (temp->value < min)
		{
			min = temp->value;
			pos = i;
		}
		i++;
		temp = temp->next;
	}
	return (pos);
}

void	min_to_top(t_stack **a, int pos)
{
	int	size;

	size = ft_lstsize(*a);
	if (pos <= size / 2)
	{
		while (pos-- > 0)
			ra(a);
	}
	else
	{
		pos = size - pos;
		while (pos-- > 0)
			rra(a);
	}
}
