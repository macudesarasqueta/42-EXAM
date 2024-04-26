char	*ft_strpbrk(const char *s1, const char *s2)
{
	int i = 0;
	int j = 0;

	if (!s1[i] || !s2[j])
		return (0);
	while (s1[i])
	{
		j = 0;
		while (s2[j])
		{
			if (s1[i] == s2[j])
				return (char *) s1;
			i++;
		}
		j++;
	}
	return (0);
}

/*#include <stdio.h>
#include <string.h>

int main()
{
	char str1[] = "hola gentezz";
	char str2[] = "hola mi zgente";
	printf("%s\n", strpbrk(str1, str2)); //output = hola gentezz
	printf("%s\n", ft_strpbrk(str1, str2)); // output = hola gentezz
	return (0);
}*/
