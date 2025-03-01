#include <stdio.h>
#include <stdlib.h>

int is_prime(int num)
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

void fprime(int n)
{
	int factor;
	int first;

	factor = 2;
	first = 1;

	if (n == 1)
		printf("1");
	while(factor <= n)
	{
		if (n % factor == 0 && is_prime(factor))
		{
			if (first == 1)
				printf("%d", factor);
			else
				printf("*%d", factor);
			first = 0;
			n = n / factor;
		}
		else
			factor++;
	}
}

int main (int argc, char *argv[])
{
	int n;

	if (argc == 2)
	{
		n = atoi(argv[1]);
		fprime(n);
	}
	printf("\n");
	return (0);
}