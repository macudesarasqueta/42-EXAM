#include <stdlib.h>

int     *ft_range(int start, int end)
{
	int *range;
	int i = 0;
	int len = abs(end - start) + 1;

	range = (int *)malloc(sizeof(int) * len);
	while (i < len)
	{
		if (start < end)
		{
			range[i] = start;
			start++;
			i++;
		}
		else
		{
			range[i] = start;
			start--;
			i++;
		}
	}
	return (range);
}

/*#include <stdio.h>

void	print_array(int *array, int size)
{
	for (int i = 0; i < size; i++)
		printf("%d ", array[i]);
	printf("\n");
}

int	main(void)
{
	int start = 0;
	int end = 3;
    	print_array(ft_range(start, end), 4);
	free(ft_range(start, end));
	return (0);
}*/
