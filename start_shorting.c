#include"push_swap.h"
//num numero de numeros que hay
int	start_shorting(int argc, char **argv, int num)
{
	char	*str;
	int		i;
	char	**split;
	int		*nbrs;
	//comprobar duplicados
	str = union_argv(argv, argc);
	split = ft_split(str, ' ');
	nbrs = ft_calloc(num, sizeof(int));
	if (nbrs == NULL)
		return (0);
	i = 0;
	while (i < num)
	{
		nbrs[i] = ft_atoi(split[i]);
		i++;
	}
	ft_free_malloc(split);
	free(str);
	return (0);
}
