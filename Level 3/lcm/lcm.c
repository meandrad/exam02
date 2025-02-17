unsigned int	ft_mdc(unsigned int a, unsigned int b)
{
	unsigned int temp;

	temp = 0;
	while (b != 0)
	{
		temp = b;
		b = a % b;
		a = temp;
	}
	return (a);
}

unsigned int	lcm(unsigned int a, unsigned int b)
{
	if (a == 0 || b ==0)
		return (0);
	else
		return ((a / ft_mdc(a, b)) * b);
}

#include <stdio.h>
int main (void)
{
	unsigned int number = lcm(2, 4);
	printf("%d", number);
	return (number);
	
}