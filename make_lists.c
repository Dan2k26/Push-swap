#include"push_swap.h"

t_list	*make_lists(int *nbr, int len)
{
	t_list	*list;
	t_list	*node;
	t_list	*temp;
	int		i;

	list = NULL;
	node = ft_lstnew(nbr[len - 1]);
	list = node;
	i = len - 2;
	while (i >= 0)
	{
		node = ft_lstnew(nbr[i]);
		ft_lstadd_front(&list, node);
		i--;
	}
	temp = list;
	return (list);
}
