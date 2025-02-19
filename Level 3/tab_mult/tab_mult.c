#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	atoi(char *str)
{
	int i;
	int result;

	i = 0;
	while (str[i] != 0 && str[i] >= 48 && str[i] <= 57)
	{
		result = result * 10 + str[i] - 48;
		i++;
	}
	return (result);
}

void	ft_putnbr(int num)
{
	if (num >= 10)
		ft_putnbr(num / 10);
	ft_putchar((num % 10) + 48);
}

int main (int argc, char *argv[])
{
	int number;
	int i;

	i = 1;
	if (argc == 2)
	{
		number = atoi(argv[1]);
		while (i < 10)
		{
			ft_putnbr(i);
			write(1, " x ", 3);
			ft_putnbr(number);
			write(1, " = ", 3);
			ft_putnbr(i * number);
			ft_putchar('\n');
			i++;
		}
	}
	else
		ft_putchar('\n');
	return (0);
}