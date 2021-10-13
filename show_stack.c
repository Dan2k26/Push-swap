#include"push_swap.h"

void	show_stack(int *nbr, int num)
{
    int i;

    i = 0;
	printf("A || ");
    while(i < num)
    {
        printf("%d ", nbr[i]);
        i++;
    }
    printf("||\n\n");
    i = 0;
    printf("B || ");
    while(i < num)
    {
        printf("%d ", nbr[i]);
        i++;
    }
    printf("||\n");
}