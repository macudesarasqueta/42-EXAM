#include <stdlib.h>

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
	while (end >= start)
	{
		mem[i] = start;
		i++;
		start++;
	}
	return (mem);
}

int	main(void)
{
	int	*tab;
	int	idx;
	int	start;
	int	end;
	int	size;

	idx = 0;
	start = 3;
	end = 5;
	if (start > end)
		size = start - end + 1;
	else
		size = end - start + 1;
	tab = ft_range(start, end);
	while (idx < size)
	{
		printf("%i", tab[idx]);
		idx++;
	}
	printf("\n");
}
