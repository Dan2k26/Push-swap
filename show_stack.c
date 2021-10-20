#include"push_swap.h"

void	show_list(t_list *lst, char *msg)
{
	printf("%s\n\n", msg);
	while (lst != NULL)
	{
		printf("DIRECTION: %p\nData: %d\nNext node: %p\n\n",&lst->content, lst->content, lst->next);
		lst = lst->next;
	}
}

void	show_stack_list_data(t_list	*lst, char *msg)
{
	printf("\n%s\n\n", msg);
	printf("LIST ||");
	while (lst != NULL)
	{
		printf(" %d",lst->content);
		lst = lst->next;
	}
	printf("||\n\n");
}
 
void	show_stack_B(int *nbrb, int num, char *msg)
{
	int	i;

	i = 0;
	printf("\n%s\n", msg);
	printf("B || ");
	while (i < num)
	{
		printf("%d ", nbrb[i]);
		i++;
	}
	printf("||\n\n");
}

void	show_stack_A(int *nbra, int num, char *msg)
{
	int	i;

	i = 0;
	printf("\n%s\n", msg);
	printf("\nA || ");
	while (i < num)
	{
		printf("%d ", nbra[i]);
		i++;
	}
	printf("||\n\n");
}
