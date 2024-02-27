#include <unistd.h>
#include <stdio.h>

int	main(int argc, char **argv)
{
	int	i = 0;
	int	start;
	int	start2;
	int	end;

	if (argc == 2)
	{
		while (argv[1][i] == ' ' || argv[1][i] == '\t')
			i++;
		start = i;
		while (argv[1][i])
			i++;
		i--;
		while (i >= 0 && (argv[1][i] == ' ' || argv[1][i] == '\t'))
			i--;
		end = i;
		//printf("end = %d\n", end);
		while (i >= 0 && argv[1][i] != ' ' && argv[1][i] != '\t')
			i--;
		i++;
		start2 = i;
		//printf("start2 = %d\n", start2);
		while (start2 <= end)
		{
			write(1, &argv[1][start2], 1);
			start2++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
