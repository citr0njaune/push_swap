#ifndef PUSH_SWAP_H

# define PUSH_SWAP_H

# include <limits.h>
# include <stddef.h>
# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>

typedef struct s_stack
{
    struct  s_stack  *next;
    int     value;
}   t_stack;

void    push(t_stack **stack, t_stack **stack2);
void    pa(t_stack **a, t_stack **b);
void    pb(t_stack **b, t_stack **a);

void    reverse_rotate(t_stack **stack);
void	rra(t_stack **a);
void	rrb(t_stack **b);
void	rrr(t_stack **a, t_stack **b);

void	rotate(t_stack **stack);
void	ra(t_stack **a);
void	rb(t_stack **b);
void	rr(t_stack **a, t_stack **b);

void    swap(t_stack **stack);
void	sa(t_stack **a);
void	sb(t_stack **b);
void	ss(t_stack **a, t_stack **b);

void    parsing_args(t_stack **a, int ac, char **av, t_stack *temp);
int     is_valide(char *str);
int     is_duplicate(t_stack *a);
int	    is_sorted(t_stack *a);
void	push_num(t_stack **a, int value, t_stack *temp);

void	sort_five(t_stack **a, t_stack **b);
int     find_min(t_stack **a);
void	min_to_top(t_stack **a, int	min_position);

void	sort_three(t_stack **a);

void	sort_five(t_stack **a, t_stack **b);
int     find_min(t_stack **a);
void	min_to_top(t_stack **a, int	min_position);

void    init_stack_a(t_stack **a, int ac, char **av);
void    error_mess(int ac, int choice,  t_stack **a);
void	ft_freelst(t_stack *a);
void	ft_free(char **strr);
int	    ft_lstsize(t_stack *n);

#endif
