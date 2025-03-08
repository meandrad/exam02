#include <unistd.h>

void ft_putchar (char c)
{
	write(1, &c, 1);
}

int	atoi(char *str)
{
	int	i;
	int number;

	i = 0;
	number = 0;
	while (str[i] != '\0' && (str[i] >= 48 && str[i] <= 57))
	{
		number = number * 10 + str[i] - 48;
		i++;
	}
	return (number);
}
void	ft_puthex(unsigned int num)
{
	if (num >= 16)
		ft_puthex(num / 16);
	if ((num % 16) < 10)
		ft_putchar((num % 16) + '0');
	else
		ft_putchar((num % 16) - 10 + 'a');
}
int main (int argc, char *argv[])
{
	int number;

	number = 0;
	if (argc == 2)
	{
		number = atoi(argv[1]);
		ft_puthex(number);
	}
	write(1, "\n", 1);
	return (0);
}