/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chphan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 17:25:08 by chphan            #+#    #+#             */
/*   Updated: 2025/04/03 17:25:10 by chphan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	init_stack(t_stack **a, int ac, char **av)
{
	char	**nb;

	if (ac == 2)
	{
		nb = ft_split(av[1], ' ');
		if (!nb)
			return ;
	}
	else
		nb = av + 1;
	parsing_args(a, nb, ac);
	if (ac == 2)
		ft_free(nb);
}

void	ft_free(char **str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		free(str[i]);
		i++;
	}
	free(str);
}

int	ft_lstsize(t_stack *n)
{
	t_stack	*curr;
	int		i;

	curr = n;
	i = 0;
	while (curr != NULL)
	{
		i++;
		curr = curr->next;
	}
	return (i);
}

void	free_stack(t_stack *stack)
{
	t_stack	*tmp;

	while (stack)
	{
		tmp = stack;
		stack = stack->next;
		free(tmp);
	}
}
