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

void	init_stack_a(t_stack **a, int ac, char **av)
{
	t_stack	*temp;
	int		i;

	*a = malloc(sizeof(t_stack));
	temp = *a;
	parsing_args(&a, ac, av, temp);
}

void	error_mess(int ac, int choice, t_stack **a, char **nb)
{
	if (choice = 1)
	{
		if (ac == 2)
		{
			ft_free(nb);
			ft_putendl_fd("Error", 2);
		}
	}
	else if (choice = 0)
	{
		ft_freelst(a);
		ft_putendl_fd("Error", 2);
	}
}

void	ft_freelst(t_stack *a)
{
	t_stack	*curr;
	t_stack	*temp;

	curr = a;
	while (curr)
	{
		temp = curr;
		curr = curr->next;
		ft_free(temp);
	}
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
