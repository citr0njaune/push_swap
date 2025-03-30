#include "push_swap.h"

void    init_stack_a(t_stack **a, int ac, char **av)
{
    t_stack *temp;
    int i;

    *a = malloc(sizeof(t_stack));
    temp = *a;
    parsing_args(&a, ac, av);
}

void    parsing_args(t_stack **a, int ac, char **av)
{
    int i;
    char    **nb;
    int num;

    i = 0;
    if (ac == 2)
        nb = ft_split(av[1], ' ');
    else
        nb = av + 1;
    while(nb[i])
    {
        if (!is_valide(nb[1]))
        {
            error_mess(ac, 1, a);
            exit(1);
        }
        num = ft_atoi(nb[1]);
        if (is_duplicate(a, num))
        {
            error_mess(ac, 0, a);
		    exit (1);
        }
        push_num(a, num);
        i++;
    }
}
void    error_mess(int ac, int choice,  t_stack **a)
{
    if (choice = 1)
    {
        if (ac == 2)
        ft_free(nb);
        ft_putendl_fd("Error", 2);  
    }
    else if (choice = 0)
    {
        ft_freelst(a);
        ft_putendl_fd("Error", 2);
    }
}

void	ft_freelst(t_node *a)
{
	t_node	*curr;
	t_node	*temp;

	curr = a;
	while (curr)
	{
		temp = curr;
		curr = curr->next;
		free(temp);
	}
}

void	ft_free(char **strr)
{
	int	i;

	i = 0;
	while (strr[i])
	{
		free(strr[i]);
		i++;
	}
	free(strr);
}
