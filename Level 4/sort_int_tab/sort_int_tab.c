void sort_int_tab(int *tab, unsigned int size)
{
	int i = 0;
	int swap;
	while (i < size - 1)
	{
		if (tab[i] > tab[i + 1])
		{
			swap = tab[i + 1];
			tab[i + 1] = tab[i];
			tab[i] = swap;
			i = 0;
		}
		else
			i++;
	}
}

#include <stdio.h>

int main()
{
	int tab[] = {9, 7, -7, 0};
	int size = 4;
	sort_int_tab(tab, size);
	unsigned int i = 0;
	while (i < size)
	{
		printf("%d\n", tab[i]);
		i++;
	}
	return (0);
}
