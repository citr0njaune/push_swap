#include "push_swap.h"

void	sort_five(t_stack **a, t_stack **b)
{
	int	min_position;
	t_stack	*temp;

	while (ft_lstsize(a) > 3)
	{
		min_position = find_min(a);
		min_to_top(a, min);
		pb(b, a);
	}
	sort_three(a);
	pa(a, b);
	pa(a,b);
}

int	find_min(t_stack **a)
{
	t_stack	*curr;
	int	position;
	int	i;
	int	min_value;

	i = 0;
	min_value = *a->value;
	curr = *a;
	while(curr)
	{
		if (curr->value < min_value)
		{
			min_value = curr->value
			position = i;
		}
		curr = curr->next;
		i++;
	}
	return (position);
}

void	min_to_top(t_stack **a, int	min_position)
{
	t_stack	*min;
	t_stack	*temp;

	temp = *a;
	min = malloc(sizeof(t_stack));
	if (!min)
	{
		ft_free(min);
		return ;
	}
	while (min_position > 0)
	{
		min_position--;
		temp = temp->next;
	}
	min = temp;
	min->next = *a;
	a = a->next;
	while (a != temp)
		a = a->next;
	if (a->next->next != 0)
		a->next = a->next->next;
	else
		a->next = 0
}
