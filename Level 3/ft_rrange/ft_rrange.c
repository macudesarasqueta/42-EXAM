#include <stdlib.h>

int *ft_rrange(int start, int end)
{
	int *range;
	int i = 0;
	int step = 1;
	int n = end - start;

	if (n < 0)
		n = -n;
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
    int start = 1;
    int end = 5;

    // Llamada a la función ft_rrange
    int *result = ft_rrange(start, end);

    // Imprimir el resultado
    if (result) 
    {
        // int i = 0;
        // int n = end - start;

        // if (n < 0)
        //     n = -n;
        // n++;
        while (i < n) 
	{
            printf("%d ", result[i]);
            i++;
        }
        printf("\n");

        // Liberar la memoria asignada
        free(result);
    } 
    else
        printf("Error: no se pudo asignar memoria.\n");
    return (0);
}*/
