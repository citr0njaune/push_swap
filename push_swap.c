/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chphan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 17:23:42 by chphan            #+#    #+#             */
/*   Updated: 2025/04/03 17:23:44 by chphan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_sorted(t_stack **a)
{
	t_stack	*node;

	node = *a;
	while (node)
	{
		if (node->next && node->value > node->next->value)
			return (0);
		node = node->next;
	}
	return (1);
}

int	main(int ac, char **av)
{
	t_stack	*a;
	t_stack	*b;

	if (ac < 2)
		return (0);
	a = NULL;
	b = NULL;
	init_stack(&a, ac, av);
	if (!is_sorted(&a))
	{
		if (ft_lstsize(a) == 2)
			sa(&a);
		else if (ft_lstsize(a) == 3)
			sort_three(&a);
		else if (ft_lstsize(a) <= 5)
			sort_five(&a, &b);
		else
			sort_radix(&a, &b);
	}
	free_stack(a);
	return (0);
}
