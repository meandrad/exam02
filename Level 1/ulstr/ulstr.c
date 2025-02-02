#include <unistd.h>

void ft_touper(char c)
{
	c -= 32;
	write(1, &c, 1);
}
void	ft_tolower(char c)
{
	c += 32;
	write(1, &c, 1);
}

int main (int argc, char *argv[])
{
	int i; 

	i = 0;
	if (argc == 2)
	{
		while (argv[1][i] != '\0')
		{
			if (argv[1][i] >= 97 && argv[1][i] <= 122)
				ft_touper(argv[1][i]);
			else if(argv[1][i] >= 65 && argv[1][i] <= 90)
				ft_tolower(argv[1][i]);
			else
				write(1, &argv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}