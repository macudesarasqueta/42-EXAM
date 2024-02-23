void	ft_swap(int *a, int *b)
{
	int	swap;

	swap = *a;
	*a = *b;
	*b = swap;
}

#include <stdio.h>
int	main(void)
{
	int a = 9;
	int b = 20;
	ft_swap(&a, &b);
	printf("tendria que ser 5: %d\n", a);
	return (0);
}
