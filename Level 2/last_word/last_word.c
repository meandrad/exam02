#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int main (int argc, char *argv[])
{
	int i;
	
	if (argc == 2)
	{
		i = ft_strlen(argv[1]) - 1;
		while (argv[1][i] == 32 || argv[1][i] == 9) 
			i--;
		while (argv[1][i] > 32)
            i--;
        i++;
		while (argv[1][i] > 32 && argv[1][i] != '\0')
		{
			ft_putchar(argv[1][i]);
			i++;
		}
	}
	ft_putchar('\n');
	return (0);
}