#include "push_swap.h"

void	init_stack(t_stack **a, int ac, char **av)
{
	char	**nb;
	int		i;

	if (ac == 2)
	{
		nb = ft_split(av[1], ' ');
		if (!nb)
			return ;
	}
	else
		nb = av + 1;
	parsing_args(a, nb);
	if (ac == 2)
		ft_free(nb);
}

void	ft_freelst(t_stack *a)
{
	t_stack	*curr;
	t_stack	*temp;

	curr = a;
	while (curr)
	{
		temp = curr;
		curr = curr->next;
	}
	ft_free(temp);
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
