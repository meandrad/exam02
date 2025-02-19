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
	while (str[i] != '\0' && (str[i] >= 48 && str[i] <= 57))
	{
		number = number * 10 + str[i] - 48;
		i++;
	}
	return (number);
}
void ft_puthex(int nbr)
{
	char *digits = "0123456789abcdef";

	if (nbr >= 16)
		ft_puthex(nbr / 16);
	nbr = digits[nbr % 16];
	ft_putchar(nbr);
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