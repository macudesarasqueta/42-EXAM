#include <stdio.h>

size_t	ft_strcspn(const char *s, const char *reject)
{
	int	i = 0;
	int	j = 0;

	while (s[i])
	{
		j = 0;
		while (reject[j])
		{
			if (s[i] == reject[j])
				return (i);
			j++;
		}
		i++;
	}
	return (i);
}

#include <string.h>
#include <stdio.h>

int	main()
{
	//recorre toda la cadena s hasta que encuentra reject.
	printf("%lu\n", strcspn("opppp558i", "azl")); // result = 9
	printf("%zu\n", ft_strcspn("opppp558i", "azl")); // result = 9
	printf("%lu\n", strcspn("opplp558i", "azl")); // result = 3
	printf("%zu\n", ft_strcspn("opplp558i", "azl")); // result = 3
	return (0);
}
