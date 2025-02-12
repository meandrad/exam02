#include <unistd.h>

int	ft_atoi(const char *str)
{
	int	i;
	int	number;

	i = 0;
	number = 0;
	while (str[i] != '\0' && str[i] >= 48 && str[i] <= 57)
	{
		number = number * 10 + (str[i] - 48);
		i++;
	}
	return (number);
}

void	ft_putnbr(int num)
{
	char c;

	if (num >= 10)
		ft_putnbr(num / 10);
	c = (num % 10) + 48;
	write(1, &c, 1);
}

int	is_prime(int num)
{
	int	i;

	i = 2;
	while (i < num)
	{
		if (num % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	add_prime_sum(int num)
{
	int	sum;
	int	i;

	i = 2;
	sum = 0;
	while (i <= num)
	{
		if (is_prime(i) == 1)
			sum += i;
		i++;
	}
	return (sum);
}

int main (int argc, char *argv[])
{
	int	number;

	if (argc == 2)
	{
		number = ft_atoi(argv[1]);
		ft_putnbr(add_prime_sum(number));
	}
	else
		ft_putnbr(0);
	write(1, "\n", 1);
	return (0);
}