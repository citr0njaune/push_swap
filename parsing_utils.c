#include "push_swap.h"

void	parsing_args(t_stack **a, int ac, char **av, t_stack *temp)
{
	int i;
	char	**nb;
	int num;

	i = 0;
	if (ac == 2)
		nb = ft_split(av[1], ' ');
	else
		nb = av + 1;
	while(nb[i] && nb[i + 1])
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
		push_num(a, num, temp);
		i++;
	}
}

int	is_valide(char *str)
{
	int		i;
	long	num;
	int		sign;

	i = 0;
	sign = 1;
	num = 0;
	if (str[i] == 0)
		return (0);
	if(str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		num = num * 10 + (str[i] - '0');
		i++;
	}
	if (str[i])
		return (0);
	if ((num * sign) < INT_MIN || (num * sign) > INT_MAX || ft_strlen(str) > 11)
		return (0);
	return (1);
}

int	is_duplicate(t_stack *a)
{
	t_stack	*temp;
	t_stack	*temp2;

	temp = a;
	temp2 = a;
	while(temp)
	{
		while (temp2)
		{
			if (temp2->value == temp->value && temp != temp2)
				return (1);
			temp2 = temp2->next;
		}
		temp = temp->next;
		temp2 = a;
	}
	return (0);
}

int	is_sorted(t_stack *a)
{
	while(a)
	{
		if (a->next && a->value > a->next->value)
			return(0);
		a = a->next;
	}
	return (1);
}

void	push_num(t_stack **a, int value, t_stack *temp)
{
	temp->value = value;
	temp->next = malloc(sizeof(t_stack));
	if (!temp->next)
	{
		ft_freelst(temp);
		return ;
	}
	temp = temp->next;
}
