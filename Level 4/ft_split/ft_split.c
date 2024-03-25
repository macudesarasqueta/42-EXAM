#include <stdlib.h>

char    **ft_split(char *str)
{
	char **split;
	int i = 0;
	int j;
	int k = 0;

	split = (char **)malloc(sizeof(char) * 254);
	if (!split)
		return (NULL);
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
		i++;
	while (str[i])
	{
		j = 0;
		split[k] = (char *)malloc(sizeof(char) * 4000);
		if (!split[k])
			return (NULL);
		while (str[i] != ' ' && str[i] != '\t' && str[i] != '\n' && str[i])
			split[k][j++] = str[i++];
		while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
			i++;
		split[k][j] = '\0';
		k++;
	}
	split[k] = NULL;
	return (split);
}

#include <stdio.h>
#include <stdlib.h>

int main(void) 
{
	int i;
	char str[] = "Hello world   this is a test";
	char **result = ft_split(str);

    	if (result == NULL) 
	{
        	printf("Error: No se pudo asignar memoria.\n");
        	return (1);
    	}

	i = 0;
    	while (result[i++])
        	printf("[%d]: %s\n", i, result[i]);

    	// Liberar la memoria asignada
	i = 0;   
	while (result[i++])
        	free(result[i]);
    	free(result);
	return (0);
}

//output
[1]: world
[2]: this
[3]: is
[4]: a
[5]: test
[6]: (null)
