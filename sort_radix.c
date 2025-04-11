/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_radix.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chphan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 17:19:52 by chphan            #+#    #+#             */
/*   Updated: 2025/04/11 17:19:55 by chphan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_radix(t_stack **a, t_stack **b)
{
	int	bits;
	int	size;
	int	i;
	int	j;

	bits = find_max_bits(*a);
	i = -1;
	while (++i < bits)
	{
		size = ft_lstsize(*a);
		j = -1;
		while (++j < size)
		{
			if ((((*a)->value >> i) & 1) == 1)
				ra(a);
			else
				pb(b, a);
		}
		while (*b)
			pa(a, b);
	}
}

int	find_max_bits(t_stack *a)
{
	int	i;
	int	max;
	int	bits;

	bits = 0;
	max = a->value;
	i = 0;
	while (a)
	{
		if (a->value > max)
			max = a->value;
		a = a->next;
	}
	while ((max >> bits) != 0)
		bits++;
	return (bits);
}
