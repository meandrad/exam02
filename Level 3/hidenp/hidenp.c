#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	hidenp(char *s1, char *s2)
{
	int	i;
	int	j;
	int	check;

	i = 0;
	j = 0;
	check = 0;
	while (s1[i] != '\0' && s2[j] != '\0')
	{
		check = 0;
		if (s1[i] == s2[j])
		{
			check = 1;
			i++;
		}
		j++;
	}
	if (check == 1)
		return (1);
	else
		return (0);
}

int main (int argc, char *argv[])
{
	int	number;

	if (argc == 3)
	{
		number = hidenp(argv[1], argv[2]);
		if (number == 1)
			ft_putchar(49);
		else
			ft_putchar(48);
	}
	ft_putchar('\n');
	return (0);
}