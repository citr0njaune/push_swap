#include "push_swap.h"

void	reverse_rotate(t_stack **stack)
{
	t_stack *prev;
	t_stack *last;

	last = *stack;
	while (last->next)
	{
		prev = last;
		last = last->next
	}
	prev->next = 0;
	last->next = *stack;
	*stack = last;
}

void	rra(t_stack **a)
{
	reverse_rotate(a);
	ft_putendl_fd("rra", 1);
}

void	rrb(t_stack **b)
{
	reverse_rotate(b);
	ft_putendl_fd("rrb", 1);
}

void	rrr(t_stack **a, t_stack **b)
{
	reverse_rotate(a);
	reverse_rotate(b);
	ft_putendl_fd("rrr", 1);
}
