#include <unistd.h>

void	ft_putchar(int c)
{
	write(1, &c, 1);
}

void	write_number (int i)
{
	if (i >= 10)
		write_number(i/10);
	ft_putchar((i % 10) + '0');
}

int	main (void)
{
	int	i;

	i = 1;
	while (i <= 100)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
			write(1, "fizzbuzz\n", 9);
		else if (i % 3 == 0)
			write(1,"fizz\n", 5);
		else if (i % 5 == 0)
			write(1, "buzz\n", 5);
		else
		{
			write_number(i);
			write(1, "\n", 1);
		}
		i++;
	}
}