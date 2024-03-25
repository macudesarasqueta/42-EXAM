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
