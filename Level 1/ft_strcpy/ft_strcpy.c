char    *ft_strcpy(char *s1, char *s2)
{
	int	i = 0;
	while (s2[i])
	{
		s1[i] = s2[i];
		i++;
	}
	s1[i] = '\0';
	return (s1);
}

#include <stdio.h>
int	main(void)
{
	char str1[] = "holaaaaaa";
	char str2[] = "kooooo";
	printf("%s\n", ft_strcpy(str1, str2));
	return (0);
}
