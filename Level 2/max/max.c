int		max(int* tab, unsigned int len)
{
	unsigned int res;
	unsigned i = 0;

	if (len == 0)
		return (0);
	res = tab[i];
	while (len > i)
	{
		if (tab[i] > res)
			res = tab[i];
		i++;
	}
	return (res);
}

/*#include <stdio.h>

int main()
{
	int num[] = {1, 3, 8, 0};
	printf("%d\n", max(num, 4));
	return (0);
}*/
