int		max(int* tab, unsigned int len)
{
	int highest_num;
	int i = 0;

	// if (len == 0)
	// 	return (0);
	highest_num = tab[i];
	while (len > i)
	{
		if (tab[i] > highest_num)
			highest_num = tab[i];
		i++;
	}
	return (highest_num);
}

/*#include <stdio.h>

int main()
{
	int num[] = {-42, 0, -5, -64, -2, -68, -1};
	printf("%d\n", max(num, 7));
	return (0);
}*/
