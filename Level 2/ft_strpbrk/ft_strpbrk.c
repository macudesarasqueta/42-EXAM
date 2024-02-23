char	*ft_strpbrk(const char *s1, const char *s2)
{
	int	i = 0;

	if (!s1 || !s2)
		return (0);
	while (*s1)
	{
		i = 0;
		while (s2[i])
		{
			if (*s1 == s2[i])
				return (char *) s1;
			i++;
		}
		s1++;
	}
	return (0);
}

#include <string.h>
#include <stdio.h>

int	main()
{
	char str1[] = "iiiiiissssss";
	char str2[] = "maaaaasssss";
	printf("%s\n", strpbrk(str1, str2));
	printf("%s\n", ft_strpbrk(str1, str2));
	return (0);
}
