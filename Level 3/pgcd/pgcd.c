#include <stdio.h>
#include <stdlib.h>

int ft_pgcd(int n1, int n2)
{
	int	resto;
	
	resto = 0;
	if (n1 == 0|| n2 == 0)
		return (0);
	while (n2 != 0)
	{
		resto = n1 % n2;
		n1 = n2;
		n2 = resto;
	}
	return (n1);
}

int main (int argc, char *argv[])
{
	int n1;
	int n2;
	int result;

	result = 0;
	n1 = 0;
	n2 = 0;
	if (argc == 3)
	{
		n1 = atoi(argv[1]);
		n2 = atoi(argv[2]);
		if (n1 > 0 && n2 > 0)
		{
			result = ft_pgcd(n1, n2);
			printf("%d", result);
		}
	}
	printf("\n");
	return (0);
}


