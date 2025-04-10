/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chphan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 17:24:55 by chphan            #+#    #+#             */
/*   Updated: 2025/04/03 17:24:57 by chphan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_three(t_stack **a)
{
	int	x;
	int	y;
	int	z;

	x = (*a)->value;
	y = (*a)->next->value;
	z = (*a)->next->next->value;
	if (x < y && y > z && x < z)
	{
		sa(a);
		ra(a);
	}
	else if (x > y && y < z && x < z)
		sa(a);
	else if (x < y && y > z && x > z)
		rra(a);
	else if (x > y && y < z && x > z)
		ra(a);
	else if (x > y && y > z && x > z)
	{
		ra(a);
		sa(a);
	}
}
