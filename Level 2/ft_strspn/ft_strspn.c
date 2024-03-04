#include <stdio.h>

size_t	ft_strspn(const char *s, const char *accept)
{
	int	found = 0;
	int count = 0;
	const char *a;

	while (*s)
	{
		found = 0;
		a = accept;
		while (*a)
		{
			if (*s == *a)
			{
				found = 1;
				break ;
			}
			a++;
		}
		if (!found)
			break ;
		s++;
		count++;
	}
	return (count);
}

/*#include <string.h>

int	main()
{
	char s[] = "holhllaa";
	char charset [] = "jjpllhhho";
	printf("%lu\n", strspn(s, charset));
	printf("%zu\n", ft_strspn(s, charset));
	return (0);
}*/
