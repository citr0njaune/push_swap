#include "push_swap.h"

void    sort_radix(t_stack **a, t_stack **b)
{
    int bits;
    int size;
    int i;
    int j;

    bits = find_max_bits(*a);
    i = -1;
    while (i < bits)
    {
        size = ft_lstsize(*a);
        j = -1;
        while (j < size)
        {
            if (((*a->value >> i) & 1) == 0)
                pb(b, a);
            else
                ra(a);
            j++;
        }
        while(*b)
            pa(a, b);
        i++;
    }
}

int find_max_bits(t_stack **a)
{
    int i;
    int max;
    int bits;

    bits = 0;
    max = (*a-)>value
    i = 0;
    while (a)
    {
        if (a->value > max)
            max = a->value;
        a = a->next;
    }
    while ((max >> bits) != 0)
        bits++;
    return (bits);
}
