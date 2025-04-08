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

int	main(int ac, char **av)
{
	t_stack	*a;
	t_stack	*b;

	if (ac < 2)
		return (0);
	a = malloc(sizeof(t_stack *));
	b = malloc(sizeof(t_stack *));
	if (!b || !a)
		return (0);
	init_stack_a(&a, ac, av);
	if (is_sorted(a))
	{
		ft_freelst(a);
		free(b);
		return (1);
	}
	if (ft_lstsize(a) == 3)
		sort_three(&a);
	else if (ft_lstsize(a) == 5)
		sort_five(&a, &b);
	else
		sort_radix(&a, &b);
	ft_freelst(a);
	ft_freelst(b);
	return (0);
}
