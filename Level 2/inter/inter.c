#include <unistd.h>

int main(int argc, char *argv[])
{
	int i;
	int j;
	int	lookup[256] = {};

	i = 0;
	j = 0;
	if (argc == 3)
	{
		while (argv[1][i] != '\0')
		{	
			j = 0;
			while (argv[2][j] != '\0')
			{
				if (argv[1][i] == argv[2][j] && lookup[(int)argv[2][j]] == 0)
				{
					lookup[(int)argv[2][j]] = 1;
					write(1, &argv[2][j], 1);
				}
				j++;
			}
			i++;
		}
	}
	write (1, "\n", 1);
	return (0);
}