int    ft_strcmp(char *s1, char *s2)
{
	int	i = 0;
	while (s2[i] && s1[i] && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

/*#include <string.h>
#include <stdio.h>

int	main()
{
	printf("%d\n", strcmp("h", "h"));
	printf("%d\n", ft_strcmp("h", "h"));
	return (0);
}*/
