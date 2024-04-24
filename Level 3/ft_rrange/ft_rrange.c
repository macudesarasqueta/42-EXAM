#include <stdlib.h>

int	*ft_rrange(int start, int end)
{
	int	i = 0;
	int	len;
	int	*mem;

	len = end - start + 1;
	if (start > end)
		len = start - end + 1;
	mem = malloc(sizeof(int) * len);
	if (!mem)
		return (NULL);
	while (end >= start)
	{
		mem[i] = end;
		i++;
		end--;
	}
	while (end <= start)
	{
		mem[i] = end;
		i++;
		end++;
	}
	return (mem);
}

/*#include <stdio.h>

int	main()
{
	int	*tab;
	int	idx;
	int	start;
	int	end;
	int	size;

	idx = 0;
	start = 1;
	end = 3;
	if (start > end)
		size = start - end + 1;
	else
		size = end - start + 1;
	tab = ft_rrange(start, end);
	while (idx < size)
	{
		printf("%i ", tab[idx]);
		idx++;
	}
	printf("\n");
}*/
