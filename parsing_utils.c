/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chphan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 17:23:29 by chphan            #+#    #+#             */
/*   Updated: 2025/04/03 17:23:31 by chphan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	parsing_args(t_stack **a, char **nb)
{
	int	i;

	i = 0;
	while (nb[i])
	{
		if (!is_valide(nb[i]))
		{
			ft_putendl_fd("Error", 2);
			exit(1);
		}
		push_num(a, ft_atoi(nb[i]));
		i++;
	}
	if (is_duplicate(*a))
	{
		ft_freelst(*a);
		ft_putendl_fd("Error", 2);
		exit(1);
	}
}

int	is_valide(char *str)
{
	int		i;
	long	num;
	int		sign;

	i = 0;
	sign = 1;
	num = 0;
	if (str[i] == 0)
		return (0);
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		num = num * 10 + (str[i] - '0');
		i++;
	}
	if (str[i])
		return (0);
	if ((num * sign) < INT_MIN || (num * sign) > INT_MAX || ft_strlen(str) > 11)
		return (0);
	return (1);
}

int	is_duplicate(t_stack *a)
{
	t_stack	*temp;

	while (a)
	{
		temp = a->next;
		while (temp)
		{
			if (temp->value == a->value)
				return (1);
			temp = temp->next;
		}
		a = a->next;
	}
	return (0);
}

void	push_num(t_stack **a, int value)
{
	t_stack	*new;
	t_stack	*temp;

	new = malloc(sizeof(t_stack));
	if (!new)
		return ;
	new->value = value;
	new->next = NULL;
	if (!*a)
	{
		*a = new;
		return ;
	}
	temp = *a;
	while (temp->next)
		temp = temp->next;
	temp->next = new;
}
