#include <unistd.h>

int main(int argc, char **argv)
{
	int i = 0;
	int start;
	int end;

	if (argc == 2)
	{
		while (argv[1][i])
			i++;
		while (i >= 0)
		{
			end = i;
			while (argv[1][i] > 32 && argv[1][i] < 127)
				i--;
			start = i + 1;
			while (start <= end)
			{
				write(1, &argv[1][start], 1);
				start++;
			}
			if (argv[1][i] == ' ')
				write(1, " ", 1);
			i--;
		}
	}
	write(1, "\n", 1);
	return (0);
}
int     main(int argc, char **argv) 
{ 
        if (argc == 2) 
                rev_wstr(argv[1]); 
        write(1, "\n", 1); 
        return (0); 
}
