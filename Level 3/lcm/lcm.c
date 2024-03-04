unsigned int    lcm(unsigned int a, unsigned int b)
{
	unsigned int n;

	if (a == 0 || b == 0)
		return (0);
	if (a > b)
		n = a;
	else
		n = b;
	while (1)
	{
		if (n % a == 0 && n % b == 0)
			return (n);
		n++;
	}
}

/*#include <stdio.h>

int main()
{
	unsigned int a = 88;
	unsigned int b = 8;
	printf("%d\n", lcm(a, b));
	return (0);
}*/
