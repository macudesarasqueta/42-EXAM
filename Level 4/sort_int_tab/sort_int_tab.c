void sort_int_tab(int *tab, unsigned int size)
{
	unsigned int i = 0;
	int	temp;

	while (i < (size - 1))
	{
		if (tab[i] > tab[i + 1])
		{
			temp = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = temp;
			i = 0;
		}
		else
			i++;
	}
}

/*#include <stdio.h>

int main()
{
	int tab[] = {5, 7, 8, 3};
	unsigned int size = sizeof(tab) / sizeof(tab[0]);
	sort_int_tab(tab, size);
	unsigned int i = 0;
	while (i < size)
	{
		printf("%d\n", tab[i]);
		i++;
	}
	return (0);
}*/
