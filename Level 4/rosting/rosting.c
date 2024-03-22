#include <unistd.h>

int main(int argc, char **argv)
{
	int i = 0;
	int start_word;
	int end_word;
	int flag = 0;

	if (argc > 1 && argv[1][0])
	{
		while (argv[1][i] == ' ' || argv[1][i] == '\t')
			i++;
		start_word = i;
		while (argv[1][i] != '\0' && argv[1][i] != ' ' && argv[1][i] != '\t')
			i++;
		end_word = i;
		while (argv[1][i] == ' ' || argv[1][i] == '\t')
			i++;
		while(argv[1][i])
        	{
            		while ((argv[1][i] == ' ' && argv[1][i + 1] == ' ') || (argv[1][i] == '\t' && argv[1][i + 1] == '\t'))
                		i++;
            		if (argv[1][i] == ' ' || argv[1][i] == '\t')
                		flag = 1;
            		write(1, &argv[1][i], 1);
            		i++;
        	}
        	if (flag)
            		write(1, " ", 1);
		while (start_word < end_word)
		{
			write(1, &argv[1][start_word], 1);
			start_word++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
