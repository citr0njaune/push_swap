#include "push_swap.h"

void    reverse_rotate(t_stack **stack)
{
    
}

void	rra(t_node **a)
{
	reverse_rotate(a);
	ft_putendl_fd("rra", 1);
}

void	rrb(t_node **b)
{
	reverse_rotate(b);
	ft_putendl_fd("rrb", 1);
}

void	rrr(t_node **a, t_node **b)
{
	reverse_rotate(a);
	reverse_rotate(b);
	ft_putendl_fd("rrr", 1);
}