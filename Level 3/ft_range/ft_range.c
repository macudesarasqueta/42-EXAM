int	*ft_range(int start, int end)
{
	int	i;
	int	len;
	int	*mem;
	
	i = 0;
	len = end - start + 1;
	if (start > end)
		len = start - end + 1;
	mem = malloc(sizeof(int) * len);
	if (!mem)
		return (NULL);
	while (start >= end)
	{
		mem[i] = start;
		i++;
		start--;
	}
	while (start <= end)
	{
		mem[i] = start;
		i++;
		start++;
	}
	return (mem);
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
