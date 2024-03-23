#include <stdlib.h>

int *ft_rrange(int start, int end)
{
	int *range;
	int i = 0;
	int step = 1;
	int n = end - start;

	if (n < 0)
		(n = n* (-1));
	n++;

	range = (int *)malloc(sizeof(int) * n);
	if (range)
	{
		if (start < end)
			step = -1;
		while (i < n)
		{
			range[i] = end;
			end = end + step;
			i++;
		}
	}
	return (range);
}

/*#include <stdio.h>

int main() 
{
    int start = 0;
    int end = -3;
    int *result = ft_rrange(start, end);
    
	if (result == NULL) 
	{
        printf("Error: No se pudo asignar memoria.\n");
        return 1;
    }

    printf("Resultado:\n");
    for (int i = 0; i < end - start + 1; i++) {
        printf("%d ", result[i]);
    }
    printf("\n");

    free(result);
    return 0;
}*/
