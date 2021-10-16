#include"push_swap.h"

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
	printf("||\n");
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
