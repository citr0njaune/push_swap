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

void    parsing_args(t_stack **a, int ac, char **nb)
{
    int i;

    i = 0
    while(nb[i] && nb[i + 1])
    {
        if (!is_valide(nb[i]))
        {
            if (ac == 2)
				ft_free(nbr);
			ft_putendl_fd("Error", 2);
			exit(1);
        }
        i++;
    }
    push_num(a, nb);
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
	t_stack	*temp2;

	temp = a;
	temp2 = a;
	while (temp)
	{
		while (temp2)
		{
			if (temp2->value == temp->value && temp != temp2)
				return (1);
			temp2 = temp2->next;
		}
		temp = temp->next;
		temp2 = a;
	}
	return (0);
}

int	is_sorted(t_stack *a)
{
	while (a)
	{
		if (a->next && a->value > a->next->value)
			return (0);
		a = a->next;
	}
	return (1);
}

void    push_num(t_stack **a, char **nb)
{
    int value;
    int i;

    i = 0;
    while (nb[i])
    {
        value = ft_atoi(nb[i]);
        push_detail(a, value, nb[i + 1]);
        i++;
    }
    if (is_duplicate(a, value))
	{
		ft_freelst(a);
		free(b);
		ft_putendl_fd("Error", 2);
		return (1);
	}
}
void    push_detail(t_stack **a, int value, char *nb)
{
    t_stack *temp;

    *a = malloc(sizeof(t_stack));
    temp = *a;
    temp->value = value;
    if (nbr[i + 1])
    {
        temp->next = malloc(sizeof(t_node));
        if (!temp->next)
            return ;
        temp = temp->next;
    }
    else
        temp->next = 0;
}
