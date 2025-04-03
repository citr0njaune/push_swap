#include "push_swap.h"

void	rotate(t_stack **stack)
{
	t_stack *temp;
	    t_stack *current;

	temp = *stack;
	*stack = *stack->next;
	current = *stack;
	while (current->next)
		current = current->next;
	current->next = temp;
	temp->next = 0;
}

void	ra(t_stack **a)
{
	rotate(a);
	ft_putendl_fd("ra", 1);
}

void	rb(t_stack **b)
{
	rotate(b);
	ft_putendl_fd("rb", 1);
}
void	rr(t_stack **a, t_stack **b)
{
	rotate(a);
	rotate(b);
	ft_putendl_fd("rr", 1);
}
