#include "push_swap.h"

void    swap(t_stack **stack)
{
    int temp;

    temp = *stack->value;
	*stack->value = *stack->next->value;
	*stack->next->value = temp;
}

void	sa(t_node **a)
{
	swap(a);
	ft_putendl_fd("sa", 1);
}

void	sb(t_node **b)
{
	swap(b);
	ft_putendl_fd("sb", 1);
}

void	ss(t_node **a, t_node **b)
{
	swap(a);
	swap(b);
	ft_putendl_fd("ss", 1);
}