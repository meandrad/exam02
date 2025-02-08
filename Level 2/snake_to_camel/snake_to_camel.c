#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char *argv[])
{
	if (argc == 2)
	{
		int	i;
		
		i = 0;
		while (argv[1][i] != '\0')
		{
			if (argv[1][0] >= 65 && argv[1][0] <= 97)
			{
				argv[1][0] += 32;
				ft_putchar(argv[1][0]);
			}
			else if (argv[1][i] == '_')
			{
				i++;
				argv[1][i] -= 32;
				ft_putchar(argv[1][i]);
			}
			else
				ft_putchar(argv[1][i]);
			i++;
		}
		write(1, "\n", 1);
	}
	return (0);
}