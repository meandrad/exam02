#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void	ft_handle_operator(int num1, int num2, char operator)
{
	int	result;

	result = 0;
	if (operator == '+')
		result = num1 + num2;
	else if (operator == '-')
		result = num1 - num2;
	else if (operator == '*')
		result = num1 * num2;
	else if (operator == '/')
		result = num1 / num2;
	else if (operator == '%')
		result = num1 % num2;
	printf("%d\n", result);
}

int main(int argc, char *argv[])
{
	int	num1 = 0;
	int	num2 = 0;
	
	if (argc == 4)
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[3]);
		ft_handle_operator(num1, num2, argv[2][0]);
	}
	else
		write(1, "\n", 1);
	return (0);
}
