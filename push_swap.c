#include "push_swap.h"

int main(int ac, char **av)
{
    t_stack *a;
    t_stack *b;

    if (ac < 2)
        return (0);
    a = malloc(sizeof(t_stack *));
    b = malloc(sizeof(t_stack *));
    if (!b || !a)
        return (0);
    init_stack_a(&a, ac, av);
    if (is_sorted(a))
	{
        ft_freelst(a);
        free(b);
        return(1);
	}
    if (ft_lstsize == 3)
        sort_three();
    else if (ft_lstsize == 5)
        sort_five();
    else
        sort_radix();
    ft_freelst(a);
    ft_free(b);
    return (0);
}
