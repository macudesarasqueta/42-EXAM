int	    is_power_of_2(unsigned int n)
{
	if (n == 0)
		return (0);
	else if (n == 1)
		return (1);
	else if (n % 2 == 0)
		return (1);
	else
		return (0);
}

/*#include <stdio.h>

int main()
{
	int n = 1;
	int n0 = 0;
	int n1 = 2;
	printf("num = 1: %d\n", is_power_of_2(n));
	printf("num = 0: %d\n", is_power_of_2(n0));
	printf("num = 1: %d\n", is_power_of_2(n1));
	return (0);
}*/
