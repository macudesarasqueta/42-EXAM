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

int	main()
{
	int	*tab;
	int	i = 0;
	int	start;
	int	end;
	int	len;

	start = 1;
	end = 3;
 	len = end - start + 1;
	if (start > end)
		len = start - end + 1;
	tab = ft_rrange(start, end);
	while (i < len)
	{
		printf("%i ", tab[i]);
		i++;
	}
	printf("\n");
}*/
