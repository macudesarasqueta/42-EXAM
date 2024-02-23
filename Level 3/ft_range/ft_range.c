#include <stdlib.h>
#include <unistd.h>

int     *ft_range(int start, int end)
{
	int	*range;
	int	i = 0;

	if (start > end)
		range = (int *)malloc(sizeof(int) * (start - end) + 1);
	else
		range = (int *)malloc(sizeof(int) * (end - start) + 1);
	while (start < end)
	{
		range[i] = start;
		write(1, &range[i], 1);
		start++;
		i++;
	}	
	range[i] = start;
	return (range);
}
#include <stdio.h>


/*void	print_array(int *array, int size)
{
	for (int i = 0; i < size; i++)
		printf("%d ", array[i]);
	printf("\n");
}*/

int	main(void)
{
	int start = 1;
	int end = 3;
	ft_range(start, end);
	//free(range_range);
	return (0);
}
