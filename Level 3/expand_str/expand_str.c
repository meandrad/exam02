#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
void	print_space()
{
	int i = 1;

	while (i <= 3)
	{
		ft_putchar(' ');
		i++;
	}
}
int	check(char c)
{
	if (c == 32 || c == 9)
		return (1);
	return (0);
}
void	expand_str(char *str)
{
	int	i;

	i = 0;
	while (check(str[i]) == 1)
		i++;
	while (str[i] != '\0')
	{
		while (check(str[i]) == 1 && check(str[i + 1]) == 1)
			i++;
		if (check(str[i]) == 1)
		{
			if (str[i + 1] == '\0')
				break ;
			print_space();
		}
		else
			ft_putchar(str[i]);
		i++;
	}
}

int main(int argc, char *argv[])
{
	if (argc == 2)
		expand_str(argv[1]);
	ft_putchar('\n');
	return (0);
}