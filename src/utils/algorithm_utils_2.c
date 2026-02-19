#include "push_swap.h"

void	sa(t_list **s, t_simple_ops *ops)
{
	swap(s);
	ops->sa++;
	ft_printf("sa\n");
}


int	handle_sort_three_cases(t_list **s, t_simple_ops *ops)
{
	int	a;
	int	b;
	int	c;

	a = *(int *)(*s)->content; //top of stack
	b = *(int *)(*s)->next->content; //middle
	c = *(int *)(*s)->next->next->content; //bottom
	if (a > b && b > c)
	{
		sa(s, ops);
		rra(s, ops,1);
	}
	else if (a > b && b < c && a > c)
		ra(s, ops,1);
	else if (a > b && b < c && a < c)
		sa(s, ops);
	else if (a < b && b > c && a < c)
	{
		sa(s, ops);
		ra(s, ops,1);
	}
	else if (a < b && b > c && a > c)
		rra(s, ops,1);
	return (1);
}

void	sort_three(t_list **s, int bench_mode)
{
	t_simple_ops	ops;
	int				disorder;
	int				a, b, c;


	a = *(int *)(*s)->content; //top
	b = *(int *)(*s)->next->content; //middle
	c = *(int *)(*s)->next->next->content; //bottom
	init_ops(&ops); //reset all operations counters to 0
	disorder = compute_disorder(*s); //measures how unsorted the stack is
	if (a < b && b < c)
	{
		if (bench_mode) //if already sorted
			bench_report(disorder, "Simple / O(n²)", ops);
		return ;
	}
	handle_sort_three_cases(s, &ops); //if nor sort it now
	if (bench_mode)
		bench_report(disorder, "Simple / O(n²)", ops);
}

