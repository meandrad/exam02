#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
void	ft_putnbr(int n)
{
	char c;

	if (n >= 10)
		ft_putnbr(n / 10);
	c = (n % 10) + 48;
	ft_putchar(c);
}
int main (int argc, char *argv[])
{
	if (argc != 1)
	{
		(void)argv;
		ft_putnbr(argc - 1);
	}
	ft_putchar('\n');
	return (0);
}